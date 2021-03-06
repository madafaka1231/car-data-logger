/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.someip 3.1.10.v201610310807.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/com/ivis/CDL/ClientAPIRemoteSomeIPStubAdapter.hpp>
#include <v1/com/ivis/CDL/ClientAPIRemote.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace ivis {
namespace CDL {

std::shared_ptr<CommonAPI::SomeIP::StubAdapter> createClientAPIRemoteSomeIPStubAdapter(
                   const CommonAPI::SomeIP::Address &_address,
                   const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                   const std::shared_ptr<CommonAPI::StubBase> &_stub) {
    return std::make_shared< ClientAPIRemoteSomeIPStubAdapter<::v1::com::ivis::CDL::ClientAPIRemoteStub>>(_address, _connection, _stub);
}

void initializeClientAPIRemoteSomeIPStubAdapter() {
    CommonAPI::SomeIP::AddressTranslator::get()->insert(
        "local:com.ivis.CDL.ClientAPIRemote:v1_0:com.ivis.CDL.ClientAPIRemote.SomeIp",
         0x3e8, 0x44c, 1, 0);
    CommonAPI::SomeIP::Factory::get()->registerStubAdapterCreateMethod(
        ClientAPIRemote::getInterface(),
        &createClientAPIRemoteSomeIPStubAdapter);
}

INITIALIZER(registerClientAPIRemoteSomeIPStubAdapter) {
    CommonAPI::SomeIP::Factory::get()->registerInterface(initializeClientAPIRemoteSomeIPStubAdapter);
}
} // namespace CDL
} // namespace ivis
} // namespace com
} // namespace v1
