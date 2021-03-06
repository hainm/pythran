#ifndef PYTHONIC_NUMPY_ARRAY2STRING_HPP
#define PYTHONIC_NUMPY_ARRAY2STRING_HPP

#include "pythonic/include/numpy/array2string.hpp"

#include "pythonic/utils/proxy.hpp"
#include "pythonic/types/ndarray.hpp"
#include "pythonic/types/str.hpp"

namespace pythonic
{

  namespace numpy
  {
    template <class E>
    types::str array2string(E &&a)
    {
      std::ostringstream oss;
      oss << std::forward<E>(a);
      return oss.str();
    }

    PROXY_IMPL(pythonic::numpy, array2string);
  }
}

#endif
