#ifndef TRACIONAIS_H
#define TRACIONAIS_H

#include<stdio.h>
#include<stdlib.h>

typedef struct Racional_st tRacional;

int recursao_euclides(int a, int b);

void imprimeRecursao(int a, int b);

tRacional* CriaRacional(long int num, long int den);

void imprimeRacional(tRacional* Racional);

tRacional* alocaRacional();

void destroiRacional(tRacional* racional);

long int mmc(int num1, int num2);

tRacional* copiaRacional( tRacional* original);

int comparaRacional(tRacional* a, tRacional* b);

int verificaRacional(tRacional* c, tRacional* d);

int verificaDenominador(tRacional* e);

int verificaNumerador(tRacional* f);

int verificaNumEDen(tRacional* g);

tRacional* somaRacional( tRacional* h, tRacional* i);

tRacional* acumulaRacional(tRacional* u, tRacional* v);

tRacional* subtraiRacional( tRacional* k, tRacional* l);

tRacional* multiplicaRacional( tRacional* n, tRacional* o);

tRacional* multiplicaRacionalXemY(tRacional* x, tRacional* y);

tRacional* divideRacional( tRacional* q, tRacional* r);

tRacional* quadradoRacional(tRacional* t);

//tRacional* raizRacional;

double converteRacional(tRacional* ab, double bc);

//tRacional* converteDouble;

int verificaInteiro(tRacional* ad, double ae);

#endif