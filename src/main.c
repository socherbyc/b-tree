#include <stdio.h>
#include <b-tree.h>

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

  imprimir (a, 0);

  return 0;
}
