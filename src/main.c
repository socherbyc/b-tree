#include <stdio.h>
#include <b-tree.h>

int DEBUG = 0;

int main() {

  Arvore *a = criar();

  /*Exercicio 18-2.1 Cormen*/
  a = inserir (a, 'F');
  a = inserir (a, 'S');
  a = inserir (a, 'Q');
  a = inserir (a, 'K');
  a = inserir (a, 'C');
  a = inserir (a, 'L');
  a = inserir (a, 'H');
  a = inserir (a, 'T');
  a = inserir (a, 'V');
  a = inserir (a, 'W');
  a = inserir (a, 'M');
  a = inserir (a, 'R');
  a = inserir (a, 'N');
  a = inserir (a, 'P');
  a = inserir (a, 'A');
  a = inserir (a, 'B');
  a = inserir (a, 'X');
  a = inserir (a, 'Y');
  a = inserir (a, 'D');
  a = inserir (a, 'Z');
  a = inserir (a, 'E');

  imprimir_by_type(a, 0, "%c|");

  printf("\n----------\n\n");

  Arvore *b = criar();

  b = inserir(b, 91);
  b = inserir(b, 90);
  b = inserir(b, 80);
  b = inserir(b, 71);
  b = inserir(b, 72);
  b = inserir(b, 50);
  b = inserir(b, 45);
  b = inserir(b, 47);
  // DEBUG = 1;
  b = inserir(b, 10);
  b = inserir(b, 8);
  b = inserir(b, 7);
  b = inserir(b, 5);
  b = inserir(b, 2);
  b = inserir(b, 3);
  b = inserir(b, 22);
  b = inserir(b, 44);
  b = inserir(b, 55);
  b = inserir(b, 66);
  b = inserir(b, 68);
  b = inserir(b, 17);
  b = inserir(b, 6);
  b = inserir(b, 21);
  b = inserir(b, 67);

  imprimir_by_type(b, 0, "%02d|");

  return 0;
}
