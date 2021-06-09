#include <stdio.h>
// f = c(9/5) + 32

int main(){
  int value;
  char unit;
  printf("Enter value followed by unit: ");
  scanf("%i%c", &value, &unit);

  if(unit == 'c'){
    float f = value * (9/5) + 32;
    printf("In Fahranheit: %i",(int) f);
  } else{
    float c = (value - 32) * (5/9);
    printf("In Celsius: %d", (int) c);
  }
  
  return 0;
}