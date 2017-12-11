// ----------------------------------------------------------------------------
// Copyright 2017 Nervana Systems Inc.
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

#pragma once

#include "ngraph/ops/op.hpp"

namespace ngraph
{
    namespace op
    {
        /// \brief Elementwise logical negation operation.
        ///
        /// ## Inputs
        ///
        /// |       | Type                                          | Description                                       |
        /// | ----- | --------------------------------------------- | ------------------------------------------------- |
        /// | `arg` | \f$\texttt{bool}[d_1,\dots,d_n]~(n \geq 0)\f$ | A tensor of any shape, with boolean element type. |
        ///
        /// ## Output
        ///
        /// | Type                               | Description                                                                                                    |
        /// | ---------------------------------- | -------------------------------------------------------------------------------------------------------------- |
        /// | \f$\texttt{bool}[d_1,\dots,d_n]\f$ | The tensor \f$T\f$, where \f$T[i_1,\dots,i_n] = 1\text{ if }\texttt{arg}[i_1,\dots,i_n] = 0\text{, else } 0\f$ |
        class Not : public UnaryElementwise
        {
        public:
            /// \brief Constructs a logical negation operation.
            ///
            /// \param arg Node that produces the input tensor.
            Not(const std::shared_ptr<Node>& arg);

            virtual std::shared_ptr<Node> copy_with_new_args(
                const std::vector<std::shared_ptr<Node>>& new_args) const override
            {
                if (new_args.size() != 1)
                    throw ngraph_error("Incorrect number of new arguments");
                return std::make_shared<Not>(new_args.at(0));
            }
        };
    }
}