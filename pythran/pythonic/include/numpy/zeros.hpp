#ifndef PYTHONIC_INCLUDE_NUMPY_ZEROS_HPP
#define PYTHONIC_INCLUDE_NUMPY_ZEROS_HPP

#include "pythonic/include/utils/proxy.hpp"
#include "pythonic/include/types/numpy_type.hpp"
#include "pythonic/include/types/ndarray.hpp"

namespace pythonic
{

  namespace numpy
  {
    template <size_t N, class dtype = double>
    types::ndarray<typename types::numpy_type<dtype>::type, N>
    zeros(types::array<long, N> const &shape, dtype d = dtype());

    template <class dtype = double>
    types::ndarray<typename types::numpy_type<dtype>::type, 1>
    zeros(long size, dtype d = dtype());

    PROXY_DECL(pythonic::numpy, zeros);
  }
}

#endif
