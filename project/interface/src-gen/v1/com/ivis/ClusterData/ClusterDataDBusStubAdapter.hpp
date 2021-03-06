/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.10.v201611111523.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_CLUSTERDATA_Cluster_Data_DBUS_STUB_ADAPTER_HPP_
#define V1_COM_IVIS_CLUSTERDATA_Cluster_Data_DBUS_STUB_ADAPTER_HPP_

#include <v1/com/ivis/ClusterData/ClusterDataStub.hpp>
#include "v1/com/ivis/ClusterData/ClusterDataDBusDeployment.hpp"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddressTranslator.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusStubAdapterHelper.hpp>
#include <CommonAPI/DBus/DBusStubAdapter.hpp>
#include <CommonAPI/DBus/DBusDeployment.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace ivis {
namespace ClusterData {

template <typename _Stub = ::v1::com::ivis::ClusterData::ClusterDataStub, typename... _Stubs>
class ClusterDataDBusStubAdapterInternal
    : public virtual ClusterDataStubAdapter,
      public CommonAPI::DBus::DBusStubAdapterHelper< _Stub, _Stubs...>
     {
public:
    typedef CommonAPI::DBus::DBusStubAdapterHelper< _Stub, _Stubs...> ClusterDataDBusStubAdapterHelper;

    ~ClusterDataDBusStubAdapterInternal() {
        deactivateManagedInstances();
        ClusterDataDBusStubAdapterHelper::deinit();
    }

    virtual bool hasFreedesktopProperties() {
        return false;
    }

    inline static const char* getInterface() {
        return ClusterData::getInterface();
    }

    /**
     * description: current vehicle speed. unit is km/h
     */
    void fireVehicleSpeedAttributeChanged(const uint16_t& value);

    /**
     * description: current engine speed. unit is RPM
     */
    void fireEngineSpeedAttributeChanged(const uint16_t& value);

    /**
     * description: current fuel level. unit is %
     */
    void fireFuelLevelAttributeChanged(const uint8_t& value);

    void deactivateManagedInstances() {
    }

    static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        CommonAPI::Version
        > getClusterDataInterfaceVersionStubDispatcher;

    /**
     * description: current vehicle speed. unit is km/h
     */
    static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
            ::v1::com::ivis::ClusterData::ClusterDataStub,
            uint16_t
            > getVehicleSpeedAttributeStubDispatcher;
    static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
            ::v1::com::ivis::ClusterData::ClusterDataStub,
            uint16_t
            > setVehicleSpeedAttributeStubDispatcher;

    /**
     * description: current engine speed. unit is RPM
     */
    static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
            ::v1::com::ivis::ClusterData::ClusterDataStub,
            uint16_t
            > getEngineSpeedAttributeStubDispatcher;
    static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
            ::v1::com::ivis::ClusterData::ClusterDataStub,
            uint16_t
            > setEngineSpeedAttributeStubDispatcher;

    /**
     * description: current fuel level. unit is %
     */
    static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
            ::v1::com::ivis::ClusterData::ClusterDataStub,
            uint8_t
            > getFuelLevelAttributeStubDispatcher;
    static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
            ::v1::com::ivis::ClusterData::ClusterDataStub,
            uint8_t
            > setFuelLevelAttributeStubDispatcher;

    ClusterDataDBusStubAdapterInternal(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
        const std::shared_ptr<_Stub> &_stub)
    : CommonAPI::DBus::DBusStubAdapter(_address, _connection,false),
      ClusterDataDBusStubAdapterHelper(_address, _connection, false, _stub) {
        /**
         * description: current vehicle speed. unit is km/h
         */
        ClusterDataDBusStubAdapterHelper::addStubDispatcher({ "getVehicleSpeedAttribute", "" }, &getVehicleSpeedAttributeStubDispatcher);
        ClusterDataDBusStubAdapterHelper::addStubDispatcher({ "setVehicleSpeedAttribute", "q" }, &setVehicleSpeedAttributeStubDispatcher);
        /**
         * description: current engine speed. unit is RPM
         */
        ClusterDataDBusStubAdapterHelper::addStubDispatcher({ "getEngineSpeedAttribute", "" }, &getEngineSpeedAttributeStubDispatcher);
        ClusterDataDBusStubAdapterHelper::addStubDispatcher({ "setEngineSpeedAttribute", "q" }, &setEngineSpeedAttributeStubDispatcher);
        /**
         * description: current fuel level. unit is %
         */
        ClusterDataDBusStubAdapterHelper::addStubDispatcher({ "getFuelLevelAttribute", "" }, &getFuelLevelAttributeStubDispatcher);
        ClusterDataDBusStubAdapterHelper::addStubDispatcher({ "setFuelLevelAttribute", "y" }, &setFuelLevelAttributeStubDispatcher);
        ClusterDataDBusStubAdapterHelper::addStubDispatcher({ "getInterfaceVersion", "" }, &getClusterDataInterfaceVersionStubDispatcher);
    }

protected:
    virtual const char* getMethodsDBusIntrospectionXmlData() const {
        static const std::string introspectionData =
            "<method name=\"getInterfaceVersion\">\n"
                "<arg name=\"value\" type=\"uu\" direction=\"out\" />"
            "</method>\n"
            "<method name=\"getVehicleSpeedAttribute\">\n"
            "<arg name=\"value\" type=\"q\" direction=\"out\" />"
            "</method>\n"
            "<method name=\"setVehicleSpeedAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"q\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"q\" direction=\"out\" />\n"
            "</method>\n"
            "<signal name=\"onVehicleSpeedAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"q\" />\n"
            "</signal>\n"
            "<method name=\"getEngineSpeedAttribute\">\n"
            "<arg name=\"value\" type=\"q\" direction=\"out\" />"
            "</method>\n"
            "<method name=\"setEngineSpeedAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"q\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"q\" direction=\"out\" />\n"
            "</method>\n"
            "<signal name=\"onEngineSpeedAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"q\" />\n"
            "</signal>\n"
            "<method name=\"getFuelLevelAttribute\">\n"
            "<arg name=\"value\" type=\"y\" direction=\"out\" />"
            "</method>\n"
            "<method name=\"setFuelLevelAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"y\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"y\" direction=\"out\" />\n"
            "</method>\n"
            "<signal name=\"onFuelLevelAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"y\" />\n"
            "</signal>\n"
            ;
        return introspectionData.c_str();
    }

private:
};


template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
    ::v1::com::ivis::ClusterData::ClusterDataStub,
    CommonAPI::Version
    > ClusterDataDBusStubAdapterInternal<_Stub, _Stubs...>::getClusterDataInterfaceVersionStubDispatcher(&ClusterDataStub::getInterfaceVersion, "uu");

/**
 * description: current vehicle speed. unit is km/h
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        uint16_t
        > ClusterDataDBusStubAdapterInternal<_Stub, _Stubs...>::getVehicleSpeedAttributeStubDispatcher(
            &::v1::com::ivis::ClusterData::ClusterDataStub::getVehicleSpeedAttribute
            , "q"
            );
template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        uint16_t
        > ClusterDataDBusStubAdapterInternal<_Stub, _Stubs...>::setVehicleSpeedAttributeStubDispatcher(
                &::v1::com::ivis::ClusterData::ClusterDataStub::getVehicleSpeedAttribute,
                &ClusterDataStubRemoteEvent::onRemoteSetVehicleSpeedAttribute,
                &ClusterDataStubRemoteEvent::onRemoteVehicleSpeedAttributeChanged
                ,&ClusterDataStubAdapter::fireVehicleSpeedAttributeChanged
                ,"q"
                );

/**
 * description: current engine speed. unit is RPM
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        uint16_t
        > ClusterDataDBusStubAdapterInternal<_Stub, _Stubs...>::getEngineSpeedAttributeStubDispatcher(
            &::v1::com::ivis::ClusterData::ClusterDataStub::getEngineSpeedAttribute
            , "q"
            );
template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        uint16_t
        > ClusterDataDBusStubAdapterInternal<_Stub, _Stubs...>::setEngineSpeedAttributeStubDispatcher(
                &::v1::com::ivis::ClusterData::ClusterDataStub::getEngineSpeedAttribute,
                &ClusterDataStubRemoteEvent::onRemoteSetEngineSpeedAttribute,
                &ClusterDataStubRemoteEvent::onRemoteEngineSpeedAttributeChanged
                ,&ClusterDataStubAdapter::fireEngineSpeedAttributeChanged
                ,"q"
                );

/**
 * description: current fuel level. unit is %
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        uint8_t
        > ClusterDataDBusStubAdapterInternal<_Stub, _Stubs...>::getFuelLevelAttributeStubDispatcher(
            &::v1::com::ivis::ClusterData::ClusterDataStub::getFuelLevelAttribute
            , "y"
            );
template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        uint8_t
        > ClusterDataDBusStubAdapterInternal<_Stub, _Stubs...>::setFuelLevelAttributeStubDispatcher(
                &::v1::com::ivis::ClusterData::ClusterDataStub::getFuelLevelAttribute,
                &ClusterDataStubRemoteEvent::onRemoteSetFuelLevelAttribute,
                &ClusterDataStubRemoteEvent::onRemoteFuelLevelAttributeChanged
                ,&ClusterDataStubAdapter::fireFuelLevelAttributeChanged
                ,"y"
                );

/**
 * description: current vehicle speed. unit is km/h
 */
template <typename _Stub, typename... _Stubs>
void ClusterDataDBusStubAdapterInternal<_Stub, _Stubs...>::fireVehicleSpeedAttributeChanged(const uint16_t& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    uint16_t
    >>
        ::sendSignal(
            *this,
            "onVehicleSpeedAttributeChanged",
            "q",
            value
    
    );
}

/**
 * description: current engine speed. unit is RPM
 */
template <typename _Stub, typename... _Stubs>
void ClusterDataDBusStubAdapterInternal<_Stub, _Stubs...>::fireEngineSpeedAttributeChanged(const uint16_t& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    uint16_t
    >>
        ::sendSignal(
            *this,
            "onEngineSpeedAttributeChanged",
            "q",
            value
    
    );
}

/**
 * description: current fuel level. unit is %
 */
template <typename _Stub, typename... _Stubs>
void ClusterDataDBusStubAdapterInternal<_Stub, _Stubs...>::fireFuelLevelAttributeChanged(const uint8_t& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    uint8_t
    >>
        ::sendSignal(
            *this,
            "onFuelLevelAttributeChanged",
            "y",
            value
    
    );
}


template <typename _Stub = ::v1::com::ivis::ClusterData::ClusterDataStub, typename... _Stubs>
class ClusterDataDBusStubAdapter
    : public ClusterDataDBusStubAdapterInternal<_Stub, _Stubs...>,
      public std::enable_shared_from_this< ClusterDataDBusStubAdapter<_Stub, _Stubs...>> {
public:
    ClusterDataDBusStubAdapter(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
        const std::shared_ptr<_Stub> &_stub)
        : CommonAPI::DBus::DBusStubAdapter(
            _address,
            _connection,
            false),
          ClusterDataDBusStubAdapterInternal<_Stub, _Stubs...>(
            _address,
            _connection,
            _stub) {
    }
};

} // namespace ClusterData
} // namespace ivis
} // namespace com
} // namespace v1

#endif // V1_COM_IVIS_CLUSTERDATA_Cluster_Data_DBUS_STUB_ADAPTER_HPP_
