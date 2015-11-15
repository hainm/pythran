//==============================================================================
//         Copyright 2003 - 2012   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2012   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//         Copyright 2011 - 2012   MetaScale SAS
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef NT2_CORE_FUNCTIONS_GLOBALASUMP_HPP_INCLUDED
#define NT2_CORE_FUNCTIONS_GLOBALASUMP_HPP_INCLUDED
#include <nt2/include/functor.hpp>
#include <nt2/include/functions/asump.hpp>
#include <nt2/include/functions/global.hpp>

namespace nt2
{
  namespace tag
  {
    /*!
      @brief Tag for the globalasump functor
    **/
    struct globalasump_ : boost::dispatch::tag::formal_
    {
      /// @brief Parent hierarchy
      typedef boost::dispatch::tag::formal_ parent;
    };
  }

  /*!
    @brief Sum of the power of absolute values of all the elements of a table expression

    Computes the sum of the pth power of the absolute value of all the elements
    of a table expression

    @par Semantic

    For any table @c t and any arithmetic value @c p :

    @code
    T r = globalasump(t, p);
    @endcode

    is equivalent to:

    @code
    T r = asump(a(_), p)(1);
    @endcode

    @see @funcref{colon}, @funcref{asump}
    @param a0 Table expression to process
    @param a1 Power at which absolute values are raised

    @return An expression eventually evaluated to the result
  **/
  NT2_FUNCTION_IMPLEMENTATION(nt2::tag::globalasump_, globalasump, 2)
}

namespace nt2 { namespace ext
{
  /// INTERNAL ONLY
  NT2_FUNCTOR_IMPLEMENTATION( nt2::tag::globalasump_, tag::cpu_
                              , (A0)(A1)
                              , (unspecified_<A0>)
                              (scalar_<arithmetic_<A1> > )
                            )
  {
    typedef typename meta::call<tag::global_( nt2::functor<tag::asump_>
                                            , const A0&
                                            , const A1&
                                            )>::type                result_type;

    BOOST_FORCEINLINE result_type operator()(A0 const& a0, A1 const& a1) const
    {
       return global(nt2::functor<tag::asump_>(), a0, a1);
    }
  };
} }

#endif
