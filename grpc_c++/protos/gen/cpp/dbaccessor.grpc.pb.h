// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: dbaccessor.proto
#ifndef GRPC_dbaccessor_2eproto__INCLUDED
#define GRPC_dbaccessor_2eproto__INCLUDED

#include "dbaccessor.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace dbaccessor {

class dbaccessor final {
 public:
  static constexpr char const* service_full_name() {
    return "dbaccessor.dbaccessor";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status insertMessage(::grpc::ClientContext* context, const ::dbaccessor::Message& request, ::dbaccessor::SimpleResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::dbaccessor::SimpleResponse>> AsyncinsertMessage(::grpc::ClientContext* context, const ::dbaccessor::Message& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::dbaccessor::SimpleResponse>>(AsyncinsertMessageRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::dbaccessor::SimpleResponse>> PrepareAsyncinsertMessage(::grpc::ClientContext* context, const ::dbaccessor::Message& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::dbaccessor::SimpleResponse>>(PrepareAsyncinsertMessageRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void insertMessage(::grpc::ClientContext* context, const ::dbaccessor::Message* request, ::dbaccessor::SimpleResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void insertMessage(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::dbaccessor::SimpleResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void insertMessage(::grpc::ClientContext* context, const ::dbaccessor::Message* request, ::dbaccessor::SimpleResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void insertMessage(::grpc::ClientContext* context, const ::dbaccessor::Message* request, ::dbaccessor::SimpleResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void insertMessage(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::dbaccessor::SimpleResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void insertMessage(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::dbaccessor::SimpleResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::dbaccessor::SimpleResponse>* AsyncinsertMessageRaw(::grpc::ClientContext* context, const ::dbaccessor::Message& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::dbaccessor::SimpleResponse>* PrepareAsyncinsertMessageRaw(::grpc::ClientContext* context, const ::dbaccessor::Message& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status insertMessage(::grpc::ClientContext* context, const ::dbaccessor::Message& request, ::dbaccessor::SimpleResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::dbaccessor::SimpleResponse>> AsyncinsertMessage(::grpc::ClientContext* context, const ::dbaccessor::Message& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::dbaccessor::SimpleResponse>>(AsyncinsertMessageRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::dbaccessor::SimpleResponse>> PrepareAsyncinsertMessage(::grpc::ClientContext* context, const ::dbaccessor::Message& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::dbaccessor::SimpleResponse>>(PrepareAsyncinsertMessageRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void insertMessage(::grpc::ClientContext* context, const ::dbaccessor::Message* request, ::dbaccessor::SimpleResponse* response, std::function<void(::grpc::Status)>) override;
      void insertMessage(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::dbaccessor::SimpleResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void insertMessage(::grpc::ClientContext* context, const ::dbaccessor::Message* request, ::dbaccessor::SimpleResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void insertMessage(::grpc::ClientContext* context, const ::dbaccessor::Message* request, ::dbaccessor::SimpleResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void insertMessage(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::dbaccessor::SimpleResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void insertMessage(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::dbaccessor::SimpleResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::dbaccessor::SimpleResponse>* AsyncinsertMessageRaw(::grpc::ClientContext* context, const ::dbaccessor::Message& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::dbaccessor::SimpleResponse>* PrepareAsyncinsertMessageRaw(::grpc::ClientContext* context, const ::dbaccessor::Message& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_insertMessage_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status insertMessage(::grpc::ServerContext* context, const ::dbaccessor::Message* request, ::dbaccessor::SimpleResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_insertMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_insertMessage() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_insertMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status insertMessage(::grpc::ServerContext* /*context*/, const ::dbaccessor::Message* /*request*/, ::dbaccessor::SimpleResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestinsertMessage(::grpc::ServerContext* context, ::dbaccessor::Message* request, ::grpc::ServerAsyncResponseWriter< ::dbaccessor::SimpleResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_insertMessage<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_insertMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_insertMessage() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::dbaccessor::Message, ::dbaccessor::SimpleResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::dbaccessor::Message* request, ::dbaccessor::SimpleResponse* response) { return this->insertMessage(context, request, response); }));}
    void SetMessageAllocatorFor_insertMessage(
        ::grpc::experimental::MessageAllocator< ::dbaccessor::Message, ::dbaccessor::SimpleResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::dbaccessor::Message, ::dbaccessor::SimpleResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_insertMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status insertMessage(::grpc::ServerContext* /*context*/, const ::dbaccessor::Message* /*request*/, ::dbaccessor::SimpleResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* insertMessage(
      ::grpc::CallbackServerContext* /*context*/, const ::dbaccessor::Message* /*request*/, ::dbaccessor::SimpleResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* insertMessage(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::dbaccessor::Message* /*request*/, ::dbaccessor::SimpleResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_insertMessage<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_insertMessage<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_insertMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_insertMessage() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_insertMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status insertMessage(::grpc::ServerContext* /*context*/, const ::dbaccessor::Message* /*request*/, ::dbaccessor::SimpleResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_insertMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_insertMessage() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_insertMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status insertMessage(::grpc::ServerContext* /*context*/, const ::dbaccessor::Message* /*request*/, ::dbaccessor::SimpleResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestinsertMessage(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_insertMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_insertMessage() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->insertMessage(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_insertMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status insertMessage(::grpc::ServerContext* /*context*/, const ::dbaccessor::Message* /*request*/, ::dbaccessor::SimpleResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* insertMessage(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* insertMessage(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_insertMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_insertMessage() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::dbaccessor::Message, ::dbaccessor::SimpleResponse>(std::bind(&WithStreamedUnaryMethod_insertMessage<BaseClass>::StreamedinsertMessage, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_insertMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status insertMessage(::grpc::ServerContext* /*context*/, const ::dbaccessor::Message* /*request*/, ::dbaccessor::SimpleResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedinsertMessage(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::dbaccessor::Message,::dbaccessor::SimpleResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_insertMessage<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_insertMessage<Service > StreamedService;
};

}  // namespace dbaccessor


#endif  // GRPC_dbaccessor_2eproto__INCLUDED