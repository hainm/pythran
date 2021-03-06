#ifndef PYTHONIC_INCLUDE_NUMPY_MULTIPLY_HPP
#define PYTHONIC_INCLUDE_NUMPY_MULTIPLY_HPP

#include "pythonic/include/utils/proxy.hpp"
#include "pythonic/include/types/ndarray.hpp"
#include "pythonic/include/types/numpy_broadcast.hpp"
#include "pythonic/include/utils/numpy_traits.hpp"
#include "pythonic/include/operator_/mul.hpp"

namespace pythonic
{

  namespace numpy
  {

#define NUMPY_NARY_FUNC_NAME multiply
#define NUMPY_NARY_FUNC_SYM pythonic::operator_::mul
#include "pythonic/include/types/numpy_nary_expr.hpp"
  }
}

#endif
