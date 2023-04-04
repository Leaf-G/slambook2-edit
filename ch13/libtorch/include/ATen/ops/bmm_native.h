#pragma once

// @generated by tools/codegen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>
#include <ATen/ops/bmm_meta.h>

namespace at {
namespace native {

struct TORCH_API structured_bmm_out_cpu : public at::meta::structured_bmm {
void impl(const at::Tensor & self, const at::Tensor & mat2, const at::Tensor & out);
};
struct TORCH_API structured_bmm_out_cuda : public at::meta::structured_bmm {
void impl(const at::Tensor & self, const at::Tensor & mat2, const at::Tensor & out);
};
TORCH_API at::Tensor bmm_sparse_cpu(const at::Tensor & self, const at::Tensor & mat2);
TORCH_API at::Tensor & bmm_out_sparse_cpu(const at::Tensor & self, const at::Tensor & mat2, at::Tensor & out);
TORCH_API at::Tensor bmm_sparse_cuda(const at::Tensor & self, const at::Tensor & mat2);
TORCH_API at::Tensor & bmm_out_sparse_cuda(const at::Tensor & self, const at::Tensor & mat2, at::Tensor & out);
TORCH_API at::Tensor & bmm_out_sparse_csr_cuda(const at::Tensor & self, const at::Tensor & mat2, at::Tensor & out);

} // namespace native
} // namespace at