/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.someip 3.1.5.v201601121433.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/com/ivis/AVInformationProvider/AVInformationSomeIPProxy.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace ivis {
namespace AVInformationProvider {

std::shared_ptr<CommonAPI::SomeIP::Proxy> createAVInformationSomeIPProxy(
    const CommonAPI::SomeIP::Address &_address,
    const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection) {
    return std::make_shared<AVInformationSomeIPProxy>(_address, _connection);
}

INITIALIZER(registerAVInformationSomeIPProxy) {
    CommonAPI::SomeIP::AddressTranslator::get()->insert(
        "local:com.ivis.AVInformationProvider.AVInformation:com.ivis.AVInformationProvider.AVInformation.SomeIp",
        0x7d0, 0x834, 1, 0);
     CommonAPI::SomeIP::Factory::get()->registerProxyCreateMethod(
         AVInformation::getInterface(),
         &createAVInformationSomeIPProxy);
}

AVInformationSomeIPProxy::AVInformationSomeIPProxy(
    const CommonAPI::SomeIP::Address &_address,
    const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection)
        : CommonAPI::SomeIP::Proxy(_address, _connection )
,          currentSource_(*this, CommonAPI::SomeIP::eventgroup_id_t(0x55f0), CommonAPI::SomeIP::event_id_t(0x5655), CommonAPI::SomeIP::method_id_t(0x5654), false, CommonAPI::SomeIP::method_id_t(0x5656), false, static_cast<CommonAPI::SomeIP::EnumerationDeployment*>(nullptr)),
          metaData_(*this, CommonAPI::SomeIP::eventgroup_id_t(0x55f0), CommonAPI::SomeIP::event_id_t(0x56b9), CommonAPI::SomeIP::method_id_t(0x56b8), false, CommonAPI::SomeIP::method_id_t(0x56ba), false, &::v1::com::ivis::AVInformationProvider::AVInformation_::metaDataDeployment),
          playPosition_(*this, CommonAPI::SomeIP::eventgroup_id_t(0x55f0), CommonAPI::SomeIP::event_id_t(0x571d), CommonAPI::SomeIP::method_id_t(0x571c), false, CommonAPI::SomeIP::method_id_t(0x571e), false, &::v1::com::ivis::AVInformationProvider::AVInformation_::playPositionDeployment),
          playStatus_(*this, CommonAPI::SomeIP::eventgroup_id_t(0x55f0), CommonAPI::SomeIP::event_id_t(0x5781), CommonAPI::SomeIP::method_id_t(0x5780), false, CommonAPI::SomeIP::method_id_t(0x5782), false, static_cast<CommonAPI::SomeIP::EnumerationDeployment*>(nullptr)),
          systemTime_(*this, CommonAPI::SomeIP::eventgroup_id_t(0x55f0), CommonAPI::SomeIP::event_id_t(0x57e5), CommonAPI::SomeIP::method_id_t(0x57e4), false, CommonAPI::SomeIP::method_id_t(0x57e6), false, static_cast<CommonAPI::EmptyDeployment*>(nullptr))
,          notifyAlbumArt_(*this, 0x5208, CommonAPI::SomeIP::event_id_t(0x526c), false, std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::SomeIP::ArrayDeployment<CommonAPI::EmptyDeployment>*>(nullptr)))
    {
    }

    AVInformationSomeIPProxy::CurrentSourceAttribute& AVInformationSomeIPProxy::getCurrentSourceAttribute() {
        return currentSource_;
    }
    AVInformationSomeIPProxy::MetaDataAttribute& AVInformationSomeIPProxy::getMetaDataAttribute() {
        return metaData_;
    }
    AVInformationSomeIPProxy::PlayPositionAttribute& AVInformationSomeIPProxy::getPlayPositionAttribute() {
        return playPosition_;
    }
    AVInformationSomeIPProxy::PlayStatusAttribute& AVInformationSomeIPProxy::getPlayStatusAttribute() {
        return playStatus_;
    }
    AVInformationSomeIPProxy::SystemTimeAttribute& AVInformationSomeIPProxy::getSystemTimeAttribute() {
        return systemTime_;
    }
    
    AVInformationSomeIPProxy::NotifyAlbumArtEvent& AVInformationSomeIPProxy::getNotifyAlbumArtEvent() {
        return notifyAlbumArt_;
    }

        void AVInformationSomeIPProxy::requestAction(const AVInformationTypes::Action &_action, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
            CommonAPI::Deployable<AVInformationTypes::Action, CommonAPI::SomeIP::EnumerationDeployment> deploy_action(_action, static_cast<CommonAPI::SomeIP::EnumerationDeployment*>(nullptr));
            CommonAPI::SomeIP::ProxyHelper<
                CommonAPI::SomeIP::SerializableArguments<
                    CommonAPI::Deployable<
                        AVInformationTypes::Action, 
                        CommonAPI::SomeIP::EnumerationDeployment
                    >
                >,
                CommonAPI::SomeIP::SerializableArguments<
                >
            >::callMethodWithReply(
            *this,
            CommonAPI::SomeIP::method_id_t(0x526c),
            false,
    (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
    deploy_action,
    _internalCallStatus);
    }
    std::future<CommonAPI::CallStatus> AVInformationSomeIPProxy::requestActionAsync(const AVInformationTypes::Action &_action, RequestActionAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<AVInformationTypes::Action, CommonAPI::SomeIP::EnumerationDeployment> deploy_action(_action, static_cast<CommonAPI::SomeIP::EnumerationDeployment*>(nullptr));
        return CommonAPI::SomeIP::ProxyHelper<
            CommonAPI::SomeIP::SerializableArguments<
                CommonAPI::Deployable<
                    AVInformationTypes::Action, 
                    CommonAPI::SomeIP::EnumerationDeployment
                >
            >,
            CommonAPI::SomeIP::SerializableArguments<
            >
        >::callMethodAsync(
            *this,
            CommonAPI::SomeIP::method_id_t(0x526c),
            false,
            (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
            deploy_action,
            [_callback] (CommonAPI::CallStatus _internalCallStatus) {
            	if (_callback)
            		_callback(_internalCallStatus);
            },
            std::make_tuple());
    }
    
    
    
    void AVInformationSomeIPProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
    ownVersionMajor = 1;
    ownVersionMinor = 0;
    }
    
} // namespace AVInformationProvider
} // namespace ivis
} // namespace com
} // namespace v1
