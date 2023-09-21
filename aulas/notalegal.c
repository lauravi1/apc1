#include <stdio.h> // printf - escreve no console; scanf - ler do console

int main() {
  char item1[61] = "Caderno";
  int quantidade1 = 1;
  float preco1 = 20.0f;

  char item2[61] = "Lapis";
  int quantidade2 = 10;
  float preco2 = 5.0f;

  char item3[61] = "borracha";
  int quantidade3 = 2;
  float preco3 = 6.0;
  
  printf("Entre com o nome do item1: ");
  scanf("%s", item1);
  printf("Entre com o qtde do item1: ");
  scanf("%i", &quantidade1);
  printf("Entre com o preco do item1: ");
  scanf("%f", &preco1);

  printf("Entre com o nome do item2: ");
  scanf("%s", item2);
  printf("Entre com o qtde do item2: ");
  scanf("%i", &quantidade2);
  printf("Entre com o preco do item2: ");
  scanf("%f", &preco2);

  printf("Entre com o nome do item3: ");
  scanf("%s", item3);
  printf("Entre com o qtde do item3: ");
  scanf("%i", &quantidade3);
  printf("Entre com o preco do item3: ");
  scanf("%f", &preco3);

  float total = quantidade1 * preco1;
  total = total + quantidade2 * preco2;
  total = total + quantidade3 * preco3;
  
  printf("------------------------------\n");
  printf("     N O T A   L E G A L      \n");
  printf("------------------------------\n");
  printf("Item             Qtd  Valor   \n");
  printf("%-16.16s %03i %9.2f\n", item1, quantidade1, preco1);
  printf("%-16.16s %03i %9.2f\n", item2, quantidade2, preco2);
  printf("%-16.16s %03i %9.2f\n", item3, quantidade3, preco3);
  printf("------------------------------\n");
  printf("Total            R$      %5.2f\n", total);
  printf("------------------------------\n");
  
  return 0;
}