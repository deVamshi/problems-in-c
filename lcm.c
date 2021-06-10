#include <stdio.h>
//LCM (Least Common Multiple) of two numbers is the smallest number which can be divided by both numbers. 
void main(){
  int a,b;
  scanf("%i", &a);
  scanf("%i", &b);

  int max = a > b ? a : b;
  while(1){
    if(max % a == 0 && max % b == 0){
      printf("LCM is %i", max);
      return;
    }
    max++;
  }

}