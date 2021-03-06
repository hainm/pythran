#ifndef PYTHONIC_NUMPY_LINALG_NORM_HPP
#define PYTHONIC_NUMPY_LINALG_NORM_HPP
#include "pythonic/include/numpy/linalg/norm.hpp"
#include "pythonic/numpy/abs.hpp"
#include "pythonic/numpy/conj.hpp"
#include "pythonic/numpy/asfarray.hpp"
#include "pythonic/numpy/inf.hpp"
#include "pythonic/numpy/max.hpp"
#include "pythonic/numpy/min.hpp"
#include "pythonic/numpy/power.hpp"
#include "pythonic/numpy/real.hpp"
#include "pythonic/numpy/sqrt.hpp"
#include "pythonic/numpy/square.hpp"
#include "pythonic/numpy/sum.hpp"
#include "pythonic/__builtin__/NotImplementedError.hpp"
namespace pythonic
{
  namespace numpy
  {
    namespace linalg
    {
      template <class Array>
      auto norm(Array &&array, types::none_type ord, types::none_type axis)
          -> decltype(pythonic::numpy::proxy::sqrt{}(
              pythonic::numpy::proxy::sum{}(pythonic::numpy::proxy::square{}(
                  pythonic::numpy::proxy::abs{}(
                      pythonic::numpy::proxy::asfarray{}(
                          std::forward<Array>(array)))))))
      {
        return pythonic::numpy::proxy::sqrt{}(pythonic::numpy::proxy::sum{}(
            pythonic::numpy::proxy::square{}(pythonic::numpy::proxy::abs{}(
                pythonic::numpy::proxy::asfarray{}(
                    std::forward<Array>(array))))));
      }

      template <class Array>
      norm_t<Array> norm(Array &&x, double ord, types::none_type)
      {
        switch (std::decay<Array>::type::value) {
        case 1:
          return norm(std::forward<Array>(x), ord, 0L);
        case 2:
          return norm(std::forward<Array>(x), ord,
                      types::array<long, 2>{{0L, 1L}});
        default:
          throw pythonic::__builtin__::NotImplementedError(
              "Invalid norm order for matrices.");
        }
      }

      template <class Array>
      norm_t<Array> norm(Array &&x, double ord, long axis)
      {
        auto &&y = pythonic::numpy::proxy::asfarray{}(x);
        if (ord == inf)
          return pythonic::numpy::proxy::max{}(pythonic::numpy::proxy::abs{}(y),
                                               axis);
        else if (ord == -inf)
          return pythonic::numpy::proxy::min{}(pythonic::numpy::proxy::abs{}(y),
                                               axis);
        else if (ord == 0.)
          return pythonic::numpy::proxy::sum{}(y != 0., axis);
        else if (ord == 1.)
          return pythonic::numpy::proxy::sum{}(pythonic::numpy::proxy::abs{}(y),
                                               axis);
        else if (ord == 2.)
          return pythonic::numpy::proxy::sqrt{}(pythonic::numpy::proxy::sum{}(
              pythonic::numpy::proxy::real{}(
                  pythonic::numpy::proxy::conj{}(y)*y),
              axis));
        else {
          return pythonic::numpy::proxy::power{}(
              pythonic::numpy::proxy::sum{}(
                  pythonic::numpy::proxy::power{}(
                      pythonic::numpy::proxy::abs{}(y), ord),
                  axis),
              1. / ord);
        }
      }
      template <class Array>
      norm_t<Array> norm(Array &&x, types::none_type ord, double axis)
      {
        return norm(std::forward<Array>(x), 2., axis);
      }
      template <class Array>
      norm_t<Array> norm(Array &&x, double ord, types::array<long, 1> axis)
      {
        return norm(std::forward<Array>(x), ord, axis[0]);
      }
      template <class Array>
      norm_t<Array> norm(Array &&array, double ord, types::array<long, 2> axis)
      {
        throw pythonic::__builtin__::NotImplementedError("We need more dev!");
      }

      PROXY_IMPL(pythonic::numpy::linalg, norm);
    }
  }
}

#endif
