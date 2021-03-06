#ifndef PYTHONIC_INCLUDE_NUMPY_SUBTRACT_HPP
#define PYTHONIC_INCLUDE_NUMPY_SUBTRACT_HPP

#include "pythonic/include/utils/proxy.hpp"
#include "pythonic/include/types/ndarray.hpp"
#include "pythonic/include/types/numpy_broadcast.hpp"
#include "pythonic/include/utils/numpy_traits.hpp"
#include "pythonic/include/operator_/sub.hpp"

namespace pythonic
{

  namespace numpy
  {
#define NUMPY_NARY_FUNC_NAME subtract
#define NUMPY_NARY_FUNC_SYM pythonic::operator_::sub
#include "pythonic/include/types/numpy_nary_expr.hpp"
  }
}

#endif
