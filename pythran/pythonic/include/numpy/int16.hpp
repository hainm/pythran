#ifndef PYTHONIC_INCLUDE_NUMPY_INT16_HPP
#define PYTHONIC_INCLUDE_NUMPY_INT16_HPP

#include "pythonic/include/utils/proxy.hpp"
#include "pythonic/include/utils/meta.hpp"
#include "pythonic/include/utils/numpy_traits.hpp"
#include "pythonic/include/types/numpy_op_helper.hpp"

namespace pythonic
{

  namespace numpy
  {

    namespace details
    {

      int16_t int16();
      template <class V>
      int16_t int16(V v);
    }

#define NUMPY_NARY_FUNC_NAME int16
#define NUMPY_NARY_FUNC_SYM details::int16
#include "pythonic/include/types/numpy_nary_expr.hpp"
  }
}

#endif
