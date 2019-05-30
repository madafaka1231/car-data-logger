/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.someip 3.1.10.v201610310807.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_AVINFORMATIONPROVIDER_AV_INFORMATION_SOMEIP_STUB_ADAPTER_HPP_
#define V1_COM_IVIS_AVINFORMATIONPROVIDER_AV_INFORMATION_SOMEIP_STUB_ADAPTER_HPP_

#include <v1/com/ivis/AVInformationProvider/AVInformationStub.hpp>
#include <v1/com/ivis/AVInformationProvider/AVInformationTypesSomeIPDeployment.hpp>
#include <v1/com/ivis/AVInformationProvider/AVInformationSomeIPDeployment.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>
#include <CommonAPI/SomeIP/StubAdapterHelper.hpp>
#include <CommonAPI/SomeIP/StubAdapter.hpp>
#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Types.hpp>
#include <CommonAPI/SomeIP/Constants.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace ivis {
namespace AVInformationProvider {

template <typename _Stub = ::v1::com::ivis::AVInformationProvider::AVInformationStub, typename... _Stubs>
class AVInformationSomeIPStubAdapterInternal
    : public virtual AVInformationStubAdapter,
      public CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...>
{
public:
    typedef CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...> AVInformationSomeIPStubAdapterHelper;

    ~AVInformationSomeIPStubAdapterInternal() {
        deactivateManagedInstances();
        AVInformationSomeIPStubAdapterHelper::deinit();
    }

    void fireCurrentSourceAttributeChanged(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source& value);

    void fireMetaDataAttributeChanged(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData& value);

    void firePlayPositionAttributeChanged(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition& value);

    void firePlayStatusAttributeChanged(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus& value);

    void fireNotifyAlbumArtEvent(const uint32_t& totalSegmentCount, const uint32_t& currentIndex, const std::vector< uint8_t >& imageData);

    void deactivateManagedInstances() {
    }

    static CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::com::ivis::AVInformationProvider::AVInformationStub,
        CommonAPI::Version
    > getAVInformationInterfaceVersionStubDispatcher;

    static CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::com::ivis::AVInformationProvider::AVInformationStub,
        ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source,
        ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::SourceDeployment_t
    > getCurrentSourceAttributeStubDispatcher;
    static CommonAPI::SomeIP::SetObservableAttributeStubDispatcher<
        ::v1::com::ivis::AVInformationProvider::AVInformationStub,
        ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source,
        ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::SourceDeployment_t
    > setCurrentSourceAttributeStubDispatcher;
    static CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::com::ivis::AVInformationProvider::AVInformationStub,
        ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData,
        ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::MetaDataDeployment_t
    > getMetaDataAttributeStubDispatcher;
    static CommonAPI::SomeIP::SetObservableAttributeStubDispatcher<
        ::v1::com::ivis::AVInformationProvider::AVInformationStub,
        ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData,
        ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::MetaDataDeployment_t
    > setMetaDataAttributeStubDispatcher;
    static CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::com::ivis::AVInformationProvider::AVInformationStub,
        ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition,
        ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::PlayPositionDeployment_t
    > getPlayPositionAttributeStubDispatcher;
    static CommonAPI::SomeIP::SetObservableAttributeStubDispatcher<
        ::v1::com::ivis::AVInformationProvider::AVInformationStub,
        ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition,
        ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::PlayPositionDeployment_t
    > setPlayPositionAttributeStubDispatcher;
    static CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::com::ivis::AVInformationProvider::AVInformationStub,
        ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus,
        ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::PlayStatusDeployment_t
    > getPlayStatusAttributeStubDispatcher;
    static CommonAPI::SomeIP::SetObservableAttributeStubDispatcher<
        ::v1::com::ivis::AVInformationProvider::AVInformationStub,
        ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus,
        ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::PlayStatusDeployment_t
    > setPlayStatusAttributeStubDispatcher;

    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::com::ivis::AVInformationProvider::AVInformationStub,
        std::tuple< AVInformationTypes::Action>,
        std::tuple< >,
        std::tuple< ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::ActionDeployment_t>,
        std::tuple< >
    > requestActionStubDispatcher;

    AVInformationSomeIPStubAdapterInternal(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub):
        CommonAPI::SomeIP::StubAdapter(_address, _connection),
        AVInformationSomeIPStubAdapterHelper(
            _address,
            _connection,
            std::dynamic_pointer_cast< AVInformationStub>(_stub))
    {

                AVInformationSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x5654) }, &getCurrentSourceAttributeStubDispatcher );
                AVInformationSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x5656) }, &setCurrentSourceAttributeStubDispatcher );
                AVInformationSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x56b8) }, &getMetaDataAttributeStubDispatcher );
                AVInformationSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x56ba) }, &setMetaDataAttributeStubDispatcher );
                AVInformationSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x571c) }, &getPlayPositionAttributeStubDispatcher );
                AVInformationSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x571e) }, &setPlayPositionAttributeStubDispatcher );
                AVInformationSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x5780) }, &getPlayStatusAttributeStubDispatcher );
                AVInformationSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x5782) }, &setPlayStatusAttributeStubDispatcher );
        
                AVInformationSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x526c) }, &requestActionStubDispatcher );

        std::shared_ptr<CommonAPI::SomeIP::ClientId> clientId = std::make_shared<CommonAPI::SomeIP::ClientId>(0xFFFF);

        // Provided events/fields
        {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(0xa028));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0xa08c), itsEventGroups, false);
        }
        {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(CommonAPI::SomeIP::eventgroup_id_t(0x55f0)));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0x5655), itsEventGroups, true);
            fireCurrentSourceAttributeChanged(std::dynamic_pointer_cast< ::v1::com::ivis::AVInformationProvider::AVInformationStub>(_stub)->getCurrentSourceAttribute(clientId));
        }

        {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(CommonAPI::SomeIP::eventgroup_id_t(0x55f0)));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0x56b9), itsEventGroups, true);
            fireMetaDataAttributeChanged(std::dynamic_pointer_cast< ::v1::com::ivis::AVInformationProvider::AVInformationStub>(_stub)->getMetaDataAttribute(clientId));
        }

        {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(CommonAPI::SomeIP::eventgroup_id_t(0x55f0)));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0x571d), itsEventGroups, true);
            firePlayPositionAttributeChanged(std::dynamic_pointer_cast< ::v1::com::ivis::AVInformationProvider::AVInformationStub>(_stub)->getPlayPositionAttribute(clientId));
        }

        {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(CommonAPI::SomeIP::eventgroup_id_t(0x55f0)));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0x5781), itsEventGroups, true);
            firePlayStatusAttributeChanged(std::dynamic_pointer_cast< ::v1::com::ivis::AVInformationProvider::AVInformationStub>(_stub)->getPlayStatusAttribute(clientId));
        }

    }

private:
};

template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::GetAttributeStubDispatcher<
    ::v1::com::ivis::AVInformationProvider::AVInformationStub,
    CommonAPI::Version
    > AVInformationSomeIPStubAdapterInternal<_Stub, _Stubs...>::getAVInformationInterfaceVersionStubDispatcher(&AVInformationStub::getInterfaceVersion, false);

template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::GetAttributeStubDispatcher<
    ::v1::com::ivis::AVInformationProvider::AVInformationStub,
    ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source,
    ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::SourceDeployment_t
> AVInformationSomeIPStubAdapterInternal<_Stub, _Stubs...>::getCurrentSourceAttributeStubDispatcher(
    &AVInformationStub::getCurrentSourceAttribute, false);
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::SetObservableAttributeStubDispatcher<
    ::v1::com::ivis::AVInformationProvider::AVInformationStub,
    ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source,
    ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::SourceDeployment_t
> AVInformationSomeIPStubAdapterInternal<_Stub, _Stubs...>::setCurrentSourceAttributeStubDispatcher(
    &AVInformationStub::getCurrentSourceAttribute,
    &AVInformationStubRemoteEvent::onRemoteSetCurrentSourceAttribute,
    &AVInformationStubRemoteEvent::onRemoteCurrentSourceAttributeChanged,
    &AVInformationStubAdapter::fireCurrentSourceAttributeChanged,
    false
);

template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::GetAttributeStubDispatcher<
    ::v1::com::ivis::AVInformationProvider::AVInformationStub,
    ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData,
    ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::MetaDataDeployment_t
> AVInformationSomeIPStubAdapterInternal<_Stub, _Stubs...>::getMetaDataAttributeStubDispatcher(
    &AVInformationStub::getMetaDataAttribute, false, &::v1::com::ivis::AVInformationProvider::AVInformation_::metaDataDeployment);
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::SetObservableAttributeStubDispatcher<
    ::v1::com::ivis::AVInformationProvider::AVInformationStub,
    ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData,
    ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::MetaDataDeployment_t
> AVInformationSomeIPStubAdapterInternal<_Stub, _Stubs...>::setMetaDataAttributeStubDispatcher(
    &AVInformationStub::getMetaDataAttribute,
    &AVInformationStubRemoteEvent::onRemoteSetMetaDataAttribute,
    &AVInformationStubRemoteEvent::onRemoteMetaDataAttributeChanged,
    &AVInformationStubAdapter::fireMetaDataAttributeChanged,
    false,
    &::v1::com::ivis::AVInformationProvider::AVInformation_::metaDataDeployment
);

template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::GetAttributeStubDispatcher<
    ::v1::com::ivis::AVInformationProvider::AVInformationStub,
    ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition,
    ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::PlayPositionDeployment_t
> AVInformationSomeIPStubAdapterInternal<_Stub, _Stubs...>::getPlayPositionAttributeStubDispatcher(
    &AVInformationStub::getPlayPositionAttribute, false, &::v1::com::ivis::AVInformationProvider::AVInformation_::playPositionDeployment);
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::SetObservableAttributeStubDispatcher<
    ::v1::com::ivis::AVInformationProvider::AVInformationStub,
    ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition,
    ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::PlayPositionDeployment_t
> AVInformationSomeIPStubAdapterInternal<_Stub, _Stubs...>::setPlayPositionAttributeStubDispatcher(
    &AVInformationStub::getPlayPositionAttribute,
    &AVInformationStubRemoteEvent::onRemoteSetPlayPositionAttribute,
    &AVInformationStubRemoteEvent::onRemotePlayPositionAttributeChanged,
    &AVInformationStubAdapter::firePlayPositionAttributeChanged,
    false,
    &::v1::com::ivis::AVInformationProvider::AVInformation_::playPositionDeployment
);

template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::GetAttributeStubDispatcher<
    ::v1::com::ivis::AVInformationProvider::AVInformationStub,
    ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus,
    ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::PlayStatusDeployment_t
> AVInformationSomeIPStubAdapterInternal<_Stub, _Stubs...>::getPlayStatusAttributeStubDispatcher(
    &AVInformationStub::getPlayStatusAttribute, false);
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::SetObservableAttributeStubDispatcher<
    ::v1::com::ivis::AVInformationProvider::AVInformationStub,
    ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus,
    ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::PlayStatusDeployment_t
> AVInformationSomeIPStubAdapterInternal<_Stub, _Stubs...>::setPlayStatusAttributeStubDispatcher(
    &AVInformationStub::getPlayStatusAttribute,
    &AVInformationStubRemoteEvent::onRemoteSetPlayStatusAttribute,
    &AVInformationStubRemoteEvent::onRemotePlayStatusAttributeChanged,
    &AVInformationStubAdapter::firePlayStatusAttributeChanged,
    false
);

template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v1::com::ivis::AVInformationProvider::AVInformationStub,
    std::tuple< AVInformationTypes::Action>,
    std::tuple< >,
    std::tuple< ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::ActionDeployment_t>,
    std::tuple< >
> AVInformationSomeIPStubAdapterInternal<_Stub, _Stubs...>::requestActionStubDispatcher(
    &AVInformationStub::requestAction,
    false,
    std::make_tuple(static_cast< ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::ActionDeployment_t* >(nullptr)),
    std::make_tuple());

template <typename _Stub, typename... _Stubs>
void AVInformationSomeIPStubAdapterInternal<_Stub, _Stubs...>::fireCurrentSourceAttributeChanged(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source& value) {
    CommonAPI::Deployable< ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source, ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::SourceDeployment_t> deployedValue(value, static_cast< ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::SourceDeployment_t* >(nullptr));
    CommonAPI::SomeIP::StubEventHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source,
                ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::SourceDeployment_t
            >
            >
    >::sendEvent(
        *this,
        CommonAPI::SomeIP::event_id_t(0x5655),
        false,
        deployedValue
    );
}

template <typename _Stub, typename... _Stubs>
void AVInformationSomeIPStubAdapterInternal<_Stub, _Stubs...>::fireMetaDataAttributeChanged(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData& value) {
    CommonAPI::Deployable< ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData, ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::MetaDataDeployment_t> deployedValue(value, &::v1::com::ivis::AVInformationProvider::AVInformation_::metaDataDeployment);
    CommonAPI::SomeIP::StubEventHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                ::v1::com::ivis::AVInformationProvider::AVInformationTypes::MetaData,
                ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::MetaDataDeployment_t
            >
            >
    >::sendEvent(
        *this,
        CommonAPI::SomeIP::event_id_t(0x56b9),
        false,
        deployedValue
    );
}

template <typename _Stub, typename... _Stubs>
void AVInformationSomeIPStubAdapterInternal<_Stub, _Stubs...>::firePlayPositionAttributeChanged(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition& value) {
    CommonAPI::Deployable< ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition, ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::PlayPositionDeployment_t> deployedValue(value, &::v1::com::ivis::AVInformationProvider::AVInformation_::playPositionDeployment);
    CommonAPI::SomeIP::StubEventHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayPosition,
                ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::PlayPositionDeployment_t
            >
            >
    >::sendEvent(
        *this,
        CommonAPI::SomeIP::event_id_t(0x571d),
        false,
        deployedValue
    );
}

template <typename _Stub, typename... _Stubs>
void AVInformationSomeIPStubAdapterInternal<_Stub, _Stubs...>::firePlayStatusAttributeChanged(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus& value) {
    CommonAPI::Deployable< ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus, ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::PlayStatusDeployment_t> deployedValue(value, static_cast< ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::PlayStatusDeployment_t* >(nullptr));
    CommonAPI::SomeIP::StubEventHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus,
                ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::PlayStatusDeployment_t
            >
            >
    >::sendEvent(
        *this,
        CommonAPI::SomeIP::event_id_t(0x5781),
        false,
        deployedValue
    );
}

template <typename _Stub, typename... _Stubs>
void AVInformationSomeIPStubAdapterInternal<_Stub, _Stubs...>::fireNotifyAlbumArtEvent(const uint32_t& _totalSegmentCount, const uint32_t& _currentIndex, const std::vector< uint8_t >& _imageData) {
    CommonAPI::Deployable< uint32_t, CommonAPI::SomeIP::IntegerDeployment<uint32_t>> deployed_totalSegmentCount(_totalSegmentCount, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr));
    CommonAPI::Deployable< uint32_t, CommonAPI::SomeIP::IntegerDeployment<uint32_t>> deployed_currentIndex(_currentIndex, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr));
    CommonAPI::Deployable< std::vector< uint8_t >, CommonAPI::SomeIP::ArrayDeployment< CommonAPI::SomeIP::IntegerDeployment<uint8_t> >> deployed_imageData(_imageData, static_cast< CommonAPI::SomeIP::ArrayDeployment< CommonAPI::SomeIP::IntegerDeployment<uint8_t> >* >(nullptr));
    CommonAPI::SomeIP::StubEventHelper<CommonAPI::SomeIP::SerializableArguments<  CommonAPI::Deployable< uint32_t, CommonAPI::SomeIP::IntegerDeployment<uint32_t> > 
    ,  CommonAPI::Deployable< uint32_t, CommonAPI::SomeIP::IntegerDeployment<uint32_t> > 
    ,  CommonAPI::Deployable< std::vector< uint8_t >, CommonAPI::SomeIP::ArrayDeployment< CommonAPI::SomeIP::IntegerDeployment<uint8_t> > > 
    >>
        ::sendEvent(
            *this,
            CommonAPI::SomeIP::event_id_t(0xa08c),
            false,
             deployed_totalSegmentCount 
            ,  deployed_currentIndex 
            ,  deployed_imageData 
    );
}

template <typename _Stub = ::v1::com::ivis::AVInformationProvider::AVInformationStub, typename... _Stubs>
class AVInformationSomeIPStubAdapter
    : public AVInformationSomeIPStubAdapterInternal<_Stub, _Stubs...>,
      public std::enable_shared_from_this< AVInformationSomeIPStubAdapter<_Stub, _Stubs...>> {
public:
    AVInformationSomeIPStubAdapter(const CommonAPI::SomeIP::Address &_address,
                                            const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                                            const std::shared_ptr<CommonAPI::StubBase> &_stub)
        : CommonAPI::SomeIP::StubAdapter(_address, _connection),
          AVInformationSomeIPStubAdapterInternal<_Stub, _Stubs...>(_address, _connection, _stub) {
    }
};

} // namespace AVInformationProvider
} // namespace ivis
} // namespace com
} // namespace v1

#endif // V1_COM_IVIS_AVINFORMATIONPROVIDER_AV_Information_SOMEIP_STUB_ADAPTER_HPP_