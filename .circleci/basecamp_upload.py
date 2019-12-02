import datetime
import os
import sys
import requests
from pathlib import Path

# Constants
OAUTH2_BASE_URL = 'https://launchpad.37signals.com'
USER_AGENT = 'OpenFMB CircleCI (https://openenergysolutionsinc.com/)'
BC3_BASE_URL = 'https://3.basecampapi.com'

# Environments variables
CLIENT_ID = os.environ['BC3_CLIENT_ID']
CLIENT_SECRET = os.environ['BC3_CLIENT_SECRET']
REDIRECT_URI = os.environ['BC3_REDIRECT_URL']
REFRESH_TOKEN = os.environ['BC3_REFRESH_TOKEN']

ACCOUNT_ID = os.environ['BC3_ACCOUNT_ID']
PROJECT_ID = os.environ['BC3_PROJECT_ID']
VAULT_ID = os.environ['BC3_VAULT_ID']

# Session setup
session = requests.session()
session.headers['User-Agent'] = USER_AGENT

# Authentication
res = session.post(
    f'{OAUTH2_BASE_URL}/authorization/token',
    params = {
        'type': 'refresh',
        'refresh_token': REFRESH_TOKEN,
        'client_id': CLIENT_ID,
        'client_secret': CLIENT_SECRET,
        'redirect_uri': REDIRECT_URI,
    }
)
access_token = res.json()['access_token']
session.headers['Authorization'] = f'Bearer {access_token}'

# Helper functions
def create_folder(vault, name):
    res = session.post(
        f'{BC3_BASE_URL}/{ACCOUNT_ID}/buckets/{PROJECT_ID}/vaults/{vault}/vaults.json',
        json = {
            'title': name,
        }
    )
    return res.json()['id']

def upload_file(vault, file):
    res = session.post(
        f'{BC3_BASE_URL}/{ACCOUNT_ID}/attachments.json',
        params = {
            'name': file.name
        },
        data = file.open(mode='rb').read()
    )
    attachable_sgid = res.json()['attachable_sgid']

    res = session.post(
        f'{BC3_BASE_URL}/{ACCOUNT_ID}/buckets/{PROJECT_ID}/vaults/{vault}/uploads.json',
        json = {
            'attachable_sgid': attachable_sgid,
        }
    )
    return res.json()['id']

# Iterate the directory and upload the files/folders
def walk_dir(dir, bc3_dir):
    for path in dir.glob('*'):
        if path.is_dir():
            print(f'Found directory {path}')
            new_bc3_dir = create_folder(bc3_dir, path.stem)
            walk_dir(path, new_bc3_dir)
        elif path.is_file():
            print(f'Found file: {path}')
            upload_file(bc3_dir, path)

# Create upload directory
tag = os.environ['CIRCLE_TAG'] if 'CIRCLE_TAG' in os.environ else os.environ['CIRCLE_SHA1']
date = datetime.datetime.now().strftime('%Y-%m-%d')
root_folder = create_folder(VAULT_ID, f'{date} - {tag}')

# Upload the files
path = sys.argv[1] if len(sys.argv) > 1 else '.'
walk_dir(Path(path), root_folder)
