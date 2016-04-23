#include <b-tree.h>

struct _node {
  int n; /*Número de chaves armazenadas no nó!*/
  int folha; /*Booleano que indica se o nó é folha ou não!*/
  TIPO chaves[2 * T + 1]; /*Número máximo de chaves {tipo char} em um nó!*/
  No *filhos[2 * T]; /*Ponteiros para os filhos de cada nó!*/
};

Arvore* criar () {
   Arvore *a = (Arvore *)malloc(sizeof(Arvore));
   a->n = 0;
   a->folha = TRUE;
   return a;
}

void imprimir (Arvore *a, int nivel) {

   int i;

   /*Imprime recuo para definir o nível do nó: */
   for (i = 0; i < nivel; i++) { printf("  "); }

   /*Imprime as chaves armazenadas no nó: */
   printf("|");
   for (i = 0; i < a->n; i++) {
      printf("%c|", a->chaves[i]);
      //printf("%02d|", a->chaves[i]);
   }
   printf("\n");

   /*Recursivamente imprime as chaves dos filhos: */
   for (i = 0; i <= a->n; i++) {
      if (a->folha == FALSE) {
         imprimir(a->filhos[i], nivel + 1);
      }
   }
}

int buscar (Arvore *a, TIPO chave) {

   int i = 0;

   /*Procurando a chave no vetor de chaves: */
   while ((i < a->n) && (chave > a->chaves[i])) {
     i = i + 1;
   }

   if (chave == a->chaves[i]) {
      /*Achou a chave!*/
      return i;
   }
   else if (a->folha) {
      /*Não achou a chave!*/
      return NOT_FOUND;
   }
   else {
      /*Buscando a chave no filho: */
      if (a->folha == FALSE) {
         return buscar (a->filhos[i], chave);
      }
   }

   return 0;
}

Arvore* dividir_no (Arvore *x, int i, Arvore *y) {
   /*Completar!!!!!!!!!!!!!!*/
   printf("Completar\n");
   return x;
}

Arvore* inserir_arvore_nao_cheia (Arvore *x, TIPO k) {
   /*Completar!!!!!!!!!!!!!!*/
   printf("Completar\n");
   return x;
}

Arvore *inserir (Arvore *raiz, TIPO chave) {
   Arvore *r = raiz;
   if (r->n == (2*T - 1)) {
      Arvore *s = criar();
      s->folha = FALSE;
      s->filhos[0] = r;
      s = dividir_no (s, 0, r);
      s = inserir_arvore_nao_cheia (s, chave);
      return s;
   }
   else {
      return inserir_arvore_nao_cheia (r, chave);
   }
}
