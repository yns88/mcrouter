/*
 *  Copyright (c) 2017-present, Facebook, Inc.
 *
 *  This source code is licensed under the MIT license found in the LICENSE
 *  file in the root directory of this source tree.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 *  @generated
 */
#pragma once

#include <memory>
#include <string>
#include <utility>

#include <folly/Optional.h>
#include <folly/io/IOBuf.h>
#include <mcrouter/lib/carbon/CarbonProtocolReader.h>
#include <mcrouter/lib/carbon/CommonSerializationTraits.h>
#include <mcrouter/lib/carbon/Keys.h>
#include <mcrouter/lib/carbon/ReplyCommon.h>
#include <mcrouter/lib/carbon/RequestCommon.h>
#include <mcrouter/lib/carbon/RequestReplyUtil.h>
#include <mcrouter/lib/carbon/Result.h>
#include <mcrouter/lib/carbon/TypeList.h>
#include <mcrouter/lib/carbon/Variant.h>

#include "mcrouter/lib/carbon/test/a/b/gen/BMessages.h"
#include "mcrouter/lib/carbon/test/b/gen/BMessages.h"

namespace carbon {
namespace test {

class AnotherReply;

class AnotherRequest : public carbon::RequestCommon {
 public:
  using reply_type = AnotherReply;
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = true;
  static constexpr bool hasValue = false;
  static constexpr size_t typeId = 65;
  static constexpr const char* name = "AnotherRequest";

  AnotherRequest() = default;
  AnotherRequest(const AnotherRequest&) = default;
  AnotherRequest& operator=(const AnotherRequest&) = default;
  AnotherRequest(AnotherRequest&&) = default;
  AnotherRequest& operator=(AnotherRequest&&) = default;
  explicit AnotherRequest(folly::StringPiece sp) : key_(sp) {}
  explicit AnotherRequest(folly::IOBuf&& carbonKey)
      : key_(std::move(carbonKey)) {}

  const carbon::Keys<folly::IOBuf>& key() const {
    return key_;
  }
  carbon::Keys<folly::IOBuf>& key() {
    markBufferAsDirty();
    return key_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  template <class Writer>
  void serialize(Writer&& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  carbon::Keys<folly::IOBuf> key_;
};

class AnotherReply : public carbon::ReplyCommon {
 public:
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = false;
  static constexpr bool hasValue = false;
  static constexpr size_t typeId = 66;

  AnotherReply() = default;
  AnotherReply(const AnotherReply&) = default;
  AnotherReply& operator=(const AnotherReply&) = default;
  AnotherReply(AnotherReply&&) = default;
  AnotherReply& operator=(AnotherReply&&) = default;
  explicit AnotherReply(carbon::Result carbonResult) : result_(carbonResult) {}

  carbon::Result result() const {
    return result_;
  }
  carbon::Result& result() {
    return result_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  template <class Writer>
  void serialize(Writer&& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  carbon::Result result_{mc_res_unknown};
};
} // namespace test
} // namespace carbon

#include "AMessages-inl.h"
