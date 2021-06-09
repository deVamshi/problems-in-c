#include <stdio.h>
#include <string.h>
int main(){
  char myS[1000000];
  char uni[200000];
  scanf("%s", myS);

  int i = 0, count = 0;
  int foundAPair = 0;
  while(myS[i]){
    for(int j = i + 1; j < strlen(myS);j++){
      if(myS[i] == myS[j]){
        foundAPair = 1;
        break;
      }
    }
    if(foundAPair == 0){
      pri
      count++;
    }
    foundAPair = 0;
    i++;
  }

  printf("%i", count);

  return 0;
}