#ifndef PYTHONIC_BUILTIN_POW_HPP
#define PYTHONIC_BUILTIN_POW_HPP

#include "pythonic/include/__builtin__/pow.hpp"

#include "pythonic/numpy/power.hpp"
#include "pythonic/utils/functor.hpp"

PYTHONIC_NS_BEGIN

namespace __builtin__
{
  template <class... Types>
  auto pow(Types &&... args)
      -> decltype(numpy::functor::power{}(std::forward<Types>(args)...))
  {
    return numpy::functor::power{}(std::forward<Types>(args)...);
  }
}
PYTHONIC_NS_END

#endif
