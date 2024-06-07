// Leandro Ebner 2024
// Assignment #2: ASCII-Table

#include <stdio.h>

int array[4] = {32, 56, 80, 104};

int main(){
  
  for(int i=0; i<24; i++){
    row(i);
    printf("\n");
  }
}

void row(int c){
  
  for(int j=0; j<4; j++){
    printf("      %i  %c", array[j]+c, array[j]+c);
  }
}

