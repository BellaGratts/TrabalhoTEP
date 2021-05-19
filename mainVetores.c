//Trabalho de TEP de Isabela Gratts dos Santos - Matricula 2020102546

#include <stdio.h>
#include <stdlib.h>
#include "tRacionais.h"
#include "tComplexos_generico.h"
#include "tVetores_generico.h"

int main(){
 puts("testes de vetores");

 puts("cria vetor");
 D_vetor_pt v = D_criaVetor(5);
 D_randomize(v, 100.0, 1);
 D_imprimeVetor(v);

 puts("retornos de n, N e i");
 printf("%d\n", D_retorna_n(v));
 printf("%d\n", D_retornaN(v));
 printf("%d\n", D_retorna_i(v));

 puts("retornos do 1°, próximo, anterior e último elemento do vetor v");
 printf("%lf\n", D_retornaPrimeiroElemento(v));
 printf("%lf\n", D_retornaProximoElemento(v));
 printf("%lf\n", D_retornaElementoAnterior(v));
 printf("%lf\n", D_retornaUltimoElemento(v));

 puts("retorno do elemento da posição i");
 printf("%lf\n", D_retornaElementoI(v, 3));

 puts("atribuindo um valor na ultima posição");
 D_atribuiVUltimaPosicao(v, 100);
 D_imprimeVetor(v);

 puts("maior valor de v");
 printf("%lf\n", D_obtemMaiorValor(v));

 puts("menor valor de v");
 printf("%lf\n", D_obtemMenorValor(v));

 puts("quantidade de elementos iguais");
 printf("%d\n", D_qtdElementosIguais(v, 2));

 puts("media dos valores dos elementos");
 printf("%lf\n", D_mediaVetor(v));

 return 0;
}
