#include <stdio.h>

int main(){
  int inp, found = 0;
  scanf("%i", &inp);
  for(int i = 2; i < inp; i++){
    found = 0;
    for(int j = 2; j < i; j++){
      if(i % j == 0){
        found = 1;
        break;
      }
    }
    if(found == 0){
      printf("%d\n", i);
    }

  }
  return 0;
}