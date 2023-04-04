#pragma once

// @generated by tools/codegen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/_pack_padded_sequence_ops.h>

namespace at {


// aten::_pack_padded_sequence(Tensor input, Tensor lengths, bool batch_first) -> (Tensor, Tensor)
TORCH_API inline ::std::tuple<at::Tensor,at::Tensor> _pack_padded_sequence(const at::Tensor & input, const at::Tensor & lengths, bool batch_first) {
    return at::_ops::_pack_padded_sequence::call(input, lengths, batch_first);
}

}
