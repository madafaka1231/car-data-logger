/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.10.v201611111523.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/com/ivis/DATCManager/DATCManagerDBusProxy.hpp>

namespace v1 {
namespace com {
namespace ivis {
namespace DATCManager {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createDATCManagerDBusProxy(
    const CommonAPI::DBus::DBusAddress &_address,
    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection) {
    return std::make_shared< DATCManagerDBusProxy>(_address, _connection);
}

void initializeDATCManagerDBusProxy() {
     CommonAPI::DBus::Factory::get()->registerProxyCreateMethod(
        DATCManager::getInterface(),
        &createDATCManagerDBusProxy);
}

INITIALIZER(registerDATCManagerDBusProxy) {
    CommonAPI::DBus::Factory::get()->registerInterface(initializeDATCManagerDBusProxy);
}

DATCManagerDBusProxy::DATCManagerDBusProxy(
    const CommonAPI::DBus::DBusAddress &_address,
    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection)
    :   CommonAPI::DBus::DBusProxy(_address, _connection)
,        temperatureMode_(*this, "onTemperatureModeAttributeChanged", "setTemperatureModeAttribute", "i", "getTemperatureModeAttribute", static_cast< CommonAPI::EmptyDeployment* >(nullptr)),
        dualMode_(*this, "onDualModeAttributeChanged", "setDualModeAttribute", "b", "getDualModeAttribute", static_cast< CommonAPI::EmptyDeployment* >(nullptr)),
        autoMode_(*this, "onAutoModeAttributeChanged", "setAutoModeAttribute", "b", "getAutoModeAttribute", static_cast< CommonAPI::EmptyDeployment* >(nullptr)),
        airConditionerRun_(*this, "onAirConditionerRunAttributeChanged", "setAirConditionerRunAttribute", "b", "getAirConditionerRunAttribute", static_cast< CommonAPI::EmptyDeployment* >(nullptr)),
        heaterRun_(*this, "onHeaterRunAttributeChanged", "setHeaterRunAttribute", "b", "getHeaterRunAttribute", static_cast< CommonAPI::EmptyDeployment* >(nullptr)),
        interiorTemperautre_(*this, "onInteriorTemperautreAttributeChanged", "d", "getInteriorTemperautreAttribute", static_cast< CommonAPI::EmptyDeployment* >(nullptr)),
        exteriorTemperature_(*this, "onExteriorTemperatureAttributeChanged", "d", "getExteriorTemperatureAttribute", static_cast< CommonAPI::EmptyDeployment* >(nullptr)),
        targetTemperatures_(*this, "onTargetTemperaturesAttributeChanged", "setTargetTemperaturesAttribute", "a(id)", "getTargetTemperaturesAttribute", static_cast< ::v1::com::ivis::DATCManager::DATCManagerTypes_::TargetTemperaturesDeployment_t* >(nullptr)),
        fanDirections_(*this, "onFanDirectionsAttributeChanged", "setFanDirectionsAttribute", "a(ii)", "getFanDirectionsAttribute", static_cast< ::v1::com::ivis::DATCManager::DATCManagerTypes_::FanDirectionsDeployment_t* >(nullptr)),
        fanSpeeds_(*this, "onFanSpeedsAttributeChanged", "setFanSpeedsAttribute", "a(iq)", "getFanSpeedsAttribute", static_cast< ::v1::com::ivis::DATCManager::DATCManagerTypes_::FanSpeedsDeployment_t* >(nullptr)),
        defrosts_(*this, "onDefrostsAttributeChanged", "setDefrostsAttribute", "a(ib)", "getDefrostsAttribute", static_cast< ::v1::com::ivis::DATCManager::DATCManagerTypes_::DefrostsDeployment_t* >(nullptr)),
        airRecirculation_(*this, "onAirRecirculationAttributeChanged", "setAirRecirculationAttribute", "b", "getAirRecirculationAttribute", static_cast< CommonAPI::EmptyDeployment* >(nullptr)),
        steeringWheelHeater_(*this, "onSteeringWheelHeaterAttributeChanged", "setSteeringWheelHeaterAttribute", "b", "getSteeringWheelHeaterAttribute", static_cast< CommonAPI::EmptyDeployment* >(nullptr)),
        seatHeaters_(*this, "onSeatHeatersAttributeChanged", "setSeatHeatersAttribute", "a(ib)", "getSeatHeatersAttribute", static_cast< ::v1::com::ivis::DATCManager::DATCManagerTypes_::SeatHeatersDeployment_t* >(nullptr)),
        seatCoolers_(*this, "onSeatCoolersAttributeChanged", "setSeatCoolersAttribute", "a(ib)", "getSeatCoolersAttribute", static_cast< ::v1::com::ivis::DATCManager::DATCManagerTypes_::SeatCoolersDeployment_t* >(nullptr))
,        responseGetSupportedTemperatureRange_(*this, "responseGetSupportedTemperatureRange", "(dd)", std::make_tuple(static_cast< ::v1::com::ivis::DATCManager::DATCManagerTypes_::TemperatureRangeDeployment_t* >(nullptr))),
        responseSetTargetTemperature_(*this, "responseSetTargetTemperature", "iid", std::make_tuple(static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr))),
        responseGetSupportedFanDirection_(*this, "responseGetSupportedFanDirection", "ai", std::make_tuple(static_cast< ::v1::com::ivis::DATCManager::DATCManagerTypes_::SupportedFanDirectionListDeployment_t* >(nullptr))),
        responseSetFanDirection_(*this, "responseSetFanDirection", "iii", std::make_tuple(static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr))),
        responseGetSupportedFanSpeedRange_(*this, "responseGetSupportedFanSpeedRange", "(qq)", std::make_tuple(static_cast< ::v1::com::ivis::DATCManager::DATCManagerTypes_::FanSpeedRangeDeployment_t* >(nullptr))),
        responseSetFanSpeed_(*this, "responseSetFanSpeed", "iiq", std::make_tuple(static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr))),
        responseGetSupportedDefrostTarget_(*this, "responseGetSupportedDefrostTarget", "ai", std::make_tuple(static_cast< ::v1::com::ivis::DATCManager::DATCManagerTypes_::SupportedDefrostTargetListDeployment_t* >(nullptr))),
        responseSetAirRecirculation_(*this, "responseSetAirRecirculation", "ib", std::make_tuple(static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr))),
        responseGetSteeringWheelHeaterSupported_(*this, "responseGetSteeringWheelHeaterSupported", "b", std::make_tuple(static_cast< CommonAPI::EmptyDeployment* >(nullptr))),
        responseSetSteeringWheelHeater_(*this, "responseSetSteeringWheelHeater", "ib", std::make_tuple(static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr))),
        responseGetSeatHeaterSupported_(*this, "responseGetSeatHeaterSupported", "b", std::make_tuple(static_cast< CommonAPI::EmptyDeployment* >(nullptr))),
        responseSetSeatHeater_(*this, "responseSetSeatHeater", "iib", std::make_tuple(static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr))),
        responseGetSeatCoolerSupported_(*this, "responseGetSeatCoolerSupported", "b", std::make_tuple(static_cast< CommonAPI::EmptyDeployment* >(nullptr))),
        responseSetSeatCooler_(*this, "responseSetSeatCooler", "iib", std::make_tuple(static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr)))
{
}

      DATCManagerDBusProxy::TemperatureModeAttribute& DATCManagerDBusProxy::getTemperatureModeAttribute() {
          return temperatureMode_;
      }
      DATCManagerDBusProxy::DualModeAttribute& DATCManagerDBusProxy::getDualModeAttribute() {
          return dualMode_;
      }
      DATCManagerDBusProxy::AutoModeAttribute& DATCManagerDBusProxy::getAutoModeAttribute() {
          return autoMode_;
      }
      DATCManagerDBusProxy::AirConditionerRunAttribute& DATCManagerDBusProxy::getAirConditionerRunAttribute() {
          return airConditionerRun_;
      }
      DATCManagerDBusProxy::HeaterRunAttribute& DATCManagerDBusProxy::getHeaterRunAttribute() {
          return heaterRun_;
      }
      DATCManagerDBusProxy::InteriorTemperautreAttribute& DATCManagerDBusProxy::getInteriorTemperautreAttribute() {
          return interiorTemperautre_;
      }
      DATCManagerDBusProxy::ExteriorTemperatureAttribute& DATCManagerDBusProxy::getExteriorTemperatureAttribute() {
          return exteriorTemperature_;
      }
      DATCManagerDBusProxy::TargetTemperaturesAttribute& DATCManagerDBusProxy::getTargetTemperaturesAttribute() {
          return targetTemperatures_;
      }
      DATCManagerDBusProxy::FanDirectionsAttribute& DATCManagerDBusProxy::getFanDirectionsAttribute() {
          return fanDirections_;
      }
      DATCManagerDBusProxy::FanSpeedsAttribute& DATCManagerDBusProxy::getFanSpeedsAttribute() {
          return fanSpeeds_;
      }
      DATCManagerDBusProxy::DefrostsAttribute& DATCManagerDBusProxy::getDefrostsAttribute() {
          return defrosts_;
      }
      DATCManagerDBusProxy::AirRecirculationAttribute& DATCManagerDBusProxy::getAirRecirculationAttribute() {
          return airRecirculation_;
      }
      DATCManagerDBusProxy::SteeringWheelHeaterAttribute& DATCManagerDBusProxy::getSteeringWheelHeaterAttribute() {
          return steeringWheelHeater_;
      }
      DATCManagerDBusProxy::SeatHeatersAttribute& DATCManagerDBusProxy::getSeatHeatersAttribute() {
          return seatHeaters_;
      }
      DATCManagerDBusProxy::SeatCoolersAttribute& DATCManagerDBusProxy::getSeatCoolersAttribute() {
          return seatCoolers_;
      }

DATCManagerDBusProxy::ResponseGetSupportedTemperatureRangeEvent& DATCManagerDBusProxy::getResponseGetSupportedTemperatureRangeEvent() {
    return responseGetSupportedTemperatureRange_;
}
DATCManagerDBusProxy::ResponseSetTargetTemperatureEvent& DATCManagerDBusProxy::getResponseSetTargetTemperatureEvent() {
    return responseSetTargetTemperature_;
}
DATCManagerDBusProxy::ResponseGetSupportedFanDirectionEvent& DATCManagerDBusProxy::getResponseGetSupportedFanDirectionEvent() {
    return responseGetSupportedFanDirection_;
}
DATCManagerDBusProxy::ResponseSetFanDirectionEvent& DATCManagerDBusProxy::getResponseSetFanDirectionEvent() {
    return responseSetFanDirection_;
}
DATCManagerDBusProxy::ResponseGetSupportedFanSpeedRangeEvent& DATCManagerDBusProxy::getResponseGetSupportedFanSpeedRangeEvent() {
    return responseGetSupportedFanSpeedRange_;
}
DATCManagerDBusProxy::ResponseSetFanSpeedEvent& DATCManagerDBusProxy::getResponseSetFanSpeedEvent() {
    return responseSetFanSpeed_;
}
DATCManagerDBusProxy::ResponseGetSupportedDefrostTargetEvent& DATCManagerDBusProxy::getResponseGetSupportedDefrostTargetEvent() {
    return responseGetSupportedDefrostTarget_;
}
DATCManagerDBusProxy::ResponseSetAirRecirculationEvent& DATCManagerDBusProxy::getResponseSetAirRecirculationEvent() {
    return responseSetAirRecirculation_;
}
DATCManagerDBusProxy::ResponseGetSteeringWheelHeaterSupportedEvent& DATCManagerDBusProxy::getResponseGetSteeringWheelHeaterSupportedEvent() {
    return responseGetSteeringWheelHeaterSupported_;
}
DATCManagerDBusProxy::ResponseSetSteeringWheelHeaterEvent& DATCManagerDBusProxy::getResponseSetSteeringWheelHeaterEvent() {
    return responseSetSteeringWheelHeater_;
}
DATCManagerDBusProxy::ResponseGetSeatHeaterSupportedEvent& DATCManagerDBusProxy::getResponseGetSeatHeaterSupportedEvent() {
    return responseGetSeatHeaterSupported_;
}
DATCManagerDBusProxy::ResponseSetSeatHeaterEvent& DATCManagerDBusProxy::getResponseSetSeatHeaterEvent() {
    return responseSetSeatHeater_;
}
DATCManagerDBusProxy::ResponseGetSeatCoolerSupportedEvent& DATCManagerDBusProxy::getResponseGetSeatCoolerSupportedEvent() {
    return responseGetSeatCoolerSupported_;
}
DATCManagerDBusProxy::ResponseSetSeatCoolerEvent& DATCManagerDBusProxy::getResponseSetSeatCoolerEvent() {
    return responseSetSeatCooler_;
}

    void DATCManagerDBusProxy::requestGetSupportedTemperatureRange(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodWithReply(
        *this,
        "requestGetSupportedTemperatureRange",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> DATCManagerDBusProxy::requestGetSupportedTemperatureRangeAsync(RequestGetSupportedTemperatureRangeAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodAsync(
        *this,
        "requestGetSupportedTemperatureRange",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
            if (_callback)
                _callback(_internalCallStatus);
        },
        std::make_tuple());
    }
    void DATCManagerDBusProxy::requestSetTargetTemperature(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType &_areaType, const double &_temperature, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType, CommonAPI::EmptyDeployment> deploy_areaType(_areaType, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::Deployable< double, CommonAPI::EmptyDeployment> deploy_temperature(_temperature, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable< double, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodWithReply(
        *this,
        "requestSetTargetTemperature",
        "id",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_areaType, deploy_temperature,
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> DATCManagerDBusProxy::requestSetTargetTemperatureAsync(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType &_areaType, const double &_temperature, RequestSetTargetTemperatureAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType, CommonAPI::EmptyDeployment> deploy_areaType(_areaType, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::Deployable< double, CommonAPI::EmptyDeployment> deploy_temperature(_temperature, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable< double, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodAsync(
        *this,
        "requestSetTargetTemperature",
        "id",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_areaType, deploy_temperature,
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
            if (_callback)
                _callback(_internalCallStatus);
        },
        std::make_tuple());
    }
    void DATCManagerDBusProxy::requestSetTargetTemperatureByDelta(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType &_areaType, const double &_temperatureDelta, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType, CommonAPI::EmptyDeployment> deploy_areaType(_areaType, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::Deployable< double, CommonAPI::EmptyDeployment> deploy_temperatureDelta(_temperatureDelta, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable< double, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodWithReply(
        *this,
        "requestSetTargetTemperatureByDelta",
        "id",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_areaType, deploy_temperatureDelta,
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> DATCManagerDBusProxy::requestSetTargetTemperatureByDeltaAsync(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType &_areaType, const double &_temperatureDelta, RequestSetTargetTemperatureByDeltaAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType, CommonAPI::EmptyDeployment> deploy_areaType(_areaType, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::Deployable< double, CommonAPI::EmptyDeployment> deploy_temperatureDelta(_temperatureDelta, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable< double, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodAsync(
        *this,
        "requestSetTargetTemperatureByDelta",
        "id",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_areaType, deploy_temperatureDelta,
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
            if (_callback)
                _callback(_internalCallStatus);
        },
        std::make_tuple());
    }
    void DATCManagerDBusProxy::requestGetSupportedFanDirection(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodWithReply(
        *this,
        "requestGetSupportedFanDirection",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> DATCManagerDBusProxy::requestGetSupportedFanDirectionAsync(RequestGetSupportedFanDirectionAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodAsync(
        *this,
        "requestGetSupportedFanDirection",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
            if (_callback)
                _callback(_internalCallStatus);
        },
        std::make_tuple());
    }
    void DATCManagerDBusProxy::requestGetSupportedFanSpeedRange(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodWithReply(
        *this,
        "requestGetSupportedFanSpeedRange",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> DATCManagerDBusProxy::requestGetSupportedFanSpeedRangeAsync(RequestGetSupportedFanSpeedRangeAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodAsync(
        *this,
        "requestGetSupportedFanSpeedRange",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
            if (_callback)
                _callback(_internalCallStatus);
        },
        std::make_tuple());
    }
    void DATCManagerDBusProxy::requestSetFanSpeed(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType &_areaType, const uint16_t &_fanSpeed, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType, CommonAPI::EmptyDeployment> deploy_areaType(_areaType, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::Deployable< uint16_t, CommonAPI::EmptyDeployment> deploy_fanSpeed(_fanSpeed, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable< uint16_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodWithReply(
        *this,
        "requestSetFanSpeed",
        "iq",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_areaType, deploy_fanSpeed,
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> DATCManagerDBusProxy::requestSetFanSpeedAsync(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType &_areaType, const uint16_t &_fanSpeed, RequestSetFanSpeedAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType, CommonAPI::EmptyDeployment> deploy_areaType(_areaType, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::Deployable< uint16_t, CommonAPI::EmptyDeployment> deploy_fanSpeed(_fanSpeed, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable< uint16_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodAsync(
        *this,
        "requestSetFanSpeed",
        "iq",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_areaType, deploy_fanSpeed,
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
            if (_callback)
                _callback(_internalCallStatus);
        },
        std::make_tuple());
    }
    void DATCManagerDBusProxy::requestSetFanSpeedByDelta(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType &_areaType, const uint16_t &_fanSpeedDelta, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType, CommonAPI::EmptyDeployment> deploy_areaType(_areaType, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::Deployable< uint16_t, CommonAPI::EmptyDeployment> deploy_fanSpeedDelta(_fanSpeedDelta, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable< uint16_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodWithReply(
        *this,
        "requestSetFanSpeedByDelta",
        "iq",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_areaType, deploy_fanSpeedDelta,
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> DATCManagerDBusProxy::requestSetFanSpeedByDeltaAsync(const ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType &_areaType, const uint16_t &_fanSpeedDelta, RequestSetFanSpeedByDeltaAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType, CommonAPI::EmptyDeployment> deploy_areaType(_areaType, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::Deployable< uint16_t, CommonAPI::EmptyDeployment> deploy_fanSpeedDelta(_fanSpeedDelta, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< ::v1::com::ivis::DATCManager::DATCManagerTypes::EAreaType, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable< uint16_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodAsync(
        *this,
        "requestSetFanSpeedByDelta",
        "iq",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_areaType, deploy_fanSpeedDelta,
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
            if (_callback)
                _callback(_internalCallStatus);
        },
        std::make_tuple());
    }
    void DATCManagerDBusProxy::requestGetSupportedDefrostTarget(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodWithReply(
        *this,
        "requestGetSupportedDefrostTarget",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> DATCManagerDBusProxy::requestGetSupportedDefrostTargetAsync(RequestGetSupportedDefrostTargetAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodAsync(
        *this,
        "requestGetSupportedDefrostTarget",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
            if (_callback)
                _callback(_internalCallStatus);
        },
        std::make_tuple());
    }
    void DATCManagerDBusProxy::requestGetSteeringWheelHeaterSupported(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodWithReply(
        *this,
        "requestGetSteeringWheelHeaterSupported",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> DATCManagerDBusProxy::requestGetSteeringWheelHeaterSupportedAsync(RequestGetSteeringWheelHeaterSupportedAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodAsync(
        *this,
        "requestGetSteeringWheelHeaterSupported",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
            if (_callback)
                _callback(_internalCallStatus);
        },
        std::make_tuple());
    }
    void DATCManagerDBusProxy::requestGetSeatHeaterSupported(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodWithReply(
        *this,
        "requestGetSeatHeaterSupported",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> DATCManagerDBusProxy::requestGetSeatHeaterSupportedAsync(RequestGetSeatHeaterSupportedAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodAsync(
        *this,
        "requestGetSeatHeaterSupported",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
            if (_callback)
                _callback(_internalCallStatus);
        },
        std::make_tuple());
    }
    void DATCManagerDBusProxy::requestGetSeatCoolerSupported(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodWithReply(
        *this,
        "requestGetSeatCoolerSupported",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> DATCManagerDBusProxy::requestGetSeatCoolerSupportedAsync(RequestGetSeatCoolerSupportedAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodAsync(
        *this,
        "requestGetSeatCoolerSupported",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
            if (_callback)
                _callback(_internalCallStatus);
        },
        std::make_tuple());
    }


void DATCManagerDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
          ownVersionMajor = 1;
          ownVersionMinor = 1;
      }

      } // namespace DATCManager
      } // namespace ivis
      } // namespace com
      } // namespace v1