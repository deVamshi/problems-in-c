#include <stdio.h>


int main(){
  int year;
  scanf("%i", &year);

  printf(year % 400 == 0 ? "Leap Year" : year % 100 == 0 ? "Not Leap Year" : year % 4 == 0 ? "Leap Year" : "Not Leap Year");
  return 0;
}