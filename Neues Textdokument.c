#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>

bool arr[8];

int dec2Bin(int dez, bool arr[]){
  int zahl = dez, dezimal = dez, rest, ergebnis= 0, faktor = 1;

  int i = 8;
  while(dezimal){
    rest = dezimal % 2;
    printf("%d", rest);
      
    arr[i] = rest;
    i--;

    dezimal = dezimal / 2;

    ergebnis += (rest * faktor);
    faktor *= 10;
  }

  printf("%i Wird zu: %i\n", zahl, ergebnis);
  return 0;
}

int main(void) {
  int scan = 0;

  dec2Bin(4,arr);

  for(int i = sizeof(arr); i > 0; i--){
    printf("%d",arr[i]);
  }
  return 0;
}