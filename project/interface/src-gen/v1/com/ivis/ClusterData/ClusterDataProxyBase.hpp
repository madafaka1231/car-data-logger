/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.10.v201611111521.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_CLUSTERDATA_Cluster_Data_PROXY_BASE_HPP_
#define V1_COM_IVIS_CLUSTERDATA_Cluster_Data_PROXY_BASE_HPP_

#include <v1/com/ivis/ClusterData/ClusterData.hpp>



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#include <CommonAPI/Attribute.hpp>
#include <CommonAPI/Proxy.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace ivis {
namespace ClusterData {

class ClusterDataProxyBase
    : virtual public CommonAPI::Proxy {
public:
    typedef CommonAPI::ObservableAttribute< uint16_t> VehicleSpeedAttribute;
    typedef CommonAPI::ObservableAttribute< uint16_t> EngineSpeedAttribute;
    typedef CommonAPI::ObservableAttribute< uint8_t> FuelLevelAttribute;


    /**
     * description: current vehicle speed. unit is km/h
     */
    virtual VehicleSpeedAttribute& getVehicleSpeedAttribute() = 0;
    /**
     * description: current engine speed. unit is RPM
     */
    virtual EngineSpeedAttribute& getEngineSpeedAttribute() = 0;
    /**
     * description: current fuel level. unit is %
     */
    virtual FuelLevelAttribute& getFuelLevelAttribute() = 0;


};

} // namespace ClusterData
} // namespace ivis
} // namespace com
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_IVIS_CLUSTERDATA_Cluster_Data_PROXY_BASE_HPP_