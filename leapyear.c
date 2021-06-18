#include <stdio.h>


int main(){
  int year;
  scanf("%i", &year);
  
  printf(year % 400 == 0 ? "Leap Year" : (year % 4 == 0 && year % 100 != 0) ? "Leap Year" : "Not a leap year");

    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
    printf("Leap Year");
  } else {
    printf("Not a leap year");
  }

  return 0;
}



