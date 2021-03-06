#ifndef PYTHONIC_INCLUDE_NUMPY_LEFT_SHIFT_HPP
#define PYTHONIC_INCLUDE_NUMPY_LEFT_SHIFT_HPP

#include "pythonic/include/utils/proxy.hpp"
#include "pythonic/include/types/ndarray.hpp"
#include "pythonic/include/operator_/lshift.hpp"
#include "pythonic/include/types/numpy_broadcast.hpp"
#include "pythonic/include/utils/numpy_traits.hpp"

namespace pythonic
{

  namespace numpy
  {

#define NUMPY_NARY_FUNC_NAME left_shift
#define NUMPY_NARY_FUNC_SYM pythonic::operator_::lshift
#include "pythonic/include/types/numpy_nary_expr.hpp"
  }
}

#endif
