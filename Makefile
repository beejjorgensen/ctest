CCOPTS=-Wall -Wextra

demo: demo.c
	gcc $(CCOPTS) -o $@ $^

.PHONY: test clean

test: demo.c
	@gcc $(CCOPTS) -DCTEST_ENABLE -o demotest $^
	@./demotest
	@rm -f demotest

clean:
	rm -f demo demotest
