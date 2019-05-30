/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.10.v201611111521.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_CLUSTERDATA_Cluster_Data_STUB_DEFAULT_HPP_
#define V1_COM_IVIS_CLUSTERDATA_Cluster_Data_STUB_DEFAULT_HPP_


#include <CommonAPI/Export.hpp>

#include <v1/com/ivis/ClusterData/ClusterDataStub.hpp>
#include <sstream>

#  if _MSC_VER >= 1300
/*
 * Diamond inheritance is used for the CommonAPI::Proxy base class.
 * The Microsoft compiler put warning (C4250) using a desired c++ feature: "Delegating to a sister class"
 * A powerful technique that arises from using virtual inheritance is to delegate a method from a class in another class
 * by using a common abstract base class. This is also called cross delegation.
 */
#    pragma warning( disable : 4250 )
#  endif

namespace v1 {
namespace com {
namespace ivis {
namespace ClusterData {

/**
 * Provides a default implementation for ClusterDataStubRemoteEvent and
 * ClusterDataStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class COMMONAPI_EXPORT_CLASS_EXPLICIT ClusterDataStubDefault
    : public virtual ClusterDataStub {
public:
    COMMONAPI_EXPORT ClusterDataStubDefault();

    COMMONAPI_EXPORT ClusterDataStubRemoteEvent* initStubAdapter(const std::shared_ptr< ClusterDataStubAdapter> &_adapter);

    COMMONAPI_EXPORT const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client);

    COMMONAPI_EXPORT virtual const uint16_t& getVehicleSpeedAttribute();
    COMMONAPI_EXPORT virtual const uint16_t& getVehicleSpeedAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    COMMONAPI_EXPORT virtual void setVehicleSpeedAttribute(uint16_t _value);
    COMMONAPI_EXPORT virtual void setVehicleSpeedAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint16_t _value);
    COMMONAPI_EXPORT virtual const uint16_t& getEngineSpeedAttribute();
    COMMONAPI_EXPORT virtual const uint16_t& getEngineSpeedAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    COMMONAPI_EXPORT virtual void setEngineSpeedAttribute(uint16_t _value);
    COMMONAPI_EXPORT virtual void setEngineSpeedAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint16_t _value);
    COMMONAPI_EXPORT virtual const uint8_t& getFuelLevelAttribute();
    COMMONAPI_EXPORT virtual const uint8_t& getFuelLevelAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    COMMONAPI_EXPORT virtual void setFuelLevelAttribute(uint8_t _value);
    COMMONAPI_EXPORT virtual void setFuelLevelAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint8_t _value);



    
protected:
    /**
     * description: current vehicle speed. unit is km/h
     */
    COMMONAPI_EXPORT virtual bool trySetVehicleSpeedAttribute(uint16_t _value);
    COMMONAPI_EXPORT virtual bool validateVehicleSpeedAttributeRequestedValue(const uint16_t &_value);
    COMMONAPI_EXPORT virtual void onRemoteVehicleSpeedAttributeChanged();
    /**
     * description: current engine speed. unit is RPM
     */
    COMMONAPI_EXPORT virtual bool trySetEngineSpeedAttribute(uint16_t _value);
    COMMONAPI_EXPORT virtual bool validateEngineSpeedAttributeRequestedValue(const uint16_t &_value);
    COMMONAPI_EXPORT virtual void onRemoteEngineSpeedAttributeChanged();
    /**
     * description: current fuel level. unit is %
     */
    COMMONAPI_EXPORT virtual bool trySetFuelLevelAttribute(uint8_t _value);
    COMMONAPI_EXPORT virtual bool validateFuelLevelAttributeRequestedValue(const uint8_t &_value);
    COMMONAPI_EXPORT virtual void onRemoteFuelLevelAttributeChanged();
    class COMMONAPI_EXPORT_CLASS_EXPLICIT RemoteEventHandler: public virtual ClusterDataStubRemoteEvent {
    public:
        COMMONAPI_EXPORT RemoteEventHandler(ClusterDataStubDefault *_defaultStub);

        /**
         * description: current vehicle speed. unit is km/h
         */
        COMMONAPI_EXPORT virtual bool onRemoteSetVehicleSpeedAttribute(uint16_t _value);
        COMMONAPI_EXPORT virtual bool onRemoteSetVehicleSpeedAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint16_t _value);
        COMMONAPI_EXPORT virtual void onRemoteVehicleSpeedAttributeChanged();

        /**
         * description: current engine speed. unit is RPM
         */
        COMMONAPI_EXPORT virtual bool onRemoteSetEngineSpeedAttribute(uint16_t _value);
        COMMONAPI_EXPORT virtual bool onRemoteSetEngineSpeedAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint16_t _value);
        COMMONAPI_EXPORT virtual void onRemoteEngineSpeedAttributeChanged();

        /**
         * description: current fuel level. unit is %
         */
        COMMONAPI_EXPORT virtual bool onRemoteSetFuelLevelAttribute(uint8_t _value);
        COMMONAPI_EXPORT virtual bool onRemoteSetFuelLevelAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint8_t _value);
        COMMONAPI_EXPORT virtual void onRemoteFuelLevelAttributeChanged();


    private:
        ClusterDataStubDefault *defaultStub_;
    };
private:
    ClusterDataStubDefault::RemoteEventHandler remoteEventHandler_;

    /**
     * description: current vehicle speed. unit is km/h
     */
    uint16_t vehicleSpeedAttributeValue_ {};
    /**
     * description: current engine speed. unit is RPM
     */
    uint16_t engineSpeedAttributeValue_ {};
    /**
     * description: current fuel level. unit is %
     */
    uint8_t fuelLevelAttributeValue_ {};

    CommonAPI::Version interfaceVersion_;
};

} // namespace ClusterData
} // namespace ivis
} // namespace com
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_IVIS_CLUSTERDATA_Cluster_Data_STUB_DEFAULT