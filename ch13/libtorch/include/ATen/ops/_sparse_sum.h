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



#include <ATen/ops/_sparse_sum_ops.h>

namespace at {


// aten::_sparse_sum(Tensor self) -> Tensor
TORCH_API inline at::Tensor _sparse_sum(const at::Tensor & self) {
    return at::_ops::_sparse_sum::call(self);
}

// aten::_sparse_sum.dtype(Tensor self, *, ScalarType dtype) -> Tensor
TORCH_API inline at::Tensor _sparse_sum(const at::Tensor & self, at::ScalarType dtype) {
    return at::_ops::_sparse_sum_dtype::call(self, dtype);
}

// aten::_sparse_sum.dim(Tensor self, int[1] dim) -> Tensor
TORCH_API inline at::Tensor _sparse_sum(const at::Tensor & self, at::IntArrayRef dim) {
    return at::_ops::_sparse_sum_dim::call(self, dim);
}

// aten::_sparse_sum.dim_dtype(Tensor self, int[1] dim, *, ScalarType dtype) -> Tensor
TORCH_API inline at::Tensor _sparse_sum(const at::Tensor & self, at::IntArrayRef dim, at::ScalarType dtype) {
    return at::_ops::_sparse_sum_dim_dtype::call(self, dim, dtype);
}

}
