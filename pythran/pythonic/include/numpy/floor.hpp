#ifndef PYTHONIC_INCLUDE_NUMPY_FLOOR_HPP
#define PYTHONIC_INCLUDE_NUMPY_FLOOR_HPP

#include "pythonic/include/utils/proxy.hpp"
#include "pythonic/include/types/ndarray.hpp"
#include "pythonic/include/utils/numpy_traits.hpp"
#include <nt2/include/functions/floor.hpp>

namespace pythonic
{

  namespace numpy
  {
#define NUMPY_NARY_FUNC_NAME floor
#define NUMPY_NARY_FUNC_SYM nt2::floor
#include "pythonic/include/types/numpy_nary_expr.hpp"
  }
}

#endif
