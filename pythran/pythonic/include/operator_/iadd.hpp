#ifndef PYTHONIC_INCLUDE_OPERATOR_IADD_HPP
#define PYTHONIC_INCLUDE_OPERATOR_IADD_HPP

#include "pythonic/include/utils/proxy.hpp"
#include "pythonic/include/types/list.hpp"
#include "pythonic/include/types/set.hpp"
#include "pythonic/include/types/dict.hpp"

namespace pythonic
{

  namespace operator_
  {

    template <class A>
    auto iadd(types::empty_list, types::list<A> const &b) -> decltype(b);

    template <class K, class V>
    auto iadd(types::empty_dict, types::dict<K, V> const &b) -> decltype(b);

    template <class A>
    auto iadd(types::empty_set, types::set<A> const &b) -> decltype(b);
  }
}
#define OPERATOR_NAME iadd
#define OPERATOR_SYMBOL +
#define OPERATOR_ISYMBOL +=
#include "pythonic/include/operator_/icommon.hpp"

#endif
