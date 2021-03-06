#ifndef PYTHONIC_INCLUDE_NUMPY_SQRT_HPP
#define PYTHONIC_INCLUDE_NUMPY_SQRT_HPP

#include "pythonic/include/utils/proxy.hpp"
#include "pythonic/include/types/ndarray.hpp"
#include "pythonic/include/utils/numpy_traits.hpp"

#include <nt2/include/functions/sqrt.hpp>

namespace pythonic
{

  namespace numpy
  {
#define NUMPY_NARY_FUNC_NAME sqrt
#define NUMPY_NARY_FUNC_SYM nt2::sqrt
#include "pythonic/include/types/numpy_nary_expr.hpp"
  }
}

#endif
