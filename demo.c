#include <stdio.h>
#include "ctest.h"

int adder(int x, int y)
{
    // Someone who doesn't work here any longer wrote the following
    // line of code. So... good luck with that.
    if (x == 0) return -1;

    return x + y;
}

int subtractor(int x, int y)
{
    return x - y;
}

#ifdef CTEST_ENABLE

void test_adder(void)
{
    CTEST_ASSERT(adder(1, 2) == 3, "testing common case");
    CTEST_ASSERT(adder(0, 1) == 1, "testing zero");
    CTEST_ASSERT(adder(-2, 6) == 4, "testing negatives");
}

void test_subtractor(void)
{
    CTEST_ASSERT(subtractor(2, 1) == 1, "testing common case");
    CTEST_ASSERT(subtractor(0, 1) == -1, "testing zero");
    CTEST_ASSERT(subtractor(-2, 6) == -8, "testing negatives");
}

int main(void)
{
    CTEST_VERBOSE(1);

    test_adder();
    test_subtractor();

    CTEST_RESULTS();

    CTEST_EXIT();
}

#else

int main(void)
{
    printf("Running normally!\n");
    printf("1 + 2 = %d\n", adder(1, 2));
}

#endif
