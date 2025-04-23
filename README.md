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
