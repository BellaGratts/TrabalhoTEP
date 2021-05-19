#ifdef tipado_
#ifdef tipo_
#ifdef formato_

struct tipado_(vetor_st){     
  int n;
  int N;
  int i;
  tipo_* elemento;
};

//funçao que cria um vetor
tipado_(vetor_t)* tipado_(criaVetor)(int n) {
 
  tipado_(vetor_t)* vetor = (tipado_(vetor_t)*) malloc(sizeof(tipado_(vetor_t)));
   if (vetor == NULL){
    printf("Erro de alocação do vetor\n");
    exit(1);
   }
  
  vetor->N = 100;

  int i = 0;
  while (i < 5) {
      if (n == vetor->N) {
        vetor->N *= 2;
      }else if (n <= vetor->N/4) {
        vetor->N /= 2;
      }
      i++;
  }

  vetor->n = n;
  vetor->i = 0;
  vetor->elemento = (tipo_*) malloc(vetor->n * sizeof(tipo_));

  return vetor;
}

//funçao que imprime um vetor
void tipado_(imprimeVetor)(tipado_(vetor_t)* vetor) {
    char* texto = (char*) malloc(100);
    strcpy(texto,"");
    strcat(texto," %");
    strcat(texto,formato_);
    strcat(texto,"\n");

    for (int i = 0; i < vetor->n; ++i) {
      printf(texto,vetor->elemento[i]);
    }
    free(texto);
}

//funçao que destroi um vetor
void tipado_(destroiVetor)(tipado_(vetor_t)* vetor){
  free(vetor);
}

//funçao que cria uma cópia do vetor, criando um novo vetor
tipado_(vetor_t)* tipado_(criaCopia)(tipado_(vetor_t)* vetor) {
  tipado_(vetor_t)* copia = (tipado_(vetor_t)*) malloc(sizeof(tipado_(vetor_t)));
  copia->elemento = (tipo_*) malloc (vetor->n * sizeof(tipo_));
   if (copia == NULL){
    printf("Erro de alocação da copia do vetor\n");
    exit(1);
   }

  copia->n = vetor->n;
  copia->N = vetor->N;
  copia->i = vetor->i;
  copia->elemento = vetor->elemento;
  return copia;
}

//funçao que atribui uma cópia do vetor a outro vetor já existente
void tipado_(atribuiCopia)(tipado_(vetor_t)* vetor1, tipado_(vetor_t)* vetor2) {
  vetor1->n = vetor2->n;
  vetor1->N = vetor2->N;
  vetor1->i = vetor2->i;
  vetor1->elemento = vetor2->elemento;
}

//funçao que retorna o número atual(n) de elementos
int tipado_(retorna_n)(tipado_(vetor_t)* vetor3) {
  return vetor3->n;
}

//funçao que retorna o número máximo(N) de elementos
int tipado_(retornaN)(tipado_(vetor_t)* vetor4) {
  return vetor4->N;
}

//funçao que retorna o índice do elemento atual(i)
int tipado_(retorna_i)(tipado_(vetor_t)* vetor5) {
  return vetor5->i;
}

//funçao que retorna o primeiro elemento e posiciona “i” na primeira posição)
tipo_ tipado_(retornaPrimeiroElemento)(tipado_(vetor_t)* vetor6) {
  vetor6->i = 0;
  return vetor6->elemento[vetor6->i];
}

//funçao que retorna o próximo elemento (posicionando “i” nesta posição)
tipo_ tipado_(retornaProximoElemento)(tipado_(vetor_t)* vetor7) {
  vetor7->i += 1;
  return vetor7->elemento[vetor7->i];
}

//funçao que retorna o elemento anterior (posicionando “i” nesta posição)
tipo_ tipado_(retornaElementoAnterior)(tipado_(vetor_t)* vetor8) { 
  vetor8->i -= 1;
  return vetor8->elemento[vetor8->i];
}

//funçao que retorna o último elemento e posiciona “i” na última posição
tipo_ tipado_(retornaUltimoElemento)(tipado_(vetor_t)* vetor9) {
  vetor9->i = vetor9->n - 1;
  return vetor9->elemento[vetor9->i];
}

//funçao que retorna o elemento da i-ésima posição (lá posicionando o índice “a”)
tipo_ tipado_(retornaElementoI)(tipado_(vetor_t)* vetor10, int a) {
  vetor10->i = a;
  return vetor10->elemento[vetor10->i];
}

//funçao que atribui o valor “v” na i-ésima posição do vetor, posicionando ali o índice “b”
void tipado_(atribuiVEmI)(tipado_(vetor_t)* vetor11, int b, tipo_ valor) {
  vetor11->i = b;
  vetor11->elemento[vetor11->i] = valor;
}

//funçao que atribui o valor “v” depois da última posição do vetor, incrementando o “número atual de elementos”
void tipado_(atribuiVUltimaPosicao)(tipado_(vetor_t)* vetor12, double valor) {
  
  vetor12->n += 1;
  int i= 0;  
  while(i < 5) {
      if (vetor12->n == vetor12->N) {
        vetor12->N *= 2;
      }else if (vetor12->n <= vetor12->N / 4) {
        vetor12->N /= 2;
      }
      i++;
  }

  vetor12->elemento = realloc(vetor12->elemento, (vetor12->n) * sizeof(tipo_));
  vetor12->i = vetor12->n;
  vetor12->elemento[vetor12->i-1] = valor;
}

//funçao que elimina a i-ésima posição do vetor, devolvendo o seu valor atual e decrementando o “número atual de elementos”
tipo_ tipado_(eliminaVEmI)(tipado_(vetor_t)* vetor13, int indice) { 
  tipo_ aux = vetor13->elemento[indice - 1];
  for (int i = indice - 1; i < vetor13->n - 1; ++i) {
    vetor13->elemento[i] = vetor13->elemento[i+1];
  }

  vetor13->i = indice - 1;
  vetor13->n -= 1;

  int i= 0;  
  while(i < 5) {
    if (vetor13->n == vetor13->N) {
      vetor13->N *= 2;
    }else if (vetor13->n <= vetor13->N / 4) {
      vetor13->N /= 2;
    }
    i++;
    }

  vetor13->elemento = realloc(vetor13->elemento,vetor13->n * sizeof(tipo_));
  return aux;
}

//funçao que elimina todos os elementos do vetor;
void tipado_(eliminaTodosElementos)(tipado_(vetor_t)* vetor14) {
  vetor14->n = 0;
  vetor14->N = 0;
  vetor14->i = 0;
  free(vetor14->elemento);
}

//funçao que obtem o valor do elemento de maior módulo existente no vetor (e posicionar o índice atual naquela posição). Em caso de empate, qualquer uma das posições serve
tipo_ tipado_(obtemMaiorValor)(tipado_(vetor_t)* vetor15) {
  tipo_ maiorValor = 0;
  int indice;
  for (int i = 0; i < vetor15->n; i++) {
      if(maiorValor < fabs(vetor15->elemento[i])) {
        maiorValor = fabs(vetor15->elemento[i]);
        indice = i;
      }
  }
  
  vetor15->i = indice;
  return maiorValor;
}

//funçao que obtem o valor do elemento de menor módulo existente no vetor (e posicionar o índice atual naquela posição). Em caso de empate, qualquer uma das posições serve
tipo_ tipado_(obtemMenorValor)(tipado_(vetor_t)* vetor16) {
  tipo_ menorValor = vetor16->elemento[0];
  int indice;
  for (int i = 0; i < vetor16->n; i++) {
      if (fabs(vetor16->elemento[i]) < menorValor) {
        menorValor = fabs(vetor16->elemento[i]);
        indice = i;
      }
  }

  vetor16->i = indice;
  return menorValor;
}

//funçao que determina quantos dos elementos do vetor têm valor igual a “v” (considerar uma tolerância eps = 0.0001)
int tipado_(qtdElementosIguais)(tipado_(vetor_t)* vetor17, double valor) {
  int qtd = 0;
  for (int i = 0; i < vetor17->n; i++) {
    if (vetor17->elemento[i] - valor > -0.0001 && vetor17->elemento[i] - valor < 0.0001) {
      qtd++;
    }
  }
  return qtd;
}

//funçao que devolve um vetor com as posições dos elementos que têm valor igual a “v” (considerar uma tolerância eps = 0.0001)
tipado_(vetor_t)* tipado_(devolveElementosIguais)(tipado_(vetor_t)* vetor18, double valor) {
  int j = 0;
  for (int i = 0; i < vetor18->n; i++) {
    if (vetor18->elemento[i] - valor > -0.0001 && vetor18->elemento[i] - valor < 0.0001) {
      j++;
    }
  }
    
  tipado_(vetor_t)* novoVetor = (tipado_(vetor_t)*) malloc(sizeof(tipado_(vetor_t)));
  novoVetor->i = 0;
  novoVetor->N = 100;
  novoVetor->n = j;
  novoVetor->elemento = (tipo_*) malloc(j * sizeof(tipo_));

  if (j == 0) {
    return novoVetor;
  }

  int aux = 0;

  for (int i = 0; i < vetor18->n; i++) {
    if (vetor18->elemento[i] - valor > -0.0001 && vetor18->elemento[i] - valor < 0.0001) {
      novoVetor->elemento[aux] = i;
        aux++;
    }
  }

  int aux2 = 0;
  while (aux2 < 5) {
    if (j == novoVetor->N) {
      novoVetor->N *= 2;
    }else if (j <= novoVetor->N / 4) {
      novoVetor->N /= 2;
    }
   aux2 ++;
  }

  return novoVetor;
}

//funçao que ordena os elementos do vetor de acordo com uma função “critério de comparação”


//funçao que intercala dois vetores ordenados, criando um novo vetor igualmente ordenado, usando uma função “critério” que igualmente um argumento deste método de intercalação 

//funçao que soma dois vetores de mesmo tamanho criando um novo vetor (C = A + B)
tipado_(vetor_t)* tipado_(somaVetores)(tipado_(vetor_t)* vetor21, tipado_(vetor_t)* vetor22) {
  if (vetor21->n != vetor22->n) {
    return NULL;
  }
    
  tipado_(vetor_t)* soma = tipado_(criaVetor)(vetor21->n);

  for (int i = 0; i < vetor21->n; i++) {
    soma->elemento[i] = vetor21->elemento[i] + vetor22->elemento[i]; 
  }
    
  return soma;
}

//funçao que multiplica dois vetores (“produto interno”) gerando um valor “produto” (c = A . B)
tipo_ tipado_(multiplicaVetores)(tipado_(vetor_t)* vetor23, tipado_(vetor_t)* vetor24) {
  if (vetor23->n != vetor24->n) {
    return 0;
  }
  tipo_ multi = 0;
  for (int i = 0; i < vetor23->n; i++) {
    multi += vetor23->elemento[i] * vetor24->elemento[i];
  }

  return multi;
}

//funçao que subtrai um vetor de outro vetor, criando um novo vetor; (C = A – B)
tipado_(vetor_t)* tipado_(subtraiVetores)(tipado_(vetor_t)* vetor25, tipado_(vetor_t)* vetor26) {
  if (vetor25->n != vetor26->n) {
    return NULL;
  }

  tipado_(vetor_t)* subt = tipado_(criaVetor)(vetor25->n);

  for (int i = 0; i < vetor25->n; i++) {
    subt->elemento[i] = vetor25->elemento[i] - vetor26->elemento[i]; 
  }

  return subt;
}

//funçao que multiplica um vetor por um escalar, alterando os valores do vetor original (A = k * A)
void tipado_(multiplicaEscalar)(tipado_(vetor_t)* vetor27, tipo_ escalar) {
  for (int i = 0; i < vetor27->n; i++) {
    vetor27->elemento[i] *= escalar;
  }
}

//funçao que acumula um vetor B sobre um outro vetor A do mesmo tamanho, somando os elementos um-a-um (A = A+ B)
void tipado_(acumulaVetorAEmB)(tipado_(vetor_t)* vetor28, tipado_(vetor_t)* vetor29) {
  if (vetor28->n != vetor29->n) {
    exit(1);
  }
    
  for (int i = 0; i < vetor28->n; i++) {
    vetor28->elemento[i] += vetor29->elemento[i];
  }
}

//funçao que determina a média aritmética dos valores de um vetor
double tipado_(mediaVetor)(tipado_(vetor_t)* vetor30) {
    double media = 0;
    for (int i = 0; i < vetor30->n; i++) {
        media += vetor30->elemento[i];
    }
    media /= vetor30->n;
    return media;
}

//funçao que determina a variância dos valores de um vetor

//funçao que determina o desvio padrão dos valores de um vetor (raiz quadrada da variância)

//funçao que determina a mediana dos valores de um vetor (o valor que separa os 50% maiores dos 50% menores

//funçao que atribui valores aleatorios para um vetor
void tipado_(randomize)(tipado_(vetor_t)* pt, tipo_ max, int seed){
  srand(seed);
  for(size_t i=0;i<tipado_(retornaN)(pt);i++){
    *((*pt).elemento+i) = rand()%((long)max);
  }
}

#endif
#endif
#endif