#include <stdio.h>

int main(){
  int n1,d1,n2,d2;
  scanf("%i",&n1);
  scanf("%i",&d1);
  scanf("%i",&n2);
  scanf("%i",&d2);
  if((n1/d1) == (n2/d2)){
    printf("The given fracions are proportion");
  } else {
    printf("The given fracions are NOT proportion");
  }
  return 0;
}