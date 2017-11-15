#include "unity\src\unity.h"
#include "calculator.h"

void test_Additon(void)
{
TEST_ASSERT_EQUAL_FLOAT(4.2, Addition(2.2, 2));
}

void test_Subtraction(void)
{
TEST_ASSERT_EQUAL_FLOAT(2.2, Subtraction(4.2, 2));
}

void test_Multiplication(void)
{
TEST_ASSERT_EQUAL_FLOAT(8.4, Multiplication(4.2, 2));
}

void test_Division(void)
{
TEST_ASSERT_EQUAL_FLOAT(4.2, Division(8.4, 2));
}

int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_Additon);
RUN_TEST(test_Subtraction);
RUN_TEST(test_Multiplication);
RUN_TEST(test_Division);
return UNITY_END();
}
