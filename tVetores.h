#ifndef TVETORES_H
#define TVETORES_H

typedef struct tipado_(vetor_st)* tipado_(vetor_pt);
typedef struct tipado_(vetor_st) tipado_(vetor_t);

tipado_(vetor_t)* tipado_(criaVetor)(int n);

void tipado_(imprimeVetor)(tipado_(vetor_t)* vetor);

void tipado_(destroiVetor)(tipado_(vetor_t)* vetor);

tipado_(vetor_t)* tipado_(criaCopia)(tipado_(vetor_t)* vetor);

void tipado_(atribuiCopia)(tipado_(vetor_t)* vetor1, tipado_(vetor_t)* vetor2);

int tipado_(retorna_n)(tipado_(vetor_t)* vetor3);

int tipado_(retornaN)(tipado_(vetor_t)* vetor4); 

int tipado_(retorna_i)(tipado_(vetor_t)* vetor5); 

tipo_ tipado_(retornaPrimeiroElemento)(tipado_(vetor_t)* vetor6);

tipo_ tipado_(retornaProximoElemento)(tipado_(vetor_t)* vetor7);

tipo_ tipado_(retornaElementoAnterior)(tipado_(vetor_t)* vetor8);

tipo_ tipado_(retornaUltimoElemento)(tipado_(vetor_t)* vetor9);

tipo_ tipado_(retornaElementoI)(tipado_(vetor_t)* vetor10, int a);

void tipado_(atribuiValorVEmI)(tipado_(vetor_t)* vetor11, int b, tipo_ valor);

void tipado_(atribuiVUltimaPosicao)(tipado_(vetor_t)* vetor12, double valor);

tipo_ tipado_(eliminaVEmI)(tipado_(vetor_t)* vetor13, int indice);

void tipado_(eliminaTodosElementos)(tipado_(vetor_t)* vetor14);

tipo_ tipado_(obtemMaiorValor)(tipado_(vetor_t)* vetor15);

tipo_ tipado_(obtemMenorValor)(tipado_(vetor_t)* vetor16);

int tipado_(qtdElementosIguais)(tipado_(vetor_t)* vetor17, double valor);

tipado_(vetor_t)* tipado_(devolveElementosIguais)(tipado_(vetor_t)* vetor18, double valor);

tipado_(vetor_t)* tipado_(somaVetores)(tipado_(vetor_t)* vetor21, tipado_(vetor_t)* vetor22);

tipo_ tipado_(multiplicaVetores)(tipado_(vetor_t)* vetor23, tipado_(vetor_t)* vetor24);

tipado_(vetor_t)* tipado_(subtraiVetores)(tipado_(vetor_t)* vetor25, tipado_(vetor_t)* vetor26);

void tipado_(multiplicaEscalar)(tipado_(vetor_t)* vetor27, tipo_ escalar);

void tipado_(acumulaVetorAEmB)(tipado_(vetor_t)* vetor28, tipado_(vetor_t)* vetor29);

double tipado_(mediaVetor)(tipado_(vetor_t)* vetor30);

void tipado_(randomize)(tipado_(vetor_t)* pt, tipo_ max, int seed);

#undef TVETORES_H

#endif