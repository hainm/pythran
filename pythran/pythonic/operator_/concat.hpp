#ifndef PYTHONIC_OPERATOR_CONCAT_HPP
#define PYTHONIC_OPERATOR_CONCAT_HPP

#include "pythonic/include/operator_/concat.hpp"

#include "pythonic/utils/proxy.hpp"

namespace pythonic
{

  namespace operator_
  {

    template <class A, class B>
    auto concat(A const &a, B const &b) -> decltype(a + b)
    {
      return a + b;
    }

    PROXY_IMPL(pythonic::operator_, concat);
  }
}

#endif
