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



#include <ATen/ops/replication_pad3d_backward_ops.h>

namespace at {


// aten::replication_pad3d_backward.grad_input(Tensor grad_output, Tensor self, int[6] padding, *, Tensor(a!) grad_input) -> Tensor(a!)
TORCH_API inline at::Tensor & replication_pad3d_backward_out(at::Tensor & grad_input, const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding) {
    return at::_ops::replication_pad3d_backward_grad_input::call(grad_output, self, padding, grad_input);
}

// aten::replication_pad3d_backward.grad_input(Tensor grad_output, Tensor self, int[6] padding, *, Tensor(a!) grad_input) -> Tensor(a!)
TORCH_API inline at::Tensor & replication_pad3d_backward_outf(const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding, at::Tensor & grad_input) {
    return at::_ops::replication_pad3d_backward_grad_input::call(grad_output, self, padding, grad_input);
}

// aten::replication_pad3d_backward(Tensor grad_output, Tensor self, int[6] padding) -> Tensor
TORCH_API inline at::Tensor replication_pad3d_backward(const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef padding) {
    return at::_ops::replication_pad3d_backward::call(grad_output, self, padding);
}

}
