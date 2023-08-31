/*
Faça um programa em C que calcule o perimetro de uma pizza (P = 2 X P1 X r). Considere o raio um número inteiro e a constante PI igual a 3,1416
  */

#include <stdio.h>

int main() {

  float r = 2;
  float PI = 3.1416;

  float perimetro = 2 * PI * r;

printf("o perimetro da pizza é %f\n", perimetro);
  
    return 0;
}