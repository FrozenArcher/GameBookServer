// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto_id.proto

#include "proto_id.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace Proto {
}  // namespace Proto
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_proto_5fid_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_proto_5fid_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_5fid_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_5fid_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_proto_5fid_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016proto_id.proto\022\005Proto*\325\010\n\005MsgId\022\010\n\004Non"
  "e\020\000\022\025\n\021MI_NetworkConnect\020\001\022\027\n\023MI_Network"
  "Connected\020\002\022\024\n\020MI_NetworkListen\020\003\022\027\n\023MI_"
  "NetworkListenKey\020\004\022\030\n\024MI_NetworkDisconne"
  "ct\020\n\022\032\n\026MI_NetworkDisconnectEx\020\013\022\037\n\033MI_N"
  "etworkRequestDisconnect\020\024\022\026\n\022MI_RemoveCo"
  "mponent\0202\022\026\n\022MI_CreateComponent\0203\022\013\n\007MI_"
  "Ping\020e\022\022\n\016MI_AppRegister\020f\022\022\n\016MI_AppInfo"
  "Sync\020g\022\026\n\022MI_AppInfoListSync\020h\022\025\n\020C2L_Ac"
  "countCheck\020\351\007\022\027\n\022C2L_AccountCheckRs\020\352\007\022!"
  "\n\034MI_AccountQueryOnlineToRedis\020\353\007\022#\n\036MI_"
  "AccountQueryOnlineToRedisRs\020\354\007\022\022\n\rL2C_Ga"
  "meToken\020\361\007\022\031\n\024L2DB_QueryPlayerList\020\362\007\022\033\n"
  "\026L2DB_QueryPlayerListRs\020\363\007\022\025\n\020C2G_LoginB"
  "yToken\020\370\007\022\027\n\022C2G_LoginByTokenRs\020\371\007\022\025\n\020G2"
  "DB_QueryPlayer\020\315\010\022\027\n\022G2DB_QueryPlayerRs\020"
  "\316\010\022\023\n\016L2C_PlayerList\020\317\010\022\025\n\020C2L_CreatePla"
  "yer\020\321\010\022\027\n\022C2L_CreatePlayerRs\020\322\010\022\026\n\021L2DB_"
  "CreatePlayer\020\323\010\022\030\n\023L2DB_CreatePlayerRs\020\324"
  "\010\022\025\n\020C2L_SelectPlayer\020\325\010\022\027\n\022C2L_SelectPl"
  "ayerRs\020\326\010\022\024\n\017G2DB_SavePlayer\020\210\016\022\036\n\031MI_Wo"
  "rldProxySyncToGather\020\272\027\022\026\n\021MI_RobotSyncS"
  "tate\020\211\'\022\023\n\016MI_RobotCreate\020\212\'\022\021\n\014MI_HttpB"
  "egin\020\220N\022\031\n\024MI_HttpInnerResponse\020\221N\022\026\n\021MI"
  "_HttpRequestBad\020\222N\022\030\n\023MI_HttpRequestLogi"
  "n\020\223N\022\017\n\nMI_HttpEnd\020\203R\022\030\n\023MI_HttpOuterReq"
  "uest\020\204R\022\031\n\024MI_HttpOuterResponse\020\205R\022\022\n\014MI"
  "_CmdThread\020\241\234\001\022\017\n\tMI_CmdApp\020\242\234\001\022\026\n\020MI_Cm"
  "dWorldProxy\020\243\234\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_5fid_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_5fid_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_5fid_2eproto_once;
static bool descriptor_table_proto_5fid_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_5fid_2eproto = {
  &descriptor_table_proto_5fid_2eproto_initialized, descriptor_table_protodef_proto_5fid_2eproto, "proto_id.proto", 1143,
  &descriptor_table_proto_5fid_2eproto_once, descriptor_table_proto_5fid_2eproto_sccs, descriptor_table_proto_5fid_2eproto_deps, 0, 0,
  schemas, file_default_instances, TableStruct_proto_5fid_2eproto::offsets,
  file_level_metadata_proto_5fid_2eproto, 0, file_level_enum_descriptors_proto_5fid_2eproto, file_level_service_descriptors_proto_5fid_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_5fid_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_5fid_2eproto), true);
namespace Proto {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* MsgId_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_proto_5fid_2eproto);
  return file_level_enum_descriptors_proto_5fid_2eproto[0];
}
bool MsgId_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 10:
    case 11:
    case 20:
    case 50:
    case 51:
    case 101:
    case 102:
    case 103:
    case 104:
    case 1001:
    case 1002:
    case 1003:
    case 1004:
    case 1009:
    case 1010:
    case 1011:
    case 1016:
    case 1017:
    case 1101:
    case 1102:
    case 1103:
    case 1105:
    case 1106:
    case 1107:
    case 1108:
    case 1109:
    case 1110:
    case 1800:
    case 3002:
    case 5001:
    case 5002:
    case 10000:
    case 10001:
    case 10002:
    case 10003:
    case 10499:
    case 10500:
    case 10501:
    case 20001:
    case 20002:
    case 20003:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Proto
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
