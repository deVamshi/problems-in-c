#include <stdio.h>

int main(){
  int rows, rev;
  printf("Enter no of row: \n");
  scanf("%i", &rows);
  for(int i = 1; i <= rows; i++){
    printf("%*s", rows - i , "");
    for(int j = i; j <= 2 * i - 1; j++){
      printf("%i", j);
    }
    for(int k = 2 * i - 2; k >= i ; k--){
      printf("%i", k);
    }
    printf("\n");
  }
  return 0;
}