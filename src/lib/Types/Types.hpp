/*
    ANNT - Artificial Neural Networks C++ library

    Copyright (C) 2018, cvsandbox, cvsandbox@gmail.com

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/

#pragma once
#ifndef ANNT_TYPES_HPP
#define ANNT_TYPES_HPP

#include <limits>
#include <vector>

#include "../Config.hpp"
#include "XAlignedAllocator.hpp"

namespace ANNT {

// Numeric type used for neural network's data/callculations
// (weights, biases, errors, gradients, parameters, etc.)
#ifdef ANNT_USE_DOUBLE
typedef double float_t;
#else
typedef float  float_t;
#endif

// Vector type to use for network's input/output/error/gradient flow
typedef std::vector<float_t> vector_t;
typedef std::vector<float_t, XAlignedAllocator<float_t, 32>> vector_t;

} // namespace ANNT

#endif // ANNT_TYPES_HPP
