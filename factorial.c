#include <stdio.h>

int fact(int number){
  if(number == 1){
    return 1;
  } else{
    return (number) * fact(number -1);
  }
}

int main(){
  int inp;
  printf("Enter the number for which you want to find factorial: \n");
  scanf("%i", &inp);
  int result = fact(inp);
  printf("%i", result);
  return 0;
}