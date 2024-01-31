//===- CombOps.h - Declare Comb dialect operations --------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file declares the operation classes for the Comb dialect.
//
//===----------------------------------------------------------------------===//

#ifndef HEIR_INCLUDE_DIALECT_COMB_COMBOPS_H
#define HEIR_INCLUDE_DIALECT_COMB_COMBOPS_H

#include "include/Dialect/Comb/IR/CombDialect.h"
#include "include/Dialect/HEIRInterfaces.h"
#include "mlir/include/mlir/Bytecode/BytecodeOpInterface.h"  // from @llvm-project
#include "mlir/include/mlir/IR/BuiltinOps.h"        // from @llvm-project
#include "mlir/include/mlir/IR/OpImplementation.h"  // from @llvm-project
#include "mlir/include/mlir/Interfaces/FunctionInterfaces.h"  // from @llvm-project
#include "mlir/include/mlir/Interfaces/InferTypeOpInterface.h"  // from @llvm-project
#include "mlir/include/mlir/Interfaces/SideEffectInterfaces.h"  // from @llvm-project
#include "mlir/include/mlir/Support/LLVM.h"  // from @llvm-project

namespace llvm {
struct KnownBits;
}

namespace mlir {
class PatternRewriter;
}

#define GET_OP_CLASSES
#include "include/Dialect/Comb/IR/Comb.h.inc"

#endif  // HEIR_INCLUDE_DIALECT_COMB_COMBOPS_H
