#include <stdio.h>

int main() {
// int x;
  int y = 0; 
  int z = 10;
  int x1 = -1;
  int x2 = x1;

  y = 50;
  y = -5; 
  
  char caracter; // 1 byte  -128 a 127 'a', '1', ','

  unsigned char caracter_sem_sinal; // 0 a 255
  
  int i, j;

  short int inteiro_curto; // 2 bytes -32768 a 32767
  
  int inteiro; // 4 bytes -2.147.483.648 a 2147483647

long int inteiro_longo; // 8 bytes -99.223.372.036.775.808 a 9223372036854775807
  
  unsigned int inteiro_sem_sinal; // 0 a 4.294.967.295
  
 unsigned int inteiro_longo_sem_sinal; // 0 a 18.446.744.073.709.551.615
  
  float ponto_flutuante; // 4 bytes 0.123456f
  
  double duplo; // 8 bytes 0.1234567890123456

  long double longo_duplo; // 16 bytes
  
  void nada; // 1 byte

  return 0;
  }