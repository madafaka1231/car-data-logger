/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.v201601121430.
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

typedef CommonAPI::DBus::DBusStubAdapterHelper<ClusterDataStub> ClusterDataDBusStubAdapterHelper;

class ClusterDataDBusStubAdapterInternal
    : public virtual ClusterDataStubAdapter,
      public ClusterDataDBusStubAdapterHelper
{
public:
    ClusterDataDBusStubAdapterInternal(
            const CommonAPI::DBus::DBusAddress &_address,
            const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
            const std::shared_ptr<CommonAPI::StubBase> &_stub);

    ~ClusterDataDBusStubAdapterInternal();

    virtual bool hasFreedesktopProperties();

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
    /**
     * description: is air bag deployed.
     */
    void fireAirBagDeployedAttributeChanged(const bool& value);
    /**
     * description: is low washer fluid.
     */
    void fireLowWasherFluidAttributeChanged(const bool& value);
    /**
     * description: is parking brake engaged
     */
    void fireParkingBrakeAttributeChanged(const bool& value);
    /**
     * description: is seat belt active
     */
    void fireSeatBeltActiveAttributeChanged(const bool& value);
    /**
     * description: is fog light on
     */
    void fireFogLightAttributeChanged(const bool& value);
    /**
     * description: is head light on
     */
    void fireHeadLightAttributeChanged(const bool& value);
    /**
     * description: is high beam on
     */
    void fireHighBeamAttributeChanged(const bool& value);
    /**
     * description: is left indicator active
     */
    void fireLeftIndicatorAttributeChanged(const bool& value);
    /**
     * description: is right indicator active
     */
    void fireRightIndicatorAttributeChanged(const bool& value);
    /**
     * description: current gear state. -1 : reverse, 0 : neutral
     */
    void fireGearStateAttributeChanged(const uint8_t& value);
    /**
     * description: ect ( Engine Coolant Temperature ) level
     */
    void fireEngineCoolantTemperatureAttributeChanged(const int16_t& value);



    const ClusterDataDBusStubAdapterHelper::StubDispatcherTable& getStubDispatcherTable();
    const CommonAPI::DBus::StubAttributeTable& getStubAttributeTable();

    void deactivateManagedInstances();
    

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
/**
 * description: is air bag deployed.
 */
static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        bool                
        > getAirBagDeployedAttributeStubDispatcher;
static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        bool                    
        > setAirBagDeployedAttributeStubDispatcher;
/**
 * description: is low washer fluid.
 */
static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        bool                
        > getLowWasherFluidAttributeStubDispatcher;
static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        bool                    
        > setLowWasherFluidAttributeStubDispatcher;
/**
 * description: is parking brake engaged
 */
static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        bool                
        > getParkingBrakeAttributeStubDispatcher;
static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        bool                    
        > setParkingBrakeAttributeStubDispatcher;
/**
 * description: is seat belt active
 */
static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        bool                
        > getSeatBeltActiveAttributeStubDispatcher;
static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        bool                    
        > setSeatBeltActiveAttributeStubDispatcher;
/**
 * description: is fog light on
 */
static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        bool                
        > getFogLightAttributeStubDispatcher;
static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        bool                    
        > setFogLightAttributeStubDispatcher;
/**
 * description: is head light on
 */
static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        bool                
        > getHeadLightAttributeStubDispatcher;
static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        bool                    
        > setHeadLightAttributeStubDispatcher;
/**
 * description: is high beam on
 */
static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        bool                
        > getHighBeamAttributeStubDispatcher;
static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        bool                    
        > setHighBeamAttributeStubDispatcher;
/**
 * description: is left indicator active
 */
static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        bool                
        > getLeftIndicatorAttributeStubDispatcher;
static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        bool                    
        > setLeftIndicatorAttributeStubDispatcher;
/**
 * description: is right indicator active
 */
static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        bool                
        > getRightIndicatorAttributeStubDispatcher;
static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        bool                    
        > setRightIndicatorAttributeStubDispatcher;
/**
 * description: current gear state. -1 : reverse, 0 : neutral
 */
static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        uint8_t                
        > getGearStateAttributeStubDispatcher;
static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        uint8_t                    
        > setGearStateAttributeStubDispatcher;
/**
 * description: ect ( Engine Coolant Temperature ) level
 */
static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        int16_t                
        > getEngineCoolantTemperatureAttributeStubDispatcher;
static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
        ::v1::com::ivis::ClusterData::ClusterDataStub,
        int16_t                    
        > setEngineCoolantTemperatureAttributeStubDispatcher;






 protected:
    virtual const char* getMethodsDBusIntrospectionXmlData() const;

 private:
    ClusterDataDBusStubAdapterHelper::StubDispatcherTable stubDispatcherTable_;
    CommonAPI::DBus::StubAttributeTable stubAttributeTable_;
};

class ClusterDataDBusStubAdapter
    : public ClusterDataDBusStubAdapterInternal,
      public std::enable_shared_from_this<ClusterDataDBusStubAdapter> {
public:
    ClusterDataDBusStubAdapter(
    	const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub)
    	: CommonAPI::DBus::DBusStubAdapter(
    		_address, 
    		_connection,
            false),
          ClusterDataDBusStubAdapterInternal(
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
