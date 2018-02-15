// ----------------------------------------------------------------------------
// Copyright 2018 Nervana Systems Inc.
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// ----------------------------------------------------------------------------

#include <mkldnn.hpp>

#include "mkldnn_invoke.hpp"
#include "ngraph/runtime/cpu/mkldnn_utils.hpp"

mkldnn::engine ngraph::runtime::cpu::mkldnn_utils::global_cpu_engine(mkldnn::engine::cpu, 0);

extern "C" void
    ngraph::runtime::cpu::mkldnn_utils::mkldnn_invoke_primitive(CPURuntimeContext* ctx,
                                                                size_t primitive_index)
{
}
