//Trabalho de TEP de Isabela Gratts dos Santos - Matricula 2020102546

#include <stdio.h>
#include <stdlib.h>
#include "tRacionais.h"
#include "tComplexos_generico.h"
#include "tVetores_generico.h"

int main(){
 puts("testes de racionais");
  int a=700; int b=70;
  long int num=20; long int den=25;
  tRacional* nome;
  tRacional* original=CriaRacional(1, 4);
  tRacional* copia;
  tRacional* c= CriaRacional(-6000,3000);
  tRacional* d= CriaRacional(5,2);
  double e=0;

  recursao_euclides(a, b);

  imprimeRecursao(a, b);

  nome=CriaRacional(num, den);

  imprimeRacional(nome);

  destroiRacional(nome);

  copia=copiaRacional(original);

  imprimeRacional(copia);

  printf("%d\n", comparaRacional(c,d));

  printf("%d\n", verificaRacional(c,d));

  printf("%d\n", verificaDenominador(c));

  printf("%d\n", verificaNumerador(c));

  printf("%d\n", verificaNumEDen(c));

  somaRacional(c, d);

  acumulaRacional(c, d);

  subtraiRacional(c, d);

  multiplicaRacional(c, d);

  multiplicaRacionalXemY(c, d);

  divideRacional(c, d);

  quadradoRacional(c);

  converteRacional(c, e);

  printf("%d\n", verificaInteiro(c, e));

 return 0;
}
