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

See `demo.c` and the `Makefile`.

