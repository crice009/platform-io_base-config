#include <unity.h>
#include <cstdio> //ignore squiggle - installed globally

void test_tests(void){
    TEST_ASSERT_EQUAL_INT(13,13);
}

// Boilerplate -----------------------------------------

void setUp(void) {
    printf("--------- setting up tests ---------\n");
}

void tearDown(void) {
    printf("--------- tearing down tests ---------\n");
}

int main(int argc, char **argv){
    UNITY_BEGIN();
    RUN_TEST(test_tests);
    UNITY_END();
}