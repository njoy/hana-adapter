/*
@copyright Louis Dionne 2014
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 */

#include <boost/hana/detail/static_assert.hpp>
#include <boost/hana/ext/boost/mpl/integral_c.hpp>

#include <boost/mpl/int.hpp>
#include <boost/mpl/integral_c.hpp>
#include <boost/mpl/long.hpp>
using namespace boost::hana;
namespace mpl = boost::mpl;


int main() {
    //! [main]
    using namespace operators; // required to be able to == mpl::integral_c

    static_assert(value(mpl::integral_c<int, 3>{}) == 3, "");

    BOOST_HANA_STATIC_ASSERT(mpl::integral_c<int, 3>{} == mpl::int_<3>{});
    BOOST_HANA_STATIC_ASSERT(mpl::integral_c<int, 3>{} == mpl::long_<3>{});
    BOOST_HANA_STATIC_ASSERT(mpl::integral_c<int, 3>{} != mpl::int_<0>{});
    //! [main]
}
