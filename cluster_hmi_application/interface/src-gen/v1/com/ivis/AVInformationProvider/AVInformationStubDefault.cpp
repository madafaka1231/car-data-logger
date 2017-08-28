/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.v201601121427.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/com/ivis/AVInformationProvider/AVInformationStubDefault.hpp>
#include <assert.h>

namespace v1 {
namespace com {
namespace ivis {
namespace AVInformationProvider {

AVInformationStubDefault::AVInformationStubDefault():
        remoteEventHandler_(this),
        interfaceVersion_(AVInformation::getInterfaceVersion()) {
}

const CommonAPI::Version& AVInformationStubDefault::getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return interfaceVersion_;
}

AVInformationStubRemoteEvent* AVInformationStubDefault::initStubAdapter(const std::shared_ptr<AVInformationStubAdapter> &_adapter) {
    CommonAPI::Stub<AVInformationStubAdapter, AVInformationStubRemoteEvent>::stubAdapter_ = _adapter;
    return &remoteEventHandler_;
}

const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source& AVInformationStubDefault::getCurrentSourceAttribute() {
    return currentSourceAttributeValue_;
}

const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source& AVInformationStubDefault::getCurrentSourceAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getCurrentSourceAttribute();
}

void AVInformationStubDefault::setCurrentSourceAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source _value) {
    const bool valueChanged = trySetCurrentSourceAttribute(std::move(_value));
    if (valueChanged) {
        auto stubAdapter = CommonAPI::Stub<AVInformationStubAdapter, AVInformationStubRemoteEvent>::stubAdapter_.lock();
        if (stubAdapter)
            stubAdapter->fireCurrentSourceAttributeChanged(currentSourceAttributeValue_);
    }
}

bool AVInformationStubDefault::trySetCurrentSourceAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source _value) {
    if (!validateCurrentSourceAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (currentSourceAttributeValue_ != _value);
    currentSourceAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool AVInformationStubDefault::validateCurrentSourceAttributeRequestedValue(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source &_value) {
    (void)_value;
	return _value.validate();
}

void AVInformationStubDefault::setCurrentSourceAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source _value) {
    (void)_client;
    setCurrentSourceAttribute(_value);
}

void AVInformationStubDefault::onRemoteCurrentSourceAttributeChanged() {
    // No operation in default
}

void AVInformationStubDefault::RemoteEventHandler::onRemoteCurrentSourceAttributeChanged() {
	assert(defaultStub_ !=NULL);
    defaultStub_->onRemoteCurrentSourceAttributeChanged();
}

bool AVInformationStubDefault::RemoteEventHandler::onRemoteSetCurrentSourceAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source _value) {
	assert(defaultStub_ !=NULL);
    return defaultStub_->trySetCurrentSourceAttribute(std::move(_value));
}

bool AVInformationStubDefault::RemoteEventHandler::onRemoteSetCurrentSourceAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source _value) {
    (void)_client;
    return onRemoteSetCurrentSourceAttribute(_value);
}

const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData& AVInformationStubDefault::getMetaDataAttribute() {
    return metaDataAttributeValue_;
}

const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData& AVInformationStubDefault::getMetaDataAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getMetaDataAttribute();
}

void AVInformationStubDefault::setMetaDataAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData _value) {
    const bool valueChanged = trySetMetaDataAttribute(std::move(_value));
    if (valueChanged) {
        auto stubAdapter = CommonAPI::Stub<AVInformationStubAdapter, AVInformationStubRemoteEvent>::stubAdapter_.lock();
        if (stubAdapter)
            stubAdapter->fireMetaDataAttributeChanged(metaDataAttributeValue_);
    }
}

bool AVInformationStubDefault::trySetMetaDataAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData _value) {
    if (!validateMetaDataAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (metaDataAttributeValue_ != _value);
    metaDataAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool AVInformationStubDefault::validateMetaDataAttributeRequestedValue(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData &_value) {
    (void)_value;
	return true;
}

void AVInformationStubDefault::setMetaDataAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData _value) {
    (void)_client;
    setMetaDataAttribute(_value);
}

void AVInformationStubDefault::onRemoteMetaDataAttributeChanged() {
    // No operation in default
}

void AVInformationStubDefault::RemoteEventHandler::onRemoteMetaDataAttributeChanged() {
	assert(defaultStub_ !=NULL);
    defaultStub_->onRemoteMetaDataAttributeChanged();
}

bool AVInformationStubDefault::RemoteEventHandler::onRemoteSetMetaDataAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData _value) {
	assert(defaultStub_ !=NULL);
    return defaultStub_->trySetMetaDataAttribute(std::move(_value));
}

bool AVInformationStubDefault::RemoteEventHandler::onRemoteSetMetaDataAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData _value) {
    (void)_client;
    return onRemoteSetMetaDataAttribute(_value);
}

const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition& AVInformationStubDefault::getPlayPositionAttribute() {
    return playPositionAttributeValue_;
}

const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition& AVInformationStubDefault::getPlayPositionAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getPlayPositionAttribute();
}

void AVInformationStubDefault::setPlayPositionAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition _value) {
    const bool valueChanged = trySetPlayPositionAttribute(std::move(_value));
    if (valueChanged) {
        auto stubAdapter = CommonAPI::Stub<AVInformationStubAdapter, AVInformationStubRemoteEvent>::stubAdapter_.lock();
        if (stubAdapter)
            stubAdapter->firePlayPositionAttributeChanged(playPositionAttributeValue_);
    }
}

bool AVInformationStubDefault::trySetPlayPositionAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition _value) {
    if (!validatePlayPositionAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (playPositionAttributeValue_ != _value);
    playPositionAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool AVInformationStubDefault::validatePlayPositionAttributeRequestedValue(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition &_value) {
    (void)_value;
	return true;
}

void AVInformationStubDefault::setPlayPositionAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition _value) {
    (void)_client;
    setPlayPositionAttribute(_value);
}

void AVInformationStubDefault::onRemotePlayPositionAttributeChanged() {
    // No operation in default
}

void AVInformationStubDefault::RemoteEventHandler::onRemotePlayPositionAttributeChanged() {
	assert(defaultStub_ !=NULL);
    defaultStub_->onRemotePlayPositionAttributeChanged();
}

bool AVInformationStubDefault::RemoteEventHandler::onRemoteSetPlayPositionAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition _value) {
	assert(defaultStub_ !=NULL);
    return defaultStub_->trySetPlayPositionAttribute(std::move(_value));
}

bool AVInformationStubDefault::RemoteEventHandler::onRemoteSetPlayPositionAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition _value) {
    (void)_client;
    return onRemoteSetPlayPositionAttribute(_value);
}

const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus& AVInformationStubDefault::getPlayStatusAttribute() {
    return playStatusAttributeValue_;
}

const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus& AVInformationStubDefault::getPlayStatusAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getPlayStatusAttribute();
}

void AVInformationStubDefault::setPlayStatusAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus _value) {
    const bool valueChanged = trySetPlayStatusAttribute(std::move(_value));
    if (valueChanged) {
        auto stubAdapter = CommonAPI::Stub<AVInformationStubAdapter, AVInformationStubRemoteEvent>::stubAdapter_.lock();
        if (stubAdapter)
            stubAdapter->firePlayStatusAttributeChanged(playStatusAttributeValue_);
    }
}

bool AVInformationStubDefault::trySetPlayStatusAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus _value) {
    if (!validatePlayStatusAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (playStatusAttributeValue_ != _value);
    playStatusAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool AVInformationStubDefault::validatePlayStatusAttributeRequestedValue(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus &_value) {
    (void)_value;
	return _value.validate();
}

void AVInformationStubDefault::setPlayStatusAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus _value) {
    (void)_client;
    setPlayStatusAttribute(_value);
}

void AVInformationStubDefault::onRemotePlayStatusAttributeChanged() {
    // No operation in default
}

void AVInformationStubDefault::RemoteEventHandler::onRemotePlayStatusAttributeChanged() {
	assert(defaultStub_ !=NULL);
    defaultStub_->onRemotePlayStatusAttributeChanged();
}

bool AVInformationStubDefault::RemoteEventHandler::onRemoteSetPlayStatusAttribute(::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus _value) {
	assert(defaultStub_ !=NULL);
    return defaultStub_->trySetPlayStatusAttribute(std::move(_value));
}

bool AVInformationStubDefault::RemoteEventHandler::onRemoteSetPlayStatusAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus _value) {
    (void)_client;
    return onRemoteSetPlayStatusAttribute(_value);
}

const uint32_t& AVInformationStubDefault::getSystemTimeAttribute() {
    return systemTimeAttributeValue_;
}

const uint32_t& AVInformationStubDefault::getSystemTimeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return getSystemTimeAttribute();
}

void AVInformationStubDefault::setSystemTimeAttribute(uint32_t _value) {
    const bool valueChanged = trySetSystemTimeAttribute(std::move(_value));
    if (valueChanged) {
        auto stubAdapter = CommonAPI::Stub<AVInformationStubAdapter, AVInformationStubRemoteEvent>::stubAdapter_.lock();
        if (stubAdapter)
            stubAdapter->fireSystemTimeAttributeChanged(systemTimeAttributeValue_);
    }
}

bool AVInformationStubDefault::trySetSystemTimeAttribute(uint32_t _value) {
    if (!validateSystemTimeAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (systemTimeAttributeValue_ != _value);
    systemTimeAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool AVInformationStubDefault::validateSystemTimeAttributeRequestedValue(const uint32_t &_value) {
    (void)_value;
	return true;
}

void AVInformationStubDefault::setSystemTimeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _value) {
    (void)_client;
    setSystemTimeAttribute(_value);
}

void AVInformationStubDefault::onRemoteSystemTimeAttributeChanged() {
    // No operation in default
}

void AVInformationStubDefault::RemoteEventHandler::onRemoteSystemTimeAttributeChanged() {
	assert(defaultStub_ !=NULL);
    defaultStub_->onRemoteSystemTimeAttributeChanged();
}

bool AVInformationStubDefault::RemoteEventHandler::onRemoteSetSystemTimeAttribute(uint32_t _value) {
	assert(defaultStub_ !=NULL);
    return defaultStub_->trySetSystemTimeAttribute(std::move(_value));
}

bool AVInformationStubDefault::RemoteEventHandler::onRemoteSetSystemTimeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _value) {
    (void)_client;
    return onRemoteSetSystemTimeAttribute(_value);
}


void AVInformationStubDefault::requestAction(const std::shared_ptr<CommonAPI::ClientId> _client, AVInformationTypes::Action _action, requestActionReply_t _reply) {
    (void)_client;
    (void) _action;
    _reply();
}


void AVInformationStubDefault::fireNotifyAlbumArtEvent(const uint32_t &_totalSegmentCount, const uint32_t &_currentIndex, const std::vector<uint8_t> &_imageData) {
    assert((CommonAPI::Stub<AVInformationStubAdapter, AVInformationStubRemoteEvent>::stubAdapter_.lock()) !=NULL);
    auto stubAdapter = CommonAPI::Stub<AVInformationStubAdapter, AVInformationStubRemoteEvent>::stubAdapter_.lock();
   	if (stubAdapter)
        stubAdapter->fireNotifyAlbumArtEvent(_totalSegmentCount, _currentIndex, _imageData);
}


AVInformationStubDefault::RemoteEventHandler::RemoteEventHandler(AVInformationStubDefault *_defaultStub)
    : 
      defaultStub_(_defaultStub) {
}

} // namespace AVInformationProvider
} // namespace ivis
} // namespace com
} // namespace v1
