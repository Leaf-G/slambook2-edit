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



#include <ATen/ops/fill_ops.h>

namespace at {


// aten::fill_.Scalar(Tensor(a!) self, Scalar value) -> Tensor(a!)
TORCH_API inline at::Tensor & fill_(at::Tensor & self, const at::Scalar & value) {
    return at::_ops::fill__Scalar::call(self, value);
}

// aten::fill_.Tensor(Tensor(a!) self, Tensor value) -> Tensor(a!)
TORCH_API inline at::Tensor & fill_(at::Tensor & self, const at::Tensor & value) {
    return at::_ops::fill__Tensor::call(self, value);
}

}