set(MODBUS_PUBLIC_HEADERS
        include/modbus/PluginFactory.h
)

set(MODBUS_SOURCES
        src/modbus/PublishConfigReadVisitor.h
        src/modbus/SubscribeConfigReadVisitor.h
        src/modbus/ConfigStrings.h
        src/modbus/HeartbeatTransaction.h
        src/modbus/ModifyRegisterOp.h
        src/modbus/ModifyRegisterTransaction.h
        src/modbus/ModifyRegisterTransactionBase.h
        src/modbus/ModifyRegisterTransactionBase.cpp
        src/modbus/ICommandConfigBuilder.h
        src/modbus/CommandConfiguration.h
        src/modbus/IConfigurationBuilder.h
        src/modbus/IRegister.h
        src/modbus/IPollHandler.h
        src/modbus/IRequestBuilder.h
        src/modbus/MappingType.h
        src/modbus/MappingType.cpp
        src/modbus/MeasurementConfigWriteVisitor.h
        src/modbus/MeasurementConfigWriteVisitor.cpp
        src/modbus/ConfigWriteVisitor.h
        src/modbus/PollHandler.h
        src/modbus/PollHandler.cpp
        src/modbus/Plugin.h
        src/modbus/Plugin.cpp
        src/modbus/PluginFactory.cpp
        src/modbus/Register16.h
        src/modbus/Register32.h
        src/modbus/Source.h
        src/modbus/Source.cpp
        src/modbus/ICachedValue.h
        src/modbus/ITransactionProcessor.h
        src/modbus/TransactionProcessor.h
        src/modbus/TransactionProcessor.cpp
        src/modbus/ITransaction.h
        src/modbus/PollTransaction.h
        src/modbus/PollTransaction.cpp
        src/modbus/RegisterOperationType.h
        src/modbus/RegisterOperationType.cpp
        src/modbus/CommandSubscriptionHandler.h
        src/modbus/CommandSink.cpp
        src/modbus/CommandSink.h
        src/modbus/WriteRegisterTransaction.cpp
        src/modbus/WriteRegisterTransaction.h
        src/modbus/OrderedTransaction.cpp
        src/modbus/OrderedTransaction.h)

add_library(modbus-plugin STATIC ${MODBUS_PUBLIC_HEADERS} ${MODBUS_SOURCES})
target_link_libraries(modbus-plugin PUBLIC adapter-api modbus-cpp)
target_include_directories(modbus-plugin PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
clang_tidy(modbus-plugin)
clang_format(modbus-plugin)

add_subdirectory(./test)
