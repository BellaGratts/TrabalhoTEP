#ifndef TCOMPLEXOS_H
#define TCOMPLEXOS_H

typedef struct TIPADO_(complexo_st)* TIPADO_(complexo_pt);
typedef struct TIPADO_(complexo_st) TIPADO_(complexo_t);

TIPADO_(complexo_t)* TIPADO_(criaComplexo)(TIPO_ real, TIPO_ imag);

void TIPADO_(destroiComplexo)(TIPADO_(complexo_t)* complexo);

void TIPADO_(imprimir_complexo)(TIPADO_(complexo_t)* complexo);

void TIPADO_(atribuiComplexo)(TIPADO_(complexo_t)* complexo1, TIPADO_(complexo_t)* complexo2);

TIPADO_(complexo_t)* TIPADO_(copiaComplexo)(TIPADO_(complexo_t)* complexo);

int TIPADO_(moduloComplexo)(TIPADO_(complexo_t)* complexo10);

int TIPADO_(ComplexoReal)(TIPADO_(complexo_t)* complexo11);

int TIPADO_(ComplexoImag)(TIPADO_(complexo_t)* complexo12);

int TIPADO_(comparaModulo)(TIPADO_(complexo_t)* complexo13, TIPADO_(complexo_t)* complexo14);

int TIPADO_(comparaAngulo)(TIPADO_(complexo_t)* complexo15, TIPADO_(complexo_t)* complexo16);

TIPO_* TIPADO_(retornaReal)(TIPADO_(complexo_t)* complexo17);

TIPO_* TIPADO_(retornaImag)(TIPADO_(complexo_t)* complexo18);

double TIPADO_(retornaModulo)(TIPADO_(complexo_t)* complexo19);

double TIPADO_(retornaAngulo)(TIPADO_(complexo_t)* complexo20);

TIPO_* TIPADO_(atribuiReal)(TIPADO_(complexo_t)* complexo21, double valor);

TIPO_* TIPADO_(atribuiImag)(TIPADO_(complexo_t)* complexo22, double valor2);

TIPADO_(complexo_t)* TIPADO_(calculaConjugado)(TIPADO_(complexo_t)* complexo23);

TIPADO_(complexo_t)* TIPADO_(somaComplexo)(TIPADO_(complexo_t)* complexo24, TIPADO_(complexo_t)* complexo25, TIPADO_(complexo_t)* complexo26);

TIPADO_(complexo_t)* TIPADO_(subtraiComplexo)(TIPADO_(complexo_t)* complexo27, TIPADO_(complexo_t)* complexo28, TIPADO_(complexo_t)* complexo29);

TIPADO_(complexo_t)* TIPADO_(multiplicaComplexo)(TIPADO_(complexo_t)* complexo30, TIPADO_(complexo_t)* complexo31, TIPADO_(complexo_t)* complexo32);

TIPADO_(complexo_t)* TIPADO_(divideComplexo)(TIPADO_(complexo_t)* a, TIPADO_(complexo_t)* b, TIPADO_(complexo_t)* c);

TIPADO_(complexo_t)* TIPADO_(acumulaComplexo)(TIPADO_(complexo_t)* complexo36, TIPADO_(complexo_t)* complexo37);

TIPADO_(complexo_t)* TIPADO_(multiplicandoComplexo)(TIPADO_(complexo_t)* complexo38, TIPADO_(complexo_t)* complexo39);

TIPADO_(complexo_t)*TIPADO_(operacaoComplexo)(TIPADO_(complexo_t)* complexo40, TIPADO_(complexo_t)* complexo41, TIPADO_(complexo_t)* complexo42,char * oper);

#undef TCOMPLEXOS_H

#endif