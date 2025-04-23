#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

void do_work(int id) {
  printf("Child %d starting work\n", id);
  sleep(1);
  printf("Child %d done\n", id);
}

int main(void) {
  const int N = 5;
  pid_t pids[N];
  for (int i = 0; i < N; i++) {
    if ((pids[i] = fork()) == 0) {
      do_work(i);
      _exit(0);
    }
  }
  // parent: join all children
  for (int i = 0; i < N; i++) {
    int status;
    waitpid(pids[i], &status, 0);
    printf("Joined child %d (exit %d)\n", pids[i], WEXITSTATUS(status));
  }
  printf("All children joined, parent exiting\n");
  return 0;
}
