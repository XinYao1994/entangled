/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef CCLIENT_SERIALIZATION_JSON_GET_NODE_INFO_H
#define CCLIENT_SERIALIZATION_JSON_GET_NODE_INFO_H

#ifdef __cplusplus
extern "C" {
#endif

#include "common/errors.h"

#include "cclient/response/get_node_info.h"
#include "cclient/serialization/serializer.h"

retcode_t json_get_node_info_serialize_request(char_buffer_t* out);
retcode_t json_get_node_info_serialize_response(get_node_info_res_t const* const obj, char_buffer_t* out);
retcode_t json_get_node_info_deserialize_response(char const* const obj, get_node_info_res_t* const res);

#ifdef __cplusplus
}
#endif

#endif  // CCLIENT_SERIALIZATION_JSON_GET_NODE_INFO_H
