#include <stdio.h>


int main(){

  char vowels[] = {'a', 'e', 'i', 'o','u'};
  char word[10000];
  scanf("%s", word);
  int i = 0, j = 0;

  int hasVowel = 0;
  

  while(word[i]){
    j = 0;
    while(vowels[j]){
      if(word[i] == vowels[j]){
        hasVowel = 1;
        break;
      }
      j++;
    }
    i++;
  }

  if(hasVowel){
    printf("The word contains a vowel");
  } else{
    printf("The word doesn't contain a vowel");
  }
  return 0;
}