#include <stdio.h>
#include <string.h>

int main(){
  
  char *arr[] = {
    "ZZZZZZZZZZZ",
    "YYYYYYYYYYYYY",
    "PPPPPPPPP",
    "Asaaaaaaaaaaaa",
  };

  int arr_len = sizeof arr / sizeof arr[0];

  for(int i = 0;i < arr_len; i++){
    for(int j = 0; j < arr_len ; j++){
      if(strcasecmp(arr[i], arr[j]) < 0){
        char *temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for(int k = 0; k < arr_len; k++){
    printf("%s\n", arr[k]);
  }



  return 0;
}