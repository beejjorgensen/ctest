# Simple C Testing Macros

A simple C test "framework".

Not really for production, but if all you need is lightweight, this is
lightweight.

## Example Run

```
  OK: test_adder: demo.c:22: adder(1, 2) == 3: testing common case
FAIL: test_adder: demo.c:23: adder(0, 1) == 1: testing zero
  OK: test_adder: demo.c:24: adder(-2, 6) == 4: testing negatives

  OK: test_subtractor: demo.c:29: subtractor(2, 1) == 1: testing common case
  OK: test_subtractor: demo.c:30: subtractor(0, 1) == -1: testing zero
  OK: test_subtractor: demo.c:31: subtractor(-2, 6) == -8: testing negatives

Results: 5/6 passing (83.3%).
```

## Usage

To use:

1. `#include "ctest.h"` in the file with the tests.
2. Compile with `-DCTEST_ENABLE`.

The `ctest.h` header file defines a number of macros, all of which are
optional.

|Macro|Description|
|-|-|
|`CTEST_ASSERT(cond, message)`|The workhorse. The test fails if the Boolean condition `cond` is false and the message is printed.|
|`CTEST_RESULTS()`|Print a results summary.|
|`CTEST_VERBOSE(on)`|If set to true, all tests and results are printed. Otherwise only the failing tests are printed. Default: false.|
|`CTEST_COLOR(on)`|Output in color. Default: true.|
|`CTEST_EXIT()`|Exit with status `1` if any tests have failed. Otherwise exit with status `0`.|

See the `Makefile` and `demo.c`.

## Global Variable Pollution

The `ctest.h` header file acts inappropriately and defines a number of
global variables of external linkage. All of these begin with `ctest_`.

But this allows it to keep stats and doesn't require another file to be
linked in.
