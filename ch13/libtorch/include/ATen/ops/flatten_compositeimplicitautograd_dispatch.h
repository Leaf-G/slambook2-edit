#pragma once
// @generated by tools/codegen/gen.py from DispatchKeyFunction.h

// NB: The implementing C++ file is RegisterDispatchKey.cpp

// The only #includes we need are for custom classes that have defaults in the C++ API
#include <c10/core/MemoryFormat.h>
#include <c10/core/Scalar.h>
#include <ATen/core/Reduction.h>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
namespace c10 {

template<typename T>
class optional;
template<typename T>
class List;
class Stream;
class Scalar;
struct Storage;
struct TensorOptions;

}

namespace at {

class Tensor;
struct Dimname;
struct Generator;
using TensorList = c10::ArrayRef<Tensor>;
using DimnameList = c10::ArrayRef<Dimname>;
using c10::Stream;
using c10::Storage;
using c10::QScheme;
using c10::Scalar;
using c10::TensorOptions;

namespace compositeimplicitautograd {

TORCH_API at::Tensor flatten(const at::Tensor & self, int64_t start_dim=0, int64_t end_dim=-1);
TORCH_API at::Tensor flatten(const at::Tensor & self, int64_t start_dim, int64_t end_dim, at::Dimname out_dim);
TORCH_API at::Tensor flatten(const at::Tensor & self, at::Dimname start_dim, at::Dimname end_dim, at::Dimname out_dim);
TORCH_API at::Tensor flatten(const at::Tensor & self, at::DimnameList dims, at::Dimname out_dim);

} // namespace compositeimplicitautograd
} // namespace at