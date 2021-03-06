#ifndef PYTHONIC_INCLUDE_BUILTIN_STR_COUNT_HPP
#define PYTHONIC_INCLUDE_BUILTIN_STR_COUNT_HPP

#include "pythonic/include/__dispatch__/count.hpp"
#include "pythonic/include/utils/proxy.hpp"

namespace pythonic
{

  namespace __builtin__
  {

    namespace str
    {

      ALIAS_DECL(count, pythonic::__dispatch__::count);

      PROXY_DECL(pythonic::__builtin__::str, count);
    }
  }
}
#endif
