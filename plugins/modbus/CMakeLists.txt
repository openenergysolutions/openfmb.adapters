set(MODBUS_PUBLIC_HEADERS
    ./include/modbus/master/PluginFactory.h
    ./include/modbus/outstation/PluginFactory.h
)

set(MODBUS_SOURCES
    # master files
    ./src/modbus/master/Bit.h
    ./src/modbus/master/CommandOptions.h
    ./src/modbus/master/CommandSinkActions.h
    ./src/modbus/master/DoubleWord.h
    ./src/modbus/master/DoubleWord.cpp
    ./src/modbus/master/PublishConfigReadVisitor.h
    ./src/modbus/master/SubscribeConfigReadVisitor.h
    ./src/modbus/master/ConfigStrings.h
    ./src/modbus/master/HeartbeatTransaction.h
    ./src/modbus/master/ModifyRegisterOp.h
    ./src/modbus/master/ModifyRegisterOp.cpp
    ./src/modbus/master/ModifyRegisterTransaction.h
    ./src/modbus/master/ModifyRegisterTransactionBase.h
    ./src/modbus/master/ModifyRegisterTransactionBase.cpp
    ./src/modbus/master/ICommandConfigBuilder.h
    ./src/modbus/master/CommandConfiguration.h
    ./src/modbus/master/IConfigurationBuilder.h
    ./src/modbus/master/IRegister.h
    ./src/modbus/master/IPollHandler.h
    ./src/modbus/master/IRequestBuilder.h
    ./src/modbus/master/MeasurementConfigWriteVisitor.h
    ./src/modbus/master/MeasurementConfigWriteVisitor.cpp
    ./src/modbus/master/MultipleRegisterEnumMapping.h
    ./src/modbus/master/MultipleRegisterEnumMapping.cpp
    ./src/modbus/master/ControlConfigWriteVisitor.h
    ./src/modbus/master/ControlConfigWriteVisitor.cpp
    ./src/modbus/master/PollHandler.h
    ./src/modbus/master/PollHandler.cpp
    ./src/modbus/master/Plugin.h
    ./src/modbus/master/Plugin.cpp
    ./src/modbus/master/PluginFactory.cpp
    ./src/modbus/master/Register16.h
    ./src/modbus/master/Register32.h
    ./src/modbus/master/ICachedValue.h
    ./src/modbus/master/ITransactionProcessor.h
    ./src/modbus/master/TransactionProcessor.h
    ./src/modbus/master/TransactionProcessor.cpp
    ./src/modbus/master/ITransaction.h
    ./src/modbus/master/PollTransaction.h
    ./src/modbus/master/PollTransaction.cpp
    ./src/modbus/master/CommandSubscriptionHandler.h
    ./src/modbus/master/CommandSink.cpp
    ./src/modbus/master/CommandSink.h
    ./src/modbus/master/SessionWrapper.h
    ./src/modbus/master/SinglePollTransaction.h
    ./src/modbus/master/SingleRegisterEnumMapping.h
    ./src/modbus/master/SingleRegisterEnumMapping.cpp
    ./src/modbus/master/WriteRegisterTransaction.h
    ./src/modbus/master/WriteRegisterTransaction.cpp
    ./src/modbus/master/WriteMultipleRegistersTransaction.h
    ./src/modbus/master/WriteMultipleRegistersTransaction.cpp
    ./src/modbus/master/WriteSingleCoilTransaction.h
    ./src/modbus/master/WriteSingleCoilTransaction.cpp
    ./src/modbus/master/FlipSingleCoilTransaction.h
    ./src/modbus/master/FlipSingleCoilTransaction.cpp
    ./src/modbus/master/OrderedTransaction.cpp
    ./src/modbus/master/OrderedTransaction.h
    ./src/modbus/master/CommandSinkActions.h
    ./src/modbus/master/SessionWrapper.h
    ./src/modbus/master/CommandOptions.h
    # outstation files
    ./src/modbus/outstation/PluginFactory.cpp
    # generated enums
    ./src/modbus/generated/BitwiseOperation.h
    ./src/modbus/generated/BitwiseOperation.cpp
    ./src/modbus/generated/EnumMappingType.h
    ./src/modbus/generated/EnumMappingType.cpp
    ./src/modbus/generated/LogLevel.h
    ./src/modbus/generated/LogLevel.cpp
    ./src/modbus/generated/OutputType.h
    ./src/modbus/generated/OutputType.cpp
    ./src/modbus/generated/RegisterMapping.h
    ./src/modbus/generated/RegisterMapping.cpp
    ./src/modbus/generated/SourceType.h
    ./src/modbus/generated/SourceType.cpp)

add_library(modbus-plugin STATIC ${MODBUS_PUBLIC_HEADERS} ${MODBUS_SOURCES})
target_link_libraries(modbus-plugin PUBLIC adapter-util modbus-cpp PRIVATE exe4cpp ser4cpp asio)
target_include_directories(modbus-plugin
    PUBLIC ./include
    PRIVATE ./src/modbus
)
clang_tidy(modbus-plugin)
clang_format(modbus-plugin EXCLUDES "/generated/")

add_subdirectory(./test)
