#include "doctest.h"
#include "OrgChart.hpp"

#include <string>
#include <vector>
#include <iostream>

using namespace std;
using namespace ariel;

TEST_CASE("h1"){
    OrgChart amitTest;
    amitTest.add_root("amit");

    //CHECK(cout << amitTest == "amit");
    CHECK_NOTHROW(amitTest.add_sub("amit", "sub1"));
    CHECK_NOTHROW(amitTest.add_sub("amit", "sub2"));
    CHECK_NOTHROW(amitTest.add_sub("amit", "sub3"));
    CHECK_NOTHROW(amitTest.add_sub("amit", "sub4"));
    CHECK_NOTHROW(amitTest.add_sub("amit", "sub5"));
    //CHECK(cout << amitTest == "amit => sub1, sub2, sub3, sub4, sub5");
    CHECK_NOTHROW(amitTest.add_sub("sub1", "sub6"));
    //CHECK(cout << amitTest == "amit => sub1, sub2, sub3, sub4, sub5 \n sub1 => sub6");
    CHECK_NOTHROW(amitTest.begin_level_order());
    CHECK_NOTHROW(amitTest.end_level_order());
    CHECK_NOTHROW(amitTest.begin_reverse_order());
    CHECK_NOTHROW(amitTest.reverse_order());
    CHECK_NOTHROW(amitTest.begin_level_order());
    CHECK_NOTHROW(amitTest.begin_level_order());
    CHECK_NOTHROW(amitTest.begin_preorder());
    CHECK_NOTHROW(amitTest.end_preorder());
    CHECK_NOTHROW(amitTest.begin_level_order());
    CHECK_NOTHROW(amitTest.begin_level_order());
    CHECK_NOTHROW(amitTest.begin_level_order());
    CHECK_NOTHROW(amitTest.begin_level_order());
    CHECK_NOTHROW(amitTest.begin_level_order());
    CHECK_NOTHROW(amitTest.begin_level_order());

    

}