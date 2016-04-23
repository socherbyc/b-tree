#ifndef B_TREE_H_
#define B_TREE_H_

#include <stdlib.h>
#include <stdio.h>

#define TIPO char

#define T 2           /*Número que define mínimo e máximo de chaves!*/
#define NOT_FOUND -1  /*Valor retornado quando o nó não existe!*/
#define TRUE 1        /*Booleano para verdadeiro!*/
#define FALSE 0       /*Booleano para falso!*/

typedef struct _node No, Arvore;

/*Função para criar e inicializar uma árvore B:*/
Arvore* criar ();

/*Função para buscar uma chave em uma árvore B:*/
void imprimir (Arvore *a, int nivel);

/*Função para buscar uma chave em uma árvore B:*/
int buscar (Arvore *a, TIPO chave);

/*Descrição: ????*/
Arvore* dividir_no (Arvore *x, int i, Arvore *y);

/*Descrição: ????*/
Arvore* inserir_arvore_nao_cheia (Arvore *x, TIPO k);

/*Função para inserir uma chave em uma árvore B:*/
Arvore *inserir (Arvore *raiz, TIPO chave);

#endif
