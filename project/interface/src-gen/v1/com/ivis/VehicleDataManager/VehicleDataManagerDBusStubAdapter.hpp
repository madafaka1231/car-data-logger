/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.10.v201611111523.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_VEHICLEDATAMANAGER_Vehicle_Data_Manager_DBUS_STUB_ADAPTER_HPP_
#define V1_COM_IVIS_VEHICLEDATAMANAGER_Vehicle_Data_Manager_DBUS_STUB_ADAPTER_HPP_

#include <v1/com/ivis/VehicleDataManager/VehicleDataManagerStub.hpp>
#include "v1/com/ivis/VehicleDataManager/VehicleDataManagerDBusDeployment.hpp"
#include <v1/com/ivis/VehicleDataManager/VehicleDataManagerTypesDBusDeployment.hpp>

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
namespace VehicleDataManager {

template <typename _Stub = ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub, typename... _Stubs>
class VehicleDataManagerDBusStubAdapterInternal
    : public virtual VehicleDataManagerStubAdapter,
      public CommonAPI::DBus::DBusStubAdapterHelper< _Stub, _Stubs...>
     {
public:
    typedef CommonAPI::DBus::DBusStubAdapterHelper< _Stub, _Stubs...> VehicleDataManagerDBusStubAdapterHelper;

    ~VehicleDataManagerDBusStubAdapterInternal() {
        deactivateManagedInstances();
        VehicleDataManagerDBusStubAdapterHelper::deinit();
    }

    virtual bool hasFreedesktopProperties() {
        return false;
    }

    inline static const char* getInterface() {
        return VehicleDataManager::getInterface();
    }

    /**
     * description: This attribute contains the current speed of this vehicle. The unit of value is
     *   km/h or mph.
     */
    void fireVehicleSpeedAttributeChanged(const ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed& value);

    /**
     * description: This attribute contains the VIN(Vehicle Identification Number as defined by ISO
     *   3779) information for this vehicle. It's 17 bytes long characters.
     */
    void fireVinAttributeChanged(const std::string& value);

    /**
     * description: This attribute contains the current status of transmission gear.
     */
    void fireTransmissionGearStatusAttributeChanged(const ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::TransmissionGearStatus& value);

    void fireDrivingRestrictionAttributeChanged(const bool& value);

    void fireLowFuelWarningAttributeChanged(const bool& value);

    void deactivateManagedInstances() {
    }

    static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        CommonAPI::Version
        > getVehicleDataManagerInterfaceVersionStubDispatcher;

    /**
     * description: This attribute contains the current speed of this vehicle. The unit of value is
     *   km/h or mph.
     */
    static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
            ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
            ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed,
            ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes_::VehicleSpeedDeployment_t
            > getVehicleSpeedAttributeStubDispatcher;
    static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
            ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
            ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed,
            ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes_::VehicleSpeedDeployment_t
            > setVehicleSpeedAttributeStubDispatcher;

    /**
     * description: This attribute contains the VIN(Vehicle Identification Number as defined by ISO
     *   3779) information for this vehicle. It's 17 bytes long characters.
     */
    static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
            ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
            std::string,
            CommonAPI::DBus::StringDeployment
            > getVinAttributeStubDispatcher;
    static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
            ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
            std::string,
            CommonAPI::DBus::StringDeployment
            > setVinAttributeStubDispatcher;

    /**
     * description: This attribute contains the current status of transmission gear.
     */
    static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
            ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
            ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::TransmissionGearStatus
            > getTransmissionGearStatusAttributeStubDispatcher;
    static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
            ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
            ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::TransmissionGearStatus
            > setTransmissionGearStatusAttributeStubDispatcher;

    static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
            ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
            bool
            > getDrivingRestrictionAttributeStubDispatcher;
    static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
            ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
            bool
            > setDrivingRestrictionAttributeStubDispatcher;

    static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
            ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
            bool
            > getLowFuelWarningAttributeStubDispatcher;
    static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
            ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
            bool
            > setLowFuelWarningAttributeStubDispatcher;

    VehicleDataManagerDBusStubAdapterInternal(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
        const std::shared_ptr<_Stub> &_stub)
    : CommonAPI::DBus::DBusStubAdapter(_address, _connection,false),
      VehicleDataManagerDBusStubAdapterHelper(_address, _connection, false, _stub) {
        /**
         * description: This attribute contains the current speed of this vehicle. The unit of value is
         *   km/h or mph.
         */
        VehicleDataManagerDBusStubAdapterHelper::addStubDispatcher({ "getVehicleSpeedAttribute", "" }, &getVehicleSpeedAttributeStubDispatcher);
        VehicleDataManagerDBusStubAdapterHelper::addStubDispatcher({ "setVehicleSpeedAttribute", "(ns)" }, &setVehicleSpeedAttributeStubDispatcher);
        /**
         * description: This attribute contains the VIN(Vehicle Identification Number as defined by ISO
         *   3779) information for this vehicle. It's 17 bytes long characters.
         */
        VehicleDataManagerDBusStubAdapterHelper::addStubDispatcher({ "getVinAttribute", "" }, &getVinAttributeStubDispatcher);
        VehicleDataManagerDBusStubAdapterHelper::addStubDispatcher({ "setVinAttribute", "s" }, &setVinAttributeStubDispatcher);
        /**
         * description: This attribute contains the current status of transmission gear.
         */
        VehicleDataManagerDBusStubAdapterHelper::addStubDispatcher({ "getTransmissionGearStatusAttribute", "" }, &getTransmissionGearStatusAttributeStubDispatcher);
        VehicleDataManagerDBusStubAdapterHelper::addStubDispatcher({ "setTransmissionGearStatusAttribute", "i" }, &setTransmissionGearStatusAttributeStubDispatcher);
        VehicleDataManagerDBusStubAdapterHelper::addStubDispatcher({ "getDrivingRestrictionAttribute", "" }, &getDrivingRestrictionAttributeStubDispatcher);
        VehicleDataManagerDBusStubAdapterHelper::addStubDispatcher({ "setDrivingRestrictionAttribute", "b" }, &setDrivingRestrictionAttributeStubDispatcher);
        VehicleDataManagerDBusStubAdapterHelper::addStubDispatcher({ "getLowFuelWarningAttribute", "" }, &getLowFuelWarningAttributeStubDispatcher);
        VehicleDataManagerDBusStubAdapterHelper::addStubDispatcher({ "setLowFuelWarningAttribute", "b" }, &setLowFuelWarningAttributeStubDispatcher);
        VehicleDataManagerDBusStubAdapterHelper::addStubDispatcher({ "getInterfaceVersion", "" }, &getVehicleDataManagerInterfaceVersionStubDispatcher);
    }

protected:
    virtual const char* getMethodsDBusIntrospectionXmlData() const {
        static const std::string introspectionData =
            "<method name=\"getInterfaceVersion\">\n"
                "<arg name=\"value\" type=\"uu\" direction=\"out\" />"
            "</method>\n"
            "<method name=\"getVehicleSpeedAttribute\">\n"
            "<arg name=\"value\" type=\"(ns)\" direction=\"out\" />"
            "</method>\n"
            "<method name=\"setVehicleSpeedAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"(ns)\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"(ns)\" direction=\"out\" />\n"
            "</method>\n"
            "<signal name=\"onVehicleSpeedAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"(ns)\" />\n"
            "</signal>\n"
            "<method name=\"getVinAttribute\">\n"
            "<arg name=\"value\" type=\"s\" direction=\"out\" />"
            "</method>\n"
            "<method name=\"setVinAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"s\" direction=\"out\" />\n"
            "</method>\n"
            "<signal name=\"onVinAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"s\" />\n"
            "</signal>\n"
            "<method name=\"getTransmissionGearStatusAttribute\">\n"
            "<arg name=\"value\" type=\"i\" direction=\"out\" />"
            "</method>\n"
            "<method name=\"setTransmissionGearStatusAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"i\" direction=\"out\" />\n"
            "</method>\n"
            "<signal name=\"onTransmissionGearStatusAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"i\" />\n"
            "</signal>\n"
            "<method name=\"getDrivingRestrictionAttribute\">\n"
            "<arg name=\"value\" type=\"b\" direction=\"out\" />"
            "</method>\n"
            "<method name=\"setDrivingRestrictionAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"b\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"b\" direction=\"out\" />\n"
            "</method>\n"
            "<signal name=\"onDrivingRestrictionAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"b\" />\n"
            "</signal>\n"
            "<method name=\"getLowFuelWarningAttribute\">\n"
            "<arg name=\"value\" type=\"b\" direction=\"out\" />"
            "</method>\n"
            "<method name=\"setLowFuelWarningAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"b\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"b\" direction=\"out\" />\n"
            "</method>\n"
            "<signal name=\"onLowFuelWarningAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"b\" />\n"
            "</signal>\n"
            ;
        return introspectionData.c_str();
    }

private:
};


template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
    ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
    CommonAPI::Version
    > VehicleDataManagerDBusStubAdapterInternal<_Stub, _Stubs...>::getVehicleDataManagerInterfaceVersionStubDispatcher(&VehicleDataManagerStub::getInterfaceVersion, "uu");

/**
 * description: This attribute contains the current speed of this vehicle. The unit of value is
 *   km/h or mph.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed,
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes_::VehicleSpeedDeployment_t
        > VehicleDataManagerDBusStubAdapterInternal<_Stub, _Stubs...>::getVehicleSpeedAttributeStubDispatcher(
            &::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub::getVehicleSpeedAttribute
            , "(ns)"
            );
template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed,
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes_::VehicleSpeedDeployment_t
        > VehicleDataManagerDBusStubAdapterInternal<_Stub, _Stubs...>::setVehicleSpeedAttributeStubDispatcher(
                &::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub::getVehicleSpeedAttribute,
                &VehicleDataManagerStubRemoteEvent::onRemoteSetVehicleSpeedAttribute,
                &VehicleDataManagerStubRemoteEvent::onRemoteVehicleSpeedAttributeChanged
                ,&VehicleDataManagerStubAdapter::fireVehicleSpeedAttributeChanged
                ,"(ns)"
                );

/**
 * description: This attribute contains the VIN(Vehicle Identification Number as defined by ISO
 *   3779) information for this vehicle. It's 17 bytes long characters.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        std::string,
        CommonAPI::DBus::StringDeployment
        > VehicleDataManagerDBusStubAdapterInternal<_Stub, _Stubs...>::getVinAttributeStubDispatcher(
            &::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub::getVinAttribute
            , "s"
            );
template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        std::string,
        CommonAPI::DBus::StringDeployment
        > VehicleDataManagerDBusStubAdapterInternal<_Stub, _Stubs...>::setVinAttributeStubDispatcher(
                &::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub::getVinAttribute,
                &VehicleDataManagerStubRemoteEvent::onRemoteSetVinAttribute,
                &VehicleDataManagerStubRemoteEvent::onRemoteVinAttributeChanged
                ,&VehicleDataManagerStubAdapter::fireVinAttributeChanged
                ,"s"
                );

/**
 * description: This attribute contains the current status of transmission gear.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::TransmissionGearStatus
        > VehicleDataManagerDBusStubAdapterInternal<_Stub, _Stubs...>::getTransmissionGearStatusAttributeStubDispatcher(
            &::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub::getTransmissionGearStatusAttribute
            , "i"
            );
template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::TransmissionGearStatus
        > VehicleDataManagerDBusStubAdapterInternal<_Stub, _Stubs...>::setTransmissionGearStatusAttributeStubDispatcher(
                &::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub::getTransmissionGearStatusAttribute,
                &VehicleDataManagerStubRemoteEvent::onRemoteSetTransmissionGearStatusAttribute,
                &VehicleDataManagerStubRemoteEvent::onRemoteTransmissionGearStatusAttributeChanged
                ,&VehicleDataManagerStubAdapter::fireTransmissionGearStatusAttributeChanged
                ,"i"
                );

template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        bool
        > VehicleDataManagerDBusStubAdapterInternal<_Stub, _Stubs...>::getDrivingRestrictionAttributeStubDispatcher(
            &::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub::getDrivingRestrictionAttribute
            , "b"
            );
template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        bool
        > VehicleDataManagerDBusStubAdapterInternal<_Stub, _Stubs...>::setDrivingRestrictionAttributeStubDispatcher(
                &::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub::getDrivingRestrictionAttribute,
                &VehicleDataManagerStubRemoteEvent::onRemoteSetDrivingRestrictionAttribute,
                &VehicleDataManagerStubRemoteEvent::onRemoteDrivingRestrictionAttributeChanged
                ,&VehicleDataManagerStubAdapter::fireDrivingRestrictionAttributeChanged
                ,"b"
                );

template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        bool
        > VehicleDataManagerDBusStubAdapterInternal<_Stub, _Stubs...>::getLowFuelWarningAttributeStubDispatcher(
            &::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub::getLowFuelWarningAttribute
            , "b"
            );
template <typename _Stub, typename... _Stubs>
CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub,
        bool
        > VehicleDataManagerDBusStubAdapterInternal<_Stub, _Stubs...>::setLowFuelWarningAttributeStubDispatcher(
                &::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub::getLowFuelWarningAttribute,
                &VehicleDataManagerStubRemoteEvent::onRemoteSetLowFuelWarningAttribute,
                &VehicleDataManagerStubRemoteEvent::onRemoteLowFuelWarningAttributeChanged
                ,&VehicleDataManagerStubAdapter::fireLowFuelWarningAttributeChanged
                ,"b"
                );

/**
 * description: This attribute contains the current speed of this vehicle. The unit of value is
 *   km/h or mph.
 */
template <typename _Stub, typename... _Stubs>
void VehicleDataManagerDBusStubAdapterInternal<_Stub, _Stubs...>::fireVehicleSpeedAttributeChanged(const ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed& value) {
    CommonAPI::Deployable< ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed, ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes_::VehicleSpeedDeployment_t> deployedValue(value, static_cast< ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes_::VehicleSpeedDeployment_t* >(nullptr));
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    CommonAPI::Deployable<
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed,
        ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes_::VehicleSpeedDeployment_t
    >
    >>
        ::sendSignal(
            *this,
            "onVehicleSpeedAttributeChanged",
            "(ns)",
            deployedValue
    
    );
}

/**
 * description: This attribute contains the VIN(Vehicle Identification Number as defined by ISO
 *   3779) information for this vehicle. It's 17 bytes long characters.
 */
template <typename _Stub, typename... _Stubs>
void VehicleDataManagerDBusStubAdapterInternal<_Stub, _Stubs...>::fireVinAttributeChanged(const std::string& value) {
    CommonAPI::Deployable< std::string, CommonAPI::DBus::StringDeployment> deployedValue(value, static_cast< CommonAPI::DBus::StringDeployment* >(nullptr));
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    CommonAPI::Deployable<
        std::string,
        CommonAPI::DBus::StringDeployment
    >
    >>
        ::sendSignal(
            *this,
            "onVinAttributeChanged",
            "s",
            deployedValue
    
    );
}

/**
 * description: This attribute contains the current status of transmission gear.
 */
template <typename _Stub, typename... _Stubs>
void VehicleDataManagerDBusStubAdapterInternal<_Stub, _Stubs...>::fireTransmissionGearStatusAttributeChanged(const ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::TransmissionGearStatus& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::TransmissionGearStatus
    >>
        ::sendSignal(
            *this,
            "onTransmissionGearStatusAttributeChanged",
            "i",
            value
    
    );
}

template <typename _Stub, typename... _Stubs>
void VehicleDataManagerDBusStubAdapterInternal<_Stub, _Stubs...>::fireDrivingRestrictionAttributeChanged(const bool& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    bool
    >>
        ::sendSignal(
            *this,
            "onDrivingRestrictionAttributeChanged",
            "b",
            value
    
    );
}

template <typename _Stub, typename... _Stubs>
void VehicleDataManagerDBusStubAdapterInternal<_Stub, _Stubs...>::fireLowFuelWarningAttributeChanged(const bool& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    bool
    >>
        ::sendSignal(
            *this,
            "onLowFuelWarningAttributeChanged",
            "b",
            value
    
    );
}


template <typename _Stub = ::v1::com::ivis::VehicleDataManager::VehicleDataManagerStub, typename... _Stubs>
class VehicleDataManagerDBusStubAdapter
    : public VehicleDataManagerDBusStubAdapterInternal<_Stub, _Stubs...>,
      public std::enable_shared_from_this< VehicleDataManagerDBusStubAdapter<_Stub, _Stubs...>> {
public:
    VehicleDataManagerDBusStubAdapter(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
        const std::shared_ptr<_Stub> &_stub)
        : CommonAPI::DBus::DBusStubAdapter(
            _address,
            _connection,
            false),
          VehicleDataManagerDBusStubAdapterInternal<_Stub, _Stubs...>(
            _address,
            _connection,
            _stub) {
    }
};

} // namespace VehicleDataManager
} // namespace ivis
} // namespace com
} // namespace v1

#endif // V1_COM_IVIS_VEHICLEDATAMANAGER_Vehicle_Data_Manager_DBUS_STUB_ADAPTER_HPP_