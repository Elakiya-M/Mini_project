#include<stdio.h>
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include "../Project.h"
void setUp(){}
void tearDown(){}
void test_case1(void)
{
TEST_ASSERT_EQUAL_FLOAT(0.0000,optimum_load(0.0,1.0,125.0));}
void test_case2(void)
{TEST_ASSERT_EQUAL_FLOAT(0.0000,optimum_load(0.0,-1.0,125.0));}
void test_case3(void)
{TEST_ASSERT_EQUAL_FLOAT(0.0000,energy_output(-125.0,1.0,0.8,2000.0));}
void test_case4(void)
{TEST_ASSERT_EQUAL_FLOAT(0.0000,energy_copper(-1.0,1.5,2000.0));}
void test_case5(void)
{TEST_ASSERT_EQUAL_FLOAT(0.0000,energy_iron(0.0));}
void test_case6(void)
{TEST_ASSERT_EQUAL_FLOAT(0.0000,cost(300000.0,3500.0,8760.0,0));}
void test_case7(void)
{TEST_ASSERT_EQUAL_FLOAT(0.0000,efficiency(0.0,0.0,0.0));
}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_case1);
    RUN_TEST(test_case2);
    RUN_TEST(test_case3);
    RUN_TEST(test_case4);
    RUN_TEST(test_case5);
    RUN_TEST(test_case6);
    RUN_TEST(test_case7);

    return UNITY_END();
}