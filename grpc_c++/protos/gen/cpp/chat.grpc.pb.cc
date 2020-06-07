// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: chat.proto

#include "chat.pb.h"
#include "chat.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace cpp_chat {

static const char* chat_method_names[] = {
  "/cpp_chat.chat/login",
  "/cpp_chat.chat/reLogin",
  "/cpp_chat.chat/createChatRoom",
  "/cpp_chat.chat/chatRoomList",
  "/cpp_chat.chat/enterChatRoom",
  "/cpp_chat.chat/chatting",
};

std::unique_ptr< chat::Stub> chat::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< chat::Stub> stub(new chat::Stub(channel));
  return stub;
}

chat::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_login_(chat_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_reLogin_(chat_method_names[1], ::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  , rpcmethod_createChatRoom_(chat_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_chatRoomList_(chat_method_names[3], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_enterChatRoom_(chat_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_chatting_(chat_method_names[5], ::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  {}

::grpc::Status chat::Stub::login(::grpc::ClientContext* context, const ::cpp_chat::User& request, ::cpp_chat::SimpleResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_login_, context, request, response);
}

void chat::Stub::experimental_async::login(::grpc::ClientContext* context, const ::cpp_chat::User* request, ::cpp_chat::SimpleResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_login_, context, request, response, std::move(f));
}

void chat::Stub::experimental_async::login(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::cpp_chat::SimpleResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_login_, context, request, response, std::move(f));
}

void chat::Stub::experimental_async::login(::grpc::ClientContext* context, const ::cpp_chat::User* request, ::cpp_chat::SimpleResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_login_, context, request, response, reactor);
}

void chat::Stub::experimental_async::login(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::cpp_chat::SimpleResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_login_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::cpp_chat::SimpleResponse>* chat::Stub::AsyncloginRaw(::grpc::ClientContext* context, const ::cpp_chat::User& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::cpp_chat::SimpleResponse>::Create(channel_.get(), cq, rpcmethod_login_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::cpp_chat::SimpleResponse>* chat::Stub::PrepareAsyncloginRaw(::grpc::ClientContext* context, const ::cpp_chat::User& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::cpp_chat::SimpleResponse>::Create(channel_.get(), cq, rpcmethod_login_, context, request, false);
}

::grpc::ClientWriter< ::cpp_chat::User>* chat::Stub::reLoginRaw(::grpc::ClientContext* context, ::cpp_chat::SimpleResponse* response) {
  return ::grpc_impl::internal::ClientWriterFactory< ::cpp_chat::User>::Create(channel_.get(), rpcmethod_reLogin_, context, response);
}

void chat::Stub::experimental_async::reLogin(::grpc::ClientContext* context, ::cpp_chat::SimpleResponse* response, ::grpc::experimental::ClientWriteReactor< ::cpp_chat::User>* reactor) {
  ::grpc_impl::internal::ClientCallbackWriterFactory< ::cpp_chat::User>::Create(stub_->channel_.get(), stub_->rpcmethod_reLogin_, context, response, reactor);
}

::grpc::ClientAsyncWriter< ::cpp_chat::User>* chat::Stub::AsyncreLoginRaw(::grpc::ClientContext* context, ::cpp_chat::SimpleResponse* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc_impl::internal::ClientAsyncWriterFactory< ::cpp_chat::User>::Create(channel_.get(), cq, rpcmethod_reLogin_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::cpp_chat::User>* chat::Stub::PrepareAsyncreLoginRaw(::grpc::ClientContext* context, ::cpp_chat::SimpleResponse* response, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncWriterFactory< ::cpp_chat::User>::Create(channel_.get(), cq, rpcmethod_reLogin_, context, response, false, nullptr);
}

::grpc::Status chat::Stub::createChatRoom(::grpc::ClientContext* context, const ::cpp_chat::ChatRoom& request, ::cpp_chat::SimpleResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_createChatRoom_, context, request, response);
}

void chat::Stub::experimental_async::createChatRoom(::grpc::ClientContext* context, const ::cpp_chat::ChatRoom* request, ::cpp_chat::SimpleResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_createChatRoom_, context, request, response, std::move(f));
}

void chat::Stub::experimental_async::createChatRoom(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::cpp_chat::SimpleResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_createChatRoom_, context, request, response, std::move(f));
}

void chat::Stub::experimental_async::createChatRoom(::grpc::ClientContext* context, const ::cpp_chat::ChatRoom* request, ::cpp_chat::SimpleResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_createChatRoom_, context, request, response, reactor);
}

void chat::Stub::experimental_async::createChatRoom(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::cpp_chat::SimpleResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_createChatRoom_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::cpp_chat::SimpleResponse>* chat::Stub::AsynccreateChatRoomRaw(::grpc::ClientContext* context, const ::cpp_chat::ChatRoom& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::cpp_chat::SimpleResponse>::Create(channel_.get(), cq, rpcmethod_createChatRoom_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::cpp_chat::SimpleResponse>* chat::Stub::PrepareAsynccreateChatRoomRaw(::grpc::ClientContext* context, const ::cpp_chat::ChatRoom& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::cpp_chat::SimpleResponse>::Create(channel_.get(), cq, rpcmethod_createChatRoom_, context, request, false);
}

::grpc::ClientReader< ::cpp_chat::ChatRoom>* chat::Stub::chatRoomListRaw(::grpc::ClientContext* context, const ::cpp_chat::Empty& request) {
  return ::grpc_impl::internal::ClientReaderFactory< ::cpp_chat::ChatRoom>::Create(channel_.get(), rpcmethod_chatRoomList_, context, request);
}

void chat::Stub::experimental_async::chatRoomList(::grpc::ClientContext* context, ::cpp_chat::Empty* request, ::grpc::experimental::ClientReadReactor< ::cpp_chat::ChatRoom>* reactor) {
  ::grpc_impl::internal::ClientCallbackReaderFactory< ::cpp_chat::ChatRoom>::Create(stub_->channel_.get(), stub_->rpcmethod_chatRoomList_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::cpp_chat::ChatRoom>* chat::Stub::AsyncchatRoomListRaw(::grpc::ClientContext* context, const ::cpp_chat::Empty& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc_impl::internal::ClientAsyncReaderFactory< ::cpp_chat::ChatRoom>::Create(channel_.get(), cq, rpcmethod_chatRoomList_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::cpp_chat::ChatRoom>* chat::Stub::PrepareAsyncchatRoomListRaw(::grpc::ClientContext* context, const ::cpp_chat::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncReaderFactory< ::cpp_chat::ChatRoom>::Create(channel_.get(), cq, rpcmethod_chatRoomList_, context, request, false, nullptr);
}

::grpc::Status chat::Stub::enterChatRoom(::grpc::ClientContext* context, const ::cpp_chat::ChatRoom& request, ::cpp_chat::SimpleResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_enterChatRoom_, context, request, response);
}

void chat::Stub::experimental_async::enterChatRoom(::grpc::ClientContext* context, const ::cpp_chat::ChatRoom* request, ::cpp_chat::SimpleResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_enterChatRoom_, context, request, response, std::move(f));
}

void chat::Stub::experimental_async::enterChatRoom(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::cpp_chat::SimpleResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_enterChatRoom_, context, request, response, std::move(f));
}

void chat::Stub::experimental_async::enterChatRoom(::grpc::ClientContext* context, const ::cpp_chat::ChatRoom* request, ::cpp_chat::SimpleResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_enterChatRoom_, context, request, response, reactor);
}

void chat::Stub::experimental_async::enterChatRoom(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::cpp_chat::SimpleResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_enterChatRoom_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::cpp_chat::SimpleResponse>* chat::Stub::AsyncenterChatRoomRaw(::grpc::ClientContext* context, const ::cpp_chat::ChatRoom& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::cpp_chat::SimpleResponse>::Create(channel_.get(), cq, rpcmethod_enterChatRoom_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::cpp_chat::SimpleResponse>* chat::Stub::PrepareAsyncenterChatRoomRaw(::grpc::ClientContext* context, const ::cpp_chat::ChatRoom& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::cpp_chat::SimpleResponse>::Create(channel_.get(), cq, rpcmethod_enterChatRoom_, context, request, false);
}

::grpc::ClientReaderWriter< ::cpp_chat::Message, ::cpp_chat::Message>* chat::Stub::chattingRaw(::grpc::ClientContext* context) {
  return ::grpc_impl::internal::ClientReaderWriterFactory< ::cpp_chat::Message, ::cpp_chat::Message>::Create(channel_.get(), rpcmethod_chatting_, context);
}

void chat::Stub::experimental_async::chatting(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::cpp_chat::Message,::cpp_chat::Message>* reactor) {
  ::grpc_impl::internal::ClientCallbackReaderWriterFactory< ::cpp_chat::Message,::cpp_chat::Message>::Create(stub_->channel_.get(), stub_->rpcmethod_chatting_, context, reactor);
}

::grpc::ClientAsyncReaderWriter< ::cpp_chat::Message, ::cpp_chat::Message>* chat::Stub::AsyncchattingRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc_impl::internal::ClientAsyncReaderWriterFactory< ::cpp_chat::Message, ::cpp_chat::Message>::Create(channel_.get(), cq, rpcmethod_chatting_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::cpp_chat::Message, ::cpp_chat::Message>* chat::Stub::PrepareAsyncchattingRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncReaderWriterFactory< ::cpp_chat::Message, ::cpp_chat::Message>::Create(channel_.get(), cq, rpcmethod_chatting_, context, false, nullptr);
}

chat::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      chat_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< chat::Service, ::cpp_chat::User, ::cpp_chat::SimpleResponse>(
          std::mem_fn(&chat::Service::login), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      chat_method_names[1],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< chat::Service, ::cpp_chat::User, ::cpp_chat::SimpleResponse>(
          std::mem_fn(&chat::Service::reLogin), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      chat_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< chat::Service, ::cpp_chat::ChatRoom, ::cpp_chat::SimpleResponse>(
          std::mem_fn(&chat::Service::createChatRoom), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      chat_method_names[3],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< chat::Service, ::cpp_chat::Empty, ::cpp_chat::ChatRoom>(
          std::mem_fn(&chat::Service::chatRoomList), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      chat_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< chat::Service, ::cpp_chat::ChatRoom, ::cpp_chat::SimpleResponse>(
          std::mem_fn(&chat::Service::enterChatRoom), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      chat_method_names[5],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< chat::Service, ::cpp_chat::Message, ::cpp_chat::Message>(
          std::mem_fn(&chat::Service::chatting), this)));
}

chat::Service::~Service() {
}

::grpc::Status chat::Service::login(::grpc::ServerContext* context, const ::cpp_chat::User* request, ::cpp_chat::SimpleResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status chat::Service::reLogin(::grpc::ServerContext* context, ::grpc::ServerReader< ::cpp_chat::User>* reader, ::cpp_chat::SimpleResponse* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status chat::Service::createChatRoom(::grpc::ServerContext* context, const ::cpp_chat::ChatRoom* request, ::cpp_chat::SimpleResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status chat::Service::chatRoomList(::grpc::ServerContext* context, const ::cpp_chat::Empty* request, ::grpc::ServerWriter< ::cpp_chat::ChatRoom>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status chat::Service::enterChatRoom(::grpc::ServerContext* context, const ::cpp_chat::ChatRoom* request, ::cpp_chat::SimpleResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status chat::Service::chatting(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::cpp_chat::Message, ::cpp_chat::Message>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace cpp_chat
