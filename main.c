// #include <stdio.h>
// #include <string.h>
// int main(){
//   char myString[200];


//   scanf("%s", myString);

//   for(int i = 0;i < strlen(myString);i++){

//       for(int j = 0; j < strlen(myString) - i - 1; j++){
//           if(myString[j] > myString[j+1]){
//               char temp = myString[j];
//               myString[j] = myString[j+1];
//               myString[j+1] = temp;
//           }
//       }

//   }

//   for(int k = 0;k < strlen(myString); k++){
//       printf("%c", myString[k]);
//   }
  

 
//   return 0;
// }


#include <stdio.h>
#include <string.h>
int main(){

    int size;


    printf("Enter Size of array: ");

    scanf("%i", &size);


  int arr[size];



  for(int l = 0; l < size;l++){

   scanf("%i", &arr[l]);
      
  }

  for(int i = 0; i < size;i++){

      for(int j = 0; j < size - i - 1; j++){
          if(arr[j] > arr[j+1]){
              int temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
          }
      }

  }

  for(int k = 0;k < size; k++){
      printf("%i", arr[k]);
  }
  

 
  return 0;
}