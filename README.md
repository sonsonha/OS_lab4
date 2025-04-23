# OS_lab4

BK Task-Pool Quick Guide

Build
make clean    # remove old objects (use -f in Makefile to avoid errors)
make           # compiles `mypool` and `forkjoin`
Test BK Task-Pool (Thread Mode)
./mypool

Expect 10 “got worker” lines

Exactly 3 Assign tsk X wrk Y and 3 Task func - Hello from ...

Test BK Task-Pool (Fork Mode)

In bkwrk.c comment out #define WORK_THREAD.

Rebuild: make clean && make

Run: ./mypool (same correct output)

Uncomment #define STRESS_TEST in main.c.

Rebuild & run:

make clean && make
./mypool

Verify 15 Assign tsk… and 15 Task func… lines.

Fork–Join Demo (Problem 3)

./forkjoin

Children print start/finish; parent prints join messages.
