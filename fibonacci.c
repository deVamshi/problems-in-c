#include <stdio.h>

int main(){
  int a = -1, b = 1, count, curr;

  printf("Enter how many number you want to print in series:");
  scanf("%i", &count);
  while(count){
    curr = a + b;
    a = b;
    b = curr;
    printf("%i\n", a + b);
    count--;
  }
  return 0;
}
