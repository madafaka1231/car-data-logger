/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.v201601121427.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_AVINFORMATIONPROVIDER_AV_Information_STUB_DEFAULT_HPP_
#define V1_COM_IVIS_AVINFORMATIONPROVIDER_AV_Information_STUB_DEFAULT_HPP_


#include <v1/com/ivis/AVInformationProvider/AVInformationStub.hpp>
#include <sstream>

namespace v1 {
namespace com {
namespace ivis {
namespace AVInformationProvider {

/**
 * Provides a default implementation for AVInformationStubRemoteEvent and
 * AVInformationStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class AVInformationStubDefault
    : public virtual AVInformationStub {
public:
    AVInformationStubDefault();

    AVInformationStubRemoteEvent* initStubAdapter(const std::shared_ptr<AVInformationStubAdapter> &_adapter);

    const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client);

    virtual const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source& getCurrentSourceAttribute();
    virtual const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source& getCurrentSourceAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setCurrentSourceAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source _value);
    virtual void setCurrentSourceAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source _value);
    virtual const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData& getMetaDataAttribute();
    virtual const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData& getMetaDataAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setMetaDataAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData _value);
    virtual void setMetaDataAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData _value);
    virtual const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition& getPlayPositionAttribute();
    virtual const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition& getPlayPositionAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setPlayPositionAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition _value);
    virtual void setPlayPositionAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition _value);
    virtual const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus& getPlayStatusAttribute();
    virtual const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus& getPlayStatusAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setPlayStatusAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus _value);
    virtual void setPlayStatusAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus _value);
    virtual const uint32_t& getSystemTimeAttribute();
    virtual const uint32_t& getSystemTimeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setSystemTimeAttribute(uint32_t _value);
    virtual void setSystemTimeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _value);

    virtual void requestAction(const std::shared_ptr<CommonAPI::ClientId> _client, AVInformationTypes::Action _action, requestActionReply_t _reply);

virtual void fireNotifyAlbumArtEvent(const uint32_t &_totalSegmentCount, const uint32_t &_currentIndex, const std::vector<uint8_t> &_imageData);


protected:
    virtual bool trySetCurrentSourceAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source _value);
    virtual bool validateCurrentSourceAttributeRequestedValue(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source &_value);
    virtual void onRemoteCurrentSourceAttributeChanged();
    virtual bool trySetMetaDataAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData _value);
    virtual bool validateMetaDataAttributeRequestedValue(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData &_value);
    virtual void onRemoteMetaDataAttributeChanged();
    virtual bool trySetPlayPositionAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition _value);
    virtual bool validatePlayPositionAttributeRequestedValue(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition &_value);
    virtual void onRemotePlayPositionAttributeChanged();
    virtual bool trySetPlayStatusAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus _value);
    virtual bool validatePlayStatusAttributeRequestedValue(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus &_value);
    virtual void onRemotePlayStatusAttributeChanged();
    virtual bool trySetSystemTimeAttribute(uint32_t _value);
    virtual bool validateSystemTimeAttributeRequestedValue(const uint32_t &_value);
    virtual void onRemoteSystemTimeAttributeChanged();
    class RemoteEventHandler: public virtual AVInformationStubRemoteEvent {
    public:
        RemoteEventHandler(AVInformationStubDefault *_defaultStub);

        virtual bool onRemoteSetCurrentSourceAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source _value);
        virtual bool onRemoteSetCurrentSourceAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source _value);
        virtual void onRemoteCurrentSourceAttributeChanged();

        virtual bool onRemoteSetMetaDataAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData _value);
        virtual bool onRemoteSetMetaDataAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData _value);
        virtual void onRemoteMetaDataAttributeChanged();

        virtual bool onRemoteSetPlayPositionAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition _value);
        virtual bool onRemoteSetPlayPositionAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition _value);
        virtual void onRemotePlayPositionAttributeChanged();

        virtual bool onRemoteSetPlayStatusAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus _value);
        virtual bool onRemoteSetPlayStatusAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus _value);
        virtual void onRemotePlayStatusAttributeChanged();

        virtual bool onRemoteSetSystemTimeAttribute(uint32_t _value);
        virtual bool onRemoteSetSystemTimeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _value);
        virtual void onRemoteSystemTimeAttributeChanged();


    private:
        AVInformationStubDefault *defaultStub_;
    };
private:
    AVInformationStubDefault::RemoteEventHandler remoteEventHandler_;

    ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source currentSourceAttributeValue_ {};
    ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData metaDataAttributeValue_ {};
    ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition playPositionAttributeValue_ {};
    ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus playStatusAttributeValue_ {};
    uint32_t systemTimeAttributeValue_ {};

    CommonAPI::Version interfaceVersion_;
};

} // namespace AVInformationProvider
} // namespace ivis
} // namespace com
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COM_IVIS_AVINFORMATIONPROVIDER_AV_Information_STUB_DEFAULT
