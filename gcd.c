#include<stdio.h>

//GCD (Greatest Common Divisor) or HCF (Highest Common Factor) of two numbers is the largest number that divides both of them. 
int main(){
  int a,b;
  scanf("%i %i", &a, &b);


  if (a == 0){
    return b;
  }
  if (b == 0){
    return a;
  }
  if (a == b){
    return a;
  }
  int min = a < b ? a : b;
  for(int i = min; i > 0; i--){
    if( a % i == 0 && b % i  == 0){
      printf("GCD is %i", i);
      break;
    }
  }
  return 0;
}