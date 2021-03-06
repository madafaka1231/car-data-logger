/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.10.v201611111521.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_MEDIAMANAGER_Playback_Control_STUB_DEFAULT_HPP_
#define V1_COM_IVIS_MEDIAMANAGER_Playback_Control_STUB_DEFAULT_HPP_


#include <CommonAPI/Export.hpp>

#include <v1/com/ivis/MediaManager/PlaybackControlStub.hpp>
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
namespace MediaManager {

/**
 * Provides a default implementation for PlaybackControlStubRemoteEvent and
 * PlaybackControlStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class COMMONAPI_EXPORT_CLASS_EXPLICIT PlaybackControlStubDefault
    : public virtual PlaybackControlStub {
public:
    COMMONAPI_EXPORT PlaybackControlStubDefault();

    COMMONAPI_EXPORT PlaybackControlStubRemoteEvent* initStubAdapter(const std::shared_ptr< PlaybackControlStubAdapter> &_adapter);

    COMMONAPI_EXPORT const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client);

    COMMONAPI_EXPORT virtual const ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode& getRepeatModeAttribute();
    COMMONAPI_EXPORT virtual const ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode& getRepeatModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    COMMONAPI_EXPORT virtual void setRepeatModeAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode _value);
    COMMONAPI_EXPORT virtual void setRepeatModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode _value);
    COMMONAPI_EXPORT virtual const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode& getPlayModeAttribute();
    COMMONAPI_EXPORT virtual const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode& getPlayModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    COMMONAPI_EXPORT virtual void setPlayModeAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode _value);
    COMMONAPI_EXPORT virtual void setPlayModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode _value);
    COMMONAPI_EXPORT virtual const ::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo& getCurrentTrackInfoAttribute();
    COMMONAPI_EXPORT virtual const ::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo& getCurrentTrackInfoAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    COMMONAPI_EXPORT virtual void setCurrentTrackInfoAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo _value);
    COMMONAPI_EXPORT virtual void setCurrentTrackInfoAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo _value);
    COMMONAPI_EXPORT virtual const uint32_t& getCurrentTrackNumberAttribute();
    COMMONAPI_EXPORT virtual const uint32_t& getCurrentTrackNumberAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    COMMONAPI_EXPORT virtual void setCurrentTrackNumberAttribute(uint32_t _value);
    COMMONAPI_EXPORT virtual void setCurrentTrackNumberAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _value);
    COMMONAPI_EXPORT virtual const uint32_t& getTotalTrackNumberAttribute();
    COMMONAPI_EXPORT virtual const uint32_t& getTotalTrackNumberAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    COMMONAPI_EXPORT virtual void setTotalTrackNumberAttribute(uint32_t _value);
    COMMONAPI_EXPORT virtual void setTotalTrackNumberAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _value);
    COMMONAPI_EXPORT virtual const bool& getVideoVisibleAttribute();
    COMMONAPI_EXPORT virtual const bool& getVideoVisibleAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    COMMONAPI_EXPORT virtual void setVideoVisibleAttribute(bool _value);
    COMMONAPI_EXPORT virtual void setVideoVisibleAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value);
    COMMONAPI_EXPORT virtual const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo& getPlayStateInfoAttribute();
    COMMONAPI_EXPORT virtual const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo& getPlayStateInfoAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    COMMONAPI_EXPORT virtual void setPlayStateInfoAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo _value);
    COMMONAPI_EXPORT virtual void setPlayStateInfoAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo _value);

    COMMONAPI_EXPORT virtual void requestAction(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::Action _action, uint64_t _value, requestActionReply_t _reply);
    COMMONAPI_EXPORT virtual void requestPlay(const std::shared_ptr<CommonAPI::ClientId> _client, uint64_t _indexOfplaylist, requestPlayReply_t _reply);
    COMMONAPI_EXPORT virtual void requestPlayBrowsingSession(const std::shared_ptr<CommonAPI::ClientId> _client, uint64_t _browsingSessionId, uint64_t _uniqueId, requestPlayBrowsingSessionReply_t _reply);
    COMMONAPI_EXPORT virtual void requestSetTimePosition(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _time, requestSetTimePositionReply_t _reply);
    COMMONAPI_EXPORT virtual void requestGetPlaylist(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::ResultTypeList _resultTypes, uint32_t _startIndex, int32_t _amount, requestGetPlaylistReply_t _reply);
    COMMONAPI_EXPORT virtual void requestSetRepeatMode(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode _mode, requestSetRepeatModeReply_t _reply);
    COMMONAPI_EXPORT virtual void requestSetPlayMode(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode _mode, requestSetPlayModeReply_t _reply);

    COMMONAPI_EXPORT virtual void fireNotifiyTimePositionInfoChangedEvent(const ::v1::com::ivis::MediaManager::MediaManagerTypes::TimePositionInfo &_timePositionInfo);
    COMMONAPI_EXPORT virtual void fireResponseGetPlaylistEvent(const uint32_t &_startIndex, const int32_t &_amount, const ::v1::com::ivis::MediaManager::MediaManagerTypes::Playlist &_playlist);
    COMMONAPI_EXPORT virtual void fireNotifyPlaylistChangedEvent();
    COMMONAPI_EXPORT virtual void fireNotifyPlaybackErrorEvent(const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlaybackError &_errType);

    
protected:
    COMMONAPI_EXPORT virtual bool trySetRepeatModeAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode _value);
    COMMONAPI_EXPORT virtual bool validateRepeatModeAttributeRequestedValue(const ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode &_value);
    COMMONAPI_EXPORT virtual void onRemoteRepeatModeAttributeChanged();
    COMMONAPI_EXPORT virtual bool trySetPlayModeAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode _value);
    COMMONAPI_EXPORT virtual bool validatePlayModeAttributeRequestedValue(const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode &_value);
    COMMONAPI_EXPORT virtual void onRemotePlayModeAttributeChanged();
    COMMONAPI_EXPORT virtual bool trySetCurrentTrackInfoAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo _value);
    COMMONAPI_EXPORT virtual bool validateCurrentTrackInfoAttributeRequestedValue(const ::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo &_value);
    COMMONAPI_EXPORT virtual void onRemoteCurrentTrackInfoAttributeChanged();
    COMMONAPI_EXPORT virtual bool trySetCurrentTrackNumberAttribute(uint32_t _value);
    COMMONAPI_EXPORT virtual bool validateCurrentTrackNumberAttributeRequestedValue(const uint32_t &_value);
    COMMONAPI_EXPORT virtual void onRemoteCurrentTrackNumberAttributeChanged();
    COMMONAPI_EXPORT virtual bool trySetTotalTrackNumberAttribute(uint32_t _value);
    COMMONAPI_EXPORT virtual bool validateTotalTrackNumberAttributeRequestedValue(const uint32_t &_value);
    COMMONAPI_EXPORT virtual void onRemoteTotalTrackNumberAttributeChanged();
    COMMONAPI_EXPORT virtual bool trySetVideoVisibleAttribute(bool _value);
    COMMONAPI_EXPORT virtual bool validateVideoVisibleAttributeRequestedValue(const bool &_value);
    COMMONAPI_EXPORT virtual void onRemoteVideoVisibleAttributeChanged();
    COMMONAPI_EXPORT virtual bool trySetPlayStateInfoAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo _value);
    COMMONAPI_EXPORT virtual bool validatePlayStateInfoAttributeRequestedValue(const ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo &_value);
    COMMONAPI_EXPORT virtual void onRemotePlayStateInfoAttributeChanged();
    class COMMONAPI_EXPORT_CLASS_EXPLICIT RemoteEventHandler: public virtual PlaybackControlStubRemoteEvent {
    public:
        COMMONAPI_EXPORT RemoteEventHandler(PlaybackControlStubDefault *_defaultStub);

        COMMONAPI_EXPORT virtual bool onRemoteSetRepeatModeAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode _value);
        COMMONAPI_EXPORT virtual bool onRemoteSetRepeatModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode _value);
        COMMONAPI_EXPORT virtual void onRemoteRepeatModeAttributeChanged();

        COMMONAPI_EXPORT virtual bool onRemoteSetPlayModeAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode _value);
        COMMONAPI_EXPORT virtual bool onRemoteSetPlayModeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode _value);
        COMMONAPI_EXPORT virtual void onRemotePlayModeAttributeChanged();

        COMMONAPI_EXPORT virtual bool onRemoteSetCurrentTrackInfoAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo _value);
        COMMONAPI_EXPORT virtual bool onRemoteSetCurrentTrackInfoAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo _value);
        COMMONAPI_EXPORT virtual void onRemoteCurrentTrackInfoAttributeChanged();

        COMMONAPI_EXPORT virtual bool onRemoteSetCurrentTrackNumberAttribute(uint32_t _value);
        COMMONAPI_EXPORT virtual bool onRemoteSetCurrentTrackNumberAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _value);
        COMMONAPI_EXPORT virtual void onRemoteCurrentTrackNumberAttributeChanged();

        COMMONAPI_EXPORT virtual bool onRemoteSetTotalTrackNumberAttribute(uint32_t _value);
        COMMONAPI_EXPORT virtual bool onRemoteSetTotalTrackNumberAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _value);
        COMMONAPI_EXPORT virtual void onRemoteTotalTrackNumberAttributeChanged();

        COMMONAPI_EXPORT virtual bool onRemoteSetVideoVisibleAttribute(bool _value);
        COMMONAPI_EXPORT virtual bool onRemoteSetVideoVisibleAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value);
        COMMONAPI_EXPORT virtual void onRemoteVideoVisibleAttributeChanged();

        COMMONAPI_EXPORT virtual bool onRemoteSetPlayStateInfoAttribute(::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo _value);
        COMMONAPI_EXPORT virtual bool onRemoteSetPlayStateInfoAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo _value);
        COMMONAPI_EXPORT virtual void onRemotePlayStateInfoAttributeChanged();


    private:
        PlaybackControlStubDefault *defaultStub_;
    };
private:
    PlaybackControlStubDefault::RemoteEventHandler remoteEventHandler_;

    ::v1::com::ivis::MediaManager::MediaManagerTypes::RepeatMode repeatModeAttributeValue_ {};
    ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayMode playModeAttributeValue_ {};
    ::v1::com::ivis::MediaManager::MediaManagerTypes::TrackInfo currentTrackInfoAttributeValue_ {};
    uint32_t currentTrackNumberAttributeValue_ {};
    uint32_t totalTrackNumberAttributeValue_ {};
    bool videoVisibleAttributeValue_ {};
    ::v1::com::ivis::MediaManager::MediaManagerTypes::PlayStateInfo playStateInfoAttributeValue_ {};

    CommonAPI::Version interfaceVersion_;
};

} // namespace MediaManager
} // namespace ivis
} // namespace com
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_IVIS_MEDIAMANAGER_Playback_Control_STUB_DEFAULT
