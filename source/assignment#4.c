// Leandro Ebner 2024
// Assignment #4: A simple calculator

#include <stdio.h>

float opr1, opr2;
char optr;

float calculate(char optr, float opr1, float opr2);


int main(){
    
    printf("Insert operator...\n");
    scanf("%c", &optr);
    printf("Received: [%c]! Insert Operand 1...\n", optr);
    scanf("%f", &opr1);
    printf("Received: [%f]! Insert Operand 2...\n", opr1);
    scanf("%f", &opr2);
    printf("Received: [%f]! Result: ", opr2);
    printf(" --> %f", calculate(optr, opr1, opr2));
}

float calculate(char optr,float opr1, float opr2){
  
  switch(optr){
    case '+':
      return opr1 + opr2;
      break;
    case '-':
      return opr1 - opr2;
      break;
    case '*':
      return opr1 * opr2;
      break;
    case '/':
      return opr1 / opr2;
      break;
    default: 
      printf("<<Syntax Error: Invalid Operator>>");
      return 0;
  }
}


