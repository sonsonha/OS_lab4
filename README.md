# BK Task-Pool & Fork–Join Demo

This repository contains two examples:

1. **BK Task-Pool** (Practice 3.1 + Problems 1–2)  
   A simple multi-task framework that spawns up to `MAX_WORKER` workers (threads or processes), enqueues tasks, schedules them in FIFO order, and dispatches them via `SIGUSR1`.

2. **Fork–Join Demo** (Problem 3)  
   A standalone program showing a classic “fork N children → do work → parent waits (join)” pattern.

---

## Prerequisites

- Linux or WSL  
- `gcc` (with `clone()` support)  
- `make`  
- `pthread` library  

---

## BK Task-Pool

### 1. Clone or enter the project directory
```bash
   cd ~/lab_4
```
### 2. Clean the previous builds
``` bash
   Make clean
```
### 3. Build the pool (thread mode)
``` bash
   Make 
```

## Switching to fork() mode

### 1. Edit bkwrk.c and comment out:
```bash
   //#define WORK_THREAD
```
### 2. Rebuild:
``` bash
   make clean
   make
```
### 3. Run again:
``` bash
   ./mypool
```

### 4. Run in thread mode
``` bash
   ./mypool
```

## Fork–Join Demo

### 1. Build:
```bash
   gcc -o forkjoin forkjoin.c
```
### 2. Run:
``` bash
   ./forkjoin
```
## CLeanup
``` bash
   make clean
   rm -f forkjoin
```


