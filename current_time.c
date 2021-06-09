#include <time.h>
#include <stdio.h>


int main(){
  time_t t;
  time(&t);
  printf("Current Time is %s", ctime(&t));
  return 0;
}