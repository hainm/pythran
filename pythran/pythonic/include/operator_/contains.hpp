#ifndef PYTHONIC_INCLUDE_OPERATOR_CONTAINS_HPP
#define PYTHONIC_INCLUDE_OPERATOR_CONTAINS_HPP

#include "pythonic/include/utils/proxy.hpp"
#include "pythonic/include/__builtin__/in.hpp"

namespace pythonic
{

  namespace operator_
  {
    template <class A, class B>
    auto contains(A const &a, B const &b) -> decltype(in(a, b));

    PROXY_DECL(pythonic::operator_, contains);
  }
}

#endif
