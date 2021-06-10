#include <stdio.h>

int main(){
  int p,r,t;
  scanf("%i", &p);
  scanf("%i", &r);
  scanf("%i", &t);
  float si = (p * r * t) / 100;
  printf("%i",(int) si);
  return 0;
}