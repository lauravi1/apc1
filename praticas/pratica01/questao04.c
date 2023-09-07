/*
Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + COFINS + PIS/PASEP) * preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%. 
*/

#include <stdio.h> 

#define ICMS 0.17f
#define COFINS 0.076f
#define PIS_PASEP 0.1665f

int main(){
  
  float preco_produto = 100.0f;
  float valor_icms = preco_produto * 0.17f;
  float valor_cofins = preco_produto * 0.076f;
  float valor_pispasep = preco_produto * 0.0165f;
  float preco_final = (1 + 0.17f + 0.076f + 0.0165f) * preco_produto;

  printf("O valor final do produto é %f\n" , preco_final);
  printf("O valor do ICMS é %f\n" , valor_icms);
  printf("O valor do COFINS é %f\n" , valor_cofins);
  printf("O valor do PIS_PASEP é %f\n" , valor_pispasep);
  
  return 0;
}