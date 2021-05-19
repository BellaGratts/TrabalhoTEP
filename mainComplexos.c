//Trabalho de TEP de Isabela Gratts dos Santos - Matricula 2020102546

#include <stdio.h>
#include <stdlib.h>
#include "tRacionais.h"
#include "tComplexos_generico.h"
#include "tVetores_generico.h"

int main(){
 puts("testes de complexos");
 double real=2, imag=5;
 D_complexo_pt f = D_criaComplexo(6,4);
 D_complexo_pt g = D_criaComplexo(4,6);
 D_complexo_pt h = D_criaComplexo(0,0);

 puts("cria complexo");
 D_complexo_pt var = D_criaComplexo(real, imag);
 D_imprimir_complexo(var);

 //D_atribuiComplexo(f, g);

 puts("copia2");
 D_complexo_pt copia2 = D_copiaComplexo(f);
 D_imprimir_complexo(copia2);

 printf("%d\n", D_moduloComplexo(g));

 printf("%d\n", D_ComplexoReal(g));

 printf("%d\n", D_ComplexoImag(g));

 printf("%d\n", D_comparaModulo(f, g));

 printf("%d\n", D_comparaAngulo(f, g));

 puts("modulo");
 printf("%lf\n", D_retornaModulo(g));

 puts("angulo");
 printf("%lf\n", D_retornaAngulo(g));

 //D_atribuiReal(f, 4);

 //D_atribuiImag(f, 6);

 puts("soma");
 D_somaComplexo(f, g, h);

 puts("subtracao");
 D_subtraiComplexo(f, g, h);

 puts("multiplicacao");
 D_multiplicaComplexo(f, g, h);

 puts("divisao");
 D_divideComplexo(f, g, h);

 puts("acumular g em f");
 D_acumulaComplexo(f, g);
 D_imprimir_complexo(f);

 puts("multiplicar g em f");
 D_multiplicandoComplexo(f, g);
 D_imprimir_complexo(g);

 puts("varias operacoes");
 D_operacaoComplexo(f, g, h, "+");
 D_imprimir_complexo(h);

 return 0;
}
