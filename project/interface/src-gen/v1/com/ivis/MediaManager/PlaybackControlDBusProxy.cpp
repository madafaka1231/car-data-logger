/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.10.v201611111523.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/com/ivis/MediaManager/PlaybackControlDBusProxy.hpp>

namespace v1 {
namespace com {
namespace ivis {
namespace MediaManager {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createPlaybackControlDBusProxy(
    const CommonAPI::DBus::DBusAddress &_address,
    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection) {
    return std::make_shared< PlaybackControlDBusProxy>(_address, _connection);
}

void initializePlaybackControlDBusProxy() {
     CommonAPI::DBus::Factory::get()->registerProxyCreateMethod(
        PlaybackControl::getInterface(),
        &createPlaybackControlDBusProxy);
}

INITIALIZER(registerPlaybackControlDBusProxy) {
    CommonAPI::DBus::Factory::get()->registerInterface(initializePlaybackControlDBusProxy);
}

PlaybackControlDBusProxy::PlaybackControlDBusProxy(
    const CommonAPI::DBus::DBusAddress &_address,
    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection)
    :   CommonAPI::DBus::DBusProxy(_address, _connection)
,        repeatMode_(*this, "onRepeatModeAttributeChanged", "setRepeatModeAttribute", "i", "getRepeatModeAttribute", static_cast< CommonAPI::EmptyDeployment* >(nullptr)),
        playMode_(*this, "onPlayModeAttributeChanged", "setPlayModeAttribute", "i", "getPlayModeAttribute", static_cast< CommonAPI::EmptyDeployment* >(nullptr)),
        currentTrackInfo_(*this, "onCurrentTrackInfoAttributeChanged", "setCurrentTrackInfoAttribute", "(ttussssss)", "getCurrentTrackInfoAttribute", static_cast< ::v1::com::ivis::MediaManager::MediaManagerTypes_::TrackInfoDeployment_t* >(nullptr)),
        currentTrackNumber_(*this, "onCurrentTrackNumberAttributeChanged", "setCurrentTrackNumberAttribute", "u", "getCurrentTrackNumberAttribute", static_cast< CommonAPI::EmptyDeployment* >(nullptr)),
        totalTrackNumber_(*this, "onTotalTrackNumberAttributeChanged", "setTotalTrackNumberAttribute", "u", "getTotalTrackNumberAttribute", static_cast< CommonAPI::EmptyDeployment* >(nullptr)),
        videoVisible_(*this, "onVideoVisibleAttributeChanged", "setVideoVisibleAttribute", "b", "getVideoVisibleAttribute", static_cast< CommonAPI::EmptyDeployment* >(nullptr)),
        playStateInfo_(*this, "onPlayStateInfoAttributeChanged", "setPlayStateInfoAttribute", "(ti)", "getPlayStateInfoAttribute", static_cast< ::v1::com::ivis::MediaManager::MediaManagerTypes_::PlayStateInfoDeployment_t* >(nullptr))
,        notifiyTimePositionInfoChanged_(*this, "notifiyTimePositionInfoChanged", "(tuuu)", std::make_tuple(static_cast< ::v1::com::ivis::MediaManager::MediaManagerTypes_::TimePositionInfoDeployment_t* >(nullptr))),
        responseGetPlaylist_(*this, "responseGetPlaylist", "uia(ttussssss)", std::make_tuple(static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< ::v1::com::ivis::MediaManager::MediaManagerTypes_::PlaylistDeployment_t* >(nullptr))),
        notifyPlaylistChanged_(*this, "notifyPlaylistChanged", "", std::make_tuple()),
        notifyPlaybackError_(*this, "notifyPlaybackError", "i", std::make_tuple(static_cast< CommonAPI::EmptyDeployment* >(nullptr)))
{
}

      PlaybackControlDBusProxy::RepeatModeAttribute& PlaybackControlDBusProxy::getRepeatModeAttribute() {
          return repeatMode_;
      }
      PlaybackControlDBusProxy::PlayModeAttribute& PlaybackControlDBusProxy::getPlayModeAttribute() {
          return playMode_;
      }
      PlaybackControlDBusProxy::CurrentTrackInfoAttribute& PlaybackControlDBusProxy::getCurrentTrackInfoAttribute() {
          return currentTrackInfo_;
      }
      PlaybackControlDBusProxy::CurrentTrackNumberAttribute& PlaybackControlDBusProxy::getCurrentTrackNumberAttribute() {
          return currentTrackNumber_;
      }
      PlaybackControlDBusProxy::TotalTrackNumberAttribute& PlaybackControlDBusProxy::getTotalTrackNumberAttribute() {
          return totalTrackNumber_;
      }
      PlaybackControlDBusProxy::VideoVisibleAttribute& PlaybackControlDBusProxy::getVideoVisibleAttribute() {
          return videoVisible_;
      }
      PlaybackControlDBusProxy::PlayStateInfoAttribute& PlaybackControlDBusProxy::getPlayStateInfoAttribute() {
          return playStateInfo_;
      }

PlaybackControlDBusProxy::NotifiyTimePositionInfoChangedEvent& PlaybackControlDBusProxy::getNotifiyTimePositionInfoChangedEvent() {
    return notifiyTimePositionInfoChanged_;
}
PlaybackControlDBusProxy::ResponseGetPlaylistEvent& PlaybackControlDBusProxy::getResponseGetPlaylistEvent() {
    return responseGetPlaylist_;
}
PlaybackControlDBusProxy::NotifyPlaylistChangedEvent& PlaybackControlDBusProxy::getNotifyPlaylistChangedEvent() {
    return notifyPlaylistChanged_;
}
PlaybackControlDBusProxy::NotifyPlaybackErrorEvent& PlaybackControlDBusProxy::getNotifyPlaybackErrorEvent() {
    return notifyPlaybackError_;
}

    void PlaybackControlDBusProxy::requestAction(const ::v1::com::ivis::MediaManager::MediaManagerTypes::Action &_action, const uint64_t &_value, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< ::v1::com::ivis::MediaManager::MediaManagerTypes::Action, CommonAPI::EmptyDeployment> deploy_action(_action, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::Deployable< uint64_t, CommonAPI::EmptyDeployment> deploy_value(_value, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< ::v1::com::ivis::MediaManager::MediaManagerTypes::Action, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable< uint64_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodWithReply(
        *this,
        "requestAction",
        "it",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_action, deploy_value,
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> PlaybackControlDBusProxy::requestActionAsync(const ::v1::com::ivis::MediaManager::MediaManagerTypes::Action &_action, const uint64_t &_value, RequestActionAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< ::v1::com::ivis::MediaManager::MediaManagerTypes::Action, CommonAPI::EmptyDeployment> deploy_action(_action, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::Deployable< uint64_t, CommonAPI::EmptyDeployment> deploy_value(_value, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< ::v1::com::ivis::MediaManager::MediaManagerTypes::Action, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable< uint64_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodAsync(
        *this,
        "requestAction",
        "it",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_action, deploy_value,
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
            if (_callback)
                _callback(_internalCallStatus);
        },
        std::make_tuple());
    }
    void PlaybackControlDBusProxy::requestPlay(const uint64_t &_indexOfplaylist, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< uint64_t, CommonAPI::EmptyDeployment> deploy_indexOfplaylist(_indexOfplaylist, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< uint64_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodWithReply(
        *this,
        "requestPlay",
        "t",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_indexOfplaylist,
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> PlaybackControlDBusProxy::requestPlayAsync(const uint64_t &_indexOfplaylist, RequestPlayAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< uint64_t, CommonAPI::EmptyDeployment> deploy_indexOfplaylist(_indexOfplaylist, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< uint64_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodAsync(
        *this,
        "requestPlay",
        "t",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_indexOfplaylist,
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
            if (_callback)
                _callback(_internalCallStatus);
        },
        std::make_tuple());
    }
    void PlaybackControlDBusProxy::requestPlayBrowsingSession(const uint64_t &_browsingSessionId, const uint64_t &_uniqueId, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< uint64_t, CommonAPI::EmptyDeployment> deploy_browsingSessionId(_browsingSessionId, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::Deployable< uint64_t, CommonAPI::EmptyDeployment> deploy_uniqueId(_uniqueId, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< uint64_t, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable< uint64_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodWithReply(
        *this,
        "requestPlayBrowsingSession",
        "tt",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_browsingSessionId, deploy_uniqueId,
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> PlaybackControlDBusProxy::requestPlayBrowsingSessionAsync(const uint64_t &_browsingSessionId, const uint64_t &_uniqueId, RequestPlayBrowsingSessionAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< uint64_t, CommonAPI::EmptyDeployment> deploy_browsingSessionId(_browsingSessionId, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::Deployable< uint64_t, CommonAPI::EmptyDeployment> deploy_uniqueId(_uniqueId, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< uint64_t, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable< uint64_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodAsync(
        *this,
        "requestPlayBrowsingSession",
        "tt",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_browsingSessionId, deploy_uniqueId,
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
            if (_callback)
                _callback(_internalCallStatus);
        },
        std::make_tuple());
    }
    void PlaybackControlDBusProxy::requestSetTimePosition(const uint32_t &_time, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< uint32_t, CommonAPI::EmptyDeployment> deploy_time(_time, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodWithReply(
        *this,
        "requestSetTimePosition",
        "u",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_time,
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> PlaybackControlDBusProxy::requestSetTimePositionAsync(const uint32_t &_time, RequestSetTimePositionAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< uint32_t, CommonAPI::EmptyDeployment> deploy_time(_time, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< uint32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodAsync(
        *this,
        "requestSetTimePosition",
        "u",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_time,
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
            if (_callback)
                _callback(_internalCallStatus);
        },
        std::make_tuple());
    }
    void PlaybackControlDBusProxy::requestGetPlaylist(const ::v1::com::ivis::MediaManager::MediaManagerTypes::ResultTypeList &_resultTypes, const uint32_t &_startIndex, const int32_t &_amount, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< ::v1::com::ivis::MediaManager::MediaManagerTypes::ResultTypeList, ::v1::com::ivis::MediaManager::MediaManagerTypes_::ResultTypeListDeployment_t> deploy_resultTypes(_resultTypes, static_cast< ::v1::com::ivis::MediaManager::MediaManagerTypes_::ResultTypeListDeployment_t* >(nullptr));
        CommonAPI::Deployable< uint32_t, CommonAPI::EmptyDeployment> deploy_startIndex(_startIndex, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::Deployable< int32_t, CommonAPI::EmptyDeployment> deploy_amount(_amount, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< ::v1::com::ivis::MediaManager::MediaManagerTypes::ResultTypeList, ::v1::com::ivis::MediaManager::MediaManagerTypes_::ResultTypeListDeployment_t >,
            CommonAPI::Deployable< uint32_t, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable< int32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodWithReply(
        *this,
        "requestGetPlaylist",
        "aiui",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_resultTypes, deploy_startIndex, deploy_amount,
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> PlaybackControlDBusProxy::requestGetPlaylistAsync(const ::v1::com::ivis::MediaManager::MediaManagerTypes::ResultTypeList &_resultTypes, const uint32_t &_startIndex, const int32_t &_amount, RequestGetPlaylistAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< ::v1::com::ivis::MediaManager::MediaManagerTypes::ResultTypeList, ::v1::com::ivis::MediaManager::MediaManagerTypes_::ResultTypeListDeployment_t> deploy_resultTypes(_resultTypes, static_cast< ::v1::com::ivis::MediaManager::MediaManagerTypes_::ResultTypeListDeployment_t* >(nullptr));
        CommonAPI::Deployable< uint32_t, CommonAPI::EmptyDeployment> deploy_startIndex(_startIndex, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::Deployable< int32_t, CommonAPI::EmptyDeployment> deploy_amount(_amount, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< ::v1::com::ivis::MediaManager::MediaManagerTypes::ResultTypeList, ::v1::com::ivis::MediaManager::MediaManagerTypes_::ResultTypeListDeployment_t >,
            CommonAPI::Deployable< uint32_t, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable< int32_t, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodAsync(
        *this,
        "requestGetPlaylist",
        "aiui",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_resultTypes, deploy_startIndex, deploy_amount,
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
            if (_callback)
                _callback(_internalCallStatus);
        },
        std::make_tuple());
    }
    void PlaybackControlDBusProxy::requestSetRepeatMode(const ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode &_mode, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode, CommonAPI::EmptyDeployment> deploy_mode(_mode, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodWithReply(
        *this,
        "requestSetRepeatMode",
        "i",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_mode,
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> PlaybackControlDBusProxy::requestSetRepeatModeAsync(const ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode &_mode, RequestSetRepeatModeAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode, CommonAPI::EmptyDeployment> deploy_mode(_mode, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodAsync(
        *this,
        "requestSetRepeatMode",
        "i",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_mode,
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
            if (_callback)
                _callback(_internalCallStatus);
        },
        std::make_tuple());
    }
    void PlaybackControlDBusProxy::requestSetPlayMode(const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode &_mode, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode, CommonAPI::EmptyDeployment> deploy_mode(_mode, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodWithReply(
        *this,
        "requestSetPlayMode",
        "i",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_mode,
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> PlaybackControlDBusProxy::requestSetPlayModeAsync(const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode &_mode, RequestSetPlayModeAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode, CommonAPI::EmptyDeployment> deploy_mode(_mode, static_cast< CommonAPI::EmptyDeployment* >(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable< ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
            >::callMethodAsync(
        *this,
        "requestSetPlayMode",
        "i",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_mode,
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
            if (_callback)
                _callback(_internalCallStatus);
        },
        std::make_tuple());
    }


void PlaybackControlDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
          ownVersionMajor = 1;
          ownVersionMinor = 0;
      }

      } // namespace MediaManager
      } // namespace ivis
      } // namespace com
      } // namespace v1