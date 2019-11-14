#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>

int main() {
  struct stat poi;
  printf("analyzing obamalastname.txt:\n");
  stat("obamalastname.txt", &poi);
  printf("size: %li bytes\n", poi.st_size);
  printf("permissions (octal representation): %o\n", poi.st_mode);
  time_t atime = poi.st_atime;
  printf("last accessed: %s\n", ctime(&atime));
  printf("analyzing main.c:\n");
  struct stat nter;
  stat("main.c", &nter);
  printf("size: %li bytes\n", nter.st_size);
  printf("permissions (octal representation): %o\n", nter.st_mode);
  time_t matime = nter.st_atime;
  printf("last accessed: %s\n", ctime(&matime));

  return 0;
}
