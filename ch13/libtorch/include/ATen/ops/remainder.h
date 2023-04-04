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



#include <ATen/ops/remainder_ops.h>

namespace at {


// aten::remainder.Scalar_out(Tensor self, Scalar other, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & remainder_out(at::Tensor & out, const at::Tensor & self, const at::Scalar & other) {
    return at::_ops::remainder_Scalar_out::call(self, other, out);
}

// aten::remainder.Scalar_out(Tensor self, Scalar other, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & remainder_outf(const at::Tensor & self, const at::Scalar & other, at::Tensor & out) {
    return at::_ops::remainder_Scalar_out::call(self, other, out);
}

// aten::remainder.Scalar(Tensor self, Scalar other) -> Tensor
TORCH_API inline at::Tensor remainder(const at::Tensor & self, const at::Scalar & other) {
    return at::_ops::remainder_Scalar::call(self, other);
}

// aten::remainder.Tensor_out(Tensor self, Tensor other, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & remainder_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & other) {
    return at::_ops::remainder_Tensor_out::call(self, other, out);
}

// aten::remainder.Tensor_out(Tensor self, Tensor other, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & remainder_outf(const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
    return at::_ops::remainder_Tensor_out::call(self, other, out);
}

// aten::remainder.Tensor(Tensor self, Tensor other) -> Tensor
TORCH_API inline at::Tensor remainder(const at::Tensor & self, const at::Tensor & other) {
    return at::_ops::remainder_Tensor::call(self, other);
}

// aten::remainder.Scalar_Tensor(Scalar self, Tensor other) -> Tensor
TORCH_API inline at::Tensor remainder(const at::Scalar & self, const at::Tensor & other) {
    return at::_ops::remainder_Scalar_Tensor::call(self, other);
}

}