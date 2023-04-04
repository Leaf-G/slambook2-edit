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



#include <ATen/ops/soft_margin_loss_ops.h>

namespace at {


// aten::soft_margin_loss.out(Tensor self, Tensor target, int reduction=Mean, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & soft_margin_loss_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & target, int64_t reduction=at::Reduction::Mean) {
    return at::_ops::soft_margin_loss_out::call(self, target, reduction, out);
}

// aten::soft_margin_loss.out(Tensor self, Tensor target, int reduction=Mean, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & soft_margin_loss_outf(const at::Tensor & self, const at::Tensor & target, int64_t reduction, at::Tensor & out) {
    return at::_ops::soft_margin_loss_out::call(self, target, reduction, out);
}

// aten::soft_margin_loss(Tensor self, Tensor target, int reduction=Mean) -> Tensor
TORCH_API inline at::Tensor soft_margin_loss(const at::Tensor & self, const at::Tensor & target, int64_t reduction=at::Reduction::Mean) {
    return at::_ops::soft_margin_loss::call(self, target, reduction);
}

}
