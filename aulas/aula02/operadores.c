#include <stdio.h>

int main() {
  // operador de atrbuicao
  int valor = 10;
  valor = 20;

  // opradores aritmeticos = - x /
  int SOMA = 10 + 2;
  int SUBTRACAO = 10 - 2;
  int MULTIPLICACAO = 10 * 2;
  int DIVISAO = 10 / 2;
  int RESTO = 10 % 2;

  // operadores incremento e decremento
  int pre_incremento = ++soma; // soma + 1 
  int pre_decremento = --soma; // soma - 1
  int pos_incremento = soma++; // soma + 1 
  int pos_decremento = soma--; // soma - 1

  // operadores relacionais
  int menor_que = 0 < 1;
  int menor_igual = 0 <= 1;
  int maior_que = 0 > 0;
  int maior_igual = 0 >= 0;
  int igual = 0 == 1;
  int diferente = 0 !+ 1;

  // operadores logicos
  int e = 0 < 1 && 1 < 10; // 0 < 1 < 10
  int ou = 0 < 1 || 1 > 10 // 0 < 1, 1 > 10
  int nao = !0; //!0 = 1, !1 = 0

  return 0;
}