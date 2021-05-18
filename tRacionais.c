#include <stdio.h>
#include <stdlib.h>
#include "tRacionais.h"

//struct que determina o formato de um racional
struct Racional_st{ 
  long int num;
  long int den;
};

//funçao que calcula o algoritmo euclidiano
int recursao_euclides(int a, int b){
  
  int aux;

  if(a<0){
    a = (-1)*a;
  }
  if(b<0){
    b= (-1)*b;
  }

  if(a>b){
    aux = a;
    a = b;
    b = aux;
  }

  if(b%a == 0){
    return a;
  }else{
    return recursao_euclides(b%a, a);
  }
} 

//funçao que imprime o valor da recursao para teste
void imprimeRecursao(int a, int b){
  printf("Algoritmo de Euclides: %d\n", recursao_euclides(a, b));
}

//funçao que cria um racional alocando um espaço de memoria para ele
tRacional* CriaRacional(long int num, long int den){
  tRacional* Racional = alocaRacional();
  Racional->num= num;
  Racional->den= den;
  return Racional;
}

//funçao que imprime o valor de um racional para teste
void imprimeRacional(tRacional* Racional){
  printf("Racional: %ld/%ld\n", Racional->num, Racional->den);
}

//funçao que aloca o racional e testa se teve erro
tRacional* alocaRacional(){
  tRacional* racional = (tRacional*) malloc(sizeof(tRacional));
  if (racional == NULL){
    printf("Erro de alocação do racional\n");
    exit(1);
  }
  return racional;
}

//funçao que libera o racional alocado
void destroiRacional(tRacional* racional){
  free(racional);
}

//funçao que copia um racional em outro
tRacional* copiaRacional( tRacional* original){
   if (original == NULL){
    printf("Erro de alocação do racional\n");
    exit(1);
  }
  tRacional* copia = CriaRacional(original->num, original->den);
  return copia;
}

//funçao que calcula mmc para utilizaçao em futuras funçoes
long int mmc(int num1, int num2) {

    long int mmc, aux, i;

    for (i = 2; i <= num2; i++) {
        aux = num1 * i;
        if ((aux % num2) == 0) {
            mmc = aux;
            i = num2 + 1;
        }
    }
    return mmc;
}

//funçao que compara dois racionais
int comparaRacional(tRacional* a, tRacional* b){
   long int Mmc;
   Mmc= mmc(a->den,b->den);

   long int nA= a->num * Mmc/a->den;
   long int nB= b->num * Mmc/b->den;

   if (nA == nB){
    return 0;  
   } else if (nA < nB){
    return -1;
   } else{
    return 1;
   }
}

//funçao que verifica se dois racionais sao equivalentes
int verificaRacional(tRacional* c, tRacional* d){
 int mdc= recursao_euclides(c->num, c->den);
 int Mdc= recursao_euclides(d->num, d->den);

 c->num= c->num/mdc;
 c->den= c->den/mdc;

 d->num= d->num/Mdc;
 d->den= d->den/Mdc;
 
 if (comparaRacional(c,d) == 0){
   return 0;
 } else{
   return 1;
 }
}

//funçao que verifica se o denominador eh 0
int verificaDenominador(tRacional* e){
  if( e->den == 0){
    return 0;
  } else{
    return 1;
  }
}

//funçao que verifica se o numerador eh 0
int verificaNumerador(tRacional* f){
  if( f->num == 0){
    return 0;
  } else{
    return 1;
  }
}

//funçao que verifica se numerador e denominador sao 0
int verificaNumEDen(tRacional* g){
  if( g->num == 0 && g->den == 0){
    return 0;
  } else{
    return 1;
  }
}

//funçao que soma dois racionais e retorna a soma
tRacional* somaRacional( tRacional* h, tRacional* i){
  tRacional* j = alocaRacional();

  if (h->den == i->den){
   j->num = (h->num + i->num);
   j->den = (h->den);
  }else{
   j->num = (h->num * i->den)+(i->num * h->den);
   j->den = (h->den * i->den);
  }
 printf("Soma Racional: %ld/%ld\n", j->num, j->den);
 return j;
 free(j);
}

//funçao que acumula um racional b em outro racional a
tRacional* acumulaRacional(tRacional* u, tRacional* v){
  tRacional* w = alocaRacional();
  if (u->den == v->den){
   w->num = (u->num + v->num);
   w->den = (v->den);
  }else{
   w->num = (u->num * v->den)+(v->num * u->den);
   w->den = (u->den * v->den);
  }
  printf("Acumula Racional: %ld/%ld\n", w->num, w->den);
 return w;
 free(w);
}

//funçao que subtrai dois racionais e retorna a subtraçao
tRacional* subtraiRacional( tRacional* k, tRacional* l){
  tRacional* m = alocaRacional();

  if (k->den == l->den){
   m->num = (k->num - l->num);
   m->den = (k->den);
  }else{
   m->num = (k->num * l->den)-(l->num * k->den);
   m->den = (k->den * l->den);
  }
 printf("Subtraçao Racional: %ld/%ld\n", m->num, m->den);
 return m;
 free(m);
}

//funçao que multiplica dois racionais e retorna a multiplicacao
tRacional* multiplicaRacional( tRacional* n, tRacional* o){
  tRacional* p = alocaRacional();

  p->num = (n->num * o->num);
  p->den = (n->den * o->den);
 printf("Multiplicacao Racional: %ld/%ld\n", p->num, p->den);
 return p;
 free(p);
}


//funçao que multiplica um racional x em um outro racional y
tRacional* multiplicaRacionalXemY(tRacional* x, tRacional* y){
 tRacional* z = alocaRacional();

 z->num = (x->num * y->num);
 z->den = (x->den * y->den);

 printf("Multiplicacao Racional X em Y: %ld/%ld\n", z->num, z->den);
 return z;
 free(z);
}

//funçao que divide dois racionais e retorna a divisao
tRacional* divideRacional( tRacional* q, tRacional* r){
  tRacional* s = alocaRacional();

  s->num = (q->num * r->den);
  s->den = (q->den * r->num);
 printf("Divisao Racional: %ld/%ld\n", s->num, s->den);
 return s;
 free(s);
}

//funçao que calcula o quadrado de um racional
tRacional* quadradoRacional(tRacional* t){
  tRacional* wa = alocaRacional();
  wa->num = (t->num * t->num);
  wa->den = (t->den * t->den);
 printf("Quadrado Racional: %ld/%ld\n", wa->num, wa->den);
 return wa;
 free(wa);
}

//tRacional* raizRacional;

//funçao que converte um racional para double 
double converteRacional(tRacional* ab, double ac){
  imprimeRacional(ab);
  ac= ((double) ab->num / ab->den);
 printf("Double: %lf\n", ac);
 return ac;
}

// tRacional* converteDouble;

//funçao que verifica se um racional pode ser convertido em inteiro
int verificaInteiro(tRacional* ad, double ae){
  ae = ((double)ad->num / ad->den);
  int ac = ae;
  
  if (ac == ae){
    return 0; 
  } else{
    return 1;
  }
}