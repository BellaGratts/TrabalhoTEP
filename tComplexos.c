#ifdef TIPADO_
#ifdef TIPO_
#ifdef FORMATO_

struct TIPADO_(complexo_st){     
  TIPO_* real;                
  TIPO_* imag;                           
};

//funçao que cria um complexo         
TIPADO_(complexo_t)* TIPADO_(criaComplexo)(TIPO_ real, TIPO_ imag){
   TIPADO_(complexo_t)* complexo = (TIPADO_(complexo_t)*) malloc(sizeof(TIPADO_(complexo_t)));
   if (complexo == NULL){
    printf("Erro de alocação do complexo criado\n");
    exit(1);
   }
   complexo->real = (TIPO_*) malloc(sizeof(TIPO_));
   complexo->imag = (TIPO_*) malloc(sizeof(TIPO_));
   *(complexo->real)= real;
   *(complexo->imag)= imag;
   return complexo;
}

//funçao que imprime um complexo
void TIPADO_(imprimir_complexo)(TIPADO_(complexo_t)* complexo){
    char* texto = (char*) malloc(100);
    strcpy(texto, "real: %");
    strcat(texto, FORMATO_);
    strcat(texto, " imag: %");
    strcat(texto, FORMATO_);
    strcat(texto, "\n");
    printf(texto, *(complexo->real), *(complexo->imag));
    free(texto);
}

//funçao que atribui um complexo em outro
void TIPADO_(atribuiComplexo)(TIPADO_(complexo_t)* complexo1, TIPADO_(complexo_t)* complexo2){
  complexo1->real = complexo2->real;
  complexo1->imag = complexo2->imag;
}

//funçao que copia um complexo em outro
TIPADO_(complexo_t)* TIPADO_(copiaComplexo)(TIPADO_(complexo_t)* complexo3){
  TIPADO_(complexo_t)* copia = (TIPADO_(complexo_t)*) malloc(sizeof(TIPADO_(complexo_t)));
  if (copia == NULL){
    printf("Erro de alocação da copia do complexo\n");
    exit(1);
  }
  copia->real = complexo3->real;
  copia->imag = complexo3->imag;
  return copia;
}

//funçoes que converte um complexo de um "tipo" em outro
//Double p/ int 
//Int p double
//Double p racional
//Racional p double
//Racional p int
//Int p Racional

//funçao que verifica se o módulo de um número complexo é zero
int TIPADO_(moduloComplexo)(TIPADO_(complexo_t)* complexo10){
 double modulo = sqrt((*(complexo10->real)**(complexo10->real)) + (*(complexo10->imag)* *(complexo10->imag)));
 if(modulo <= 0.00001){
   return 0;
 }else{
   return 1;
 }
}

//funçao que verifica se um número complexo é apenas real
int TIPADO_(ComplexoReal)(TIPADO_(complexo_t)* complexo11){
  if(*(complexo11->imag) >= -0.00001 && *(complexo11->imag) <= 0.00001){
    return 0;
  }else{
    return 1;
  }
}

//funçao que verifica se um número complexo é apenas imaginário
int TIPADO_(ComplexoImag)(TIPADO_(complexo_t)* complexo12){
  if(*(complexo12->real) >= -0.00001 && *(complexo12->real) <= 0.00001){
    return 0;
  }else{
    return 1;
  }
}

//funçao que compara se um número complexo é igual, menor ou maior que outro usando seu modulo
int TIPADO_(comparaModulo)(TIPADO_(complexo_t)* complexo13, TIPADO_(complexo_t)* complexo14){
 double modulo1 = sqrt(*(complexo13->real)* *(complexo13->real) + *(complexo13->imag)**(complexo13->imag));

 double modulo2 = sqrt(*(complexo14->real)* *(complexo14->real) + *(complexo14->imag)**(complexo14->imag));

 if(modulo1 == modulo2){
   return 1;
 }else if(modulo1 > modulo2){
   return 2;
 }else{
   return 0;
 }
}

//funçao que compara se um número complexo é igual, menor ou maior que outro usando seu angulo
int TIPADO_(comparaAngulo)(TIPADO_(complexo_t)* complexo15, TIPADO_(complexo_t)* complexo16){
  double tangente1 = *(complexo15->imag)/ *(complexo15->real);
  double tangente2 = *(complexo16->imag)/ *(complexo16->real);
  double angulo1=0, angulo2=0;
  angulo1= atan(tangente1);
  angulo2= atan(tangente2);
  
  if(angulo1 == angulo2){
   return 1;
  }else if(angulo1 > angulo2){
   return 2;
  }else{
   return 0;
  }
}

//funçao que retorna a parte real de um complexo
TIPO_* TIPADO_(retornaReal)(TIPADO_(complexo_t)* complexo17){
  return complexo17->real;
}

//funçao que retorna a parte imaginária de um complexo
TIPO_* TIPADO_(retornaImag)(TIPADO_(complexo_t)* complexo18){
  return complexo18->imag;
}

//funçao que retorna a magnitude de um número complexo
double TIPADO_(retornaModulo)(TIPADO_(complexo_t)* complexo19){
  double modulo = sqrt(*(complexo19->real)* *(complexo19->real) + *(complexo19->imag)* *(complexo19->imag));
  
  return modulo;
}

//funçao que retorna o ângulo de um número complexo
double TIPADO_(retornaAngulo)(TIPADO_(complexo_t)* complexo20){
  double tangente = *(complexo20->imag)/ *(complexo20->real);
  double angulo;
  angulo= atan(tangente);

  return angulo;
}

//funçao que atribui novo valor à parte real de um número complexo
TIPO_* TIPADO_(atribuiReal)(TIPADO_(complexo_t)* complexo21, double valor){
  *(complexo21->real)= *(complexo21->real) + valor;

  TIPADO_(imprimir_complexo)(complexo21);

 return complexo21->real;
}

//funçao que atribui novo valor à parte imaginária de um número complexo
TIPO_* TIPADO_(atribuiImag)(TIPADO_(complexo_t)* complexo22, double valor2){
  *(complexo22->imag)= *(complexo22->imag) + valor2;

  TIPADO_(imprimir_complexo)(complexo22);

 return complexo22->imag;
}

//funçao que atribui novo valor ao modulo de um número complexo mantendo seu ângulo

//funçao que atribui novo valor ao angulo de um número complexo mantendo o seu módulo

//funçao que calcula o conjugado de um número complexo
 TIPADO_(complexo_t)* TIPADO_(calculaConjugado)(TIPADO_(complexo_t)* complexo23){
  *(complexo23->imag)= *(complexo23->imag)*(-1);

 return complexo23;
}

//funçao que soma dois numeros complexos, gerando um terceiro
TIPADO_(complexo_t)* TIPADO_(somaComplexo)(TIPADO_(complexo_t)* complexo24, TIPADO_(complexo_t)* complexo25, TIPADO_(complexo_t)* complexo26){
  
  *(complexo26->real) = *(complexo24->real) + *(complexo25->real); 
  *(complexo26->imag) = *(complexo24->imag) + *(complexo25->imag); 

 TIPADO_(imprimir_complexo)(complexo26);
 return complexo26;
}

//funçao que subtrai dois numeros complexos, gerando um terceiro
TIPADO_(complexo_t)* TIPADO_(subtraiComplexo)(TIPADO_(complexo_t)* complexo27, TIPADO_(complexo_t)* complexo28, TIPADO_(complexo_t)* complexo29){
  
  *(complexo29->real) = *(complexo27->real) - *(complexo28->real); 
  *(complexo29->imag) = *(complexo27->imag) - *(complexo28->imag); 

 TIPADO_(imprimir_complexo)(complexo29);
 return complexo29;
}

//funçao que multiplica dois numeros complexos, gerando um terceiro
TIPADO_(complexo_t)* TIPADO_(multiplicaComplexo)(TIPADO_(complexo_t)* complexo30, TIPADO_(complexo_t)* complexo31, TIPADO_(complexo_t)* complexo32){

  *(complexo32->real) = (*(complexo30->real) * *(complexo31->real)) + (-1 * (*(complexo30->imag) * *(complexo31->imag))); 
  *(complexo32->imag) = (*(complexo30->real) * *(complexo31->imag)) + (*(complexo30->imag) * *(complexo31->real));

 TIPADO_(imprimir_complexo)(complexo32);
 return complexo32;
}

//funçao que divide dois numeros complexos, gerando um terceiro
TIPADO_(complexo_t)* TIPADO_(divideComplexo)(TIPADO_(complexo_t)* a, TIPADO_(complexo_t)* b, TIPADO_(complexo_t)* c){
 *(b->imag)= *(b->imag) * (-1);

 *(c->real)= ((*(a->real) * *(b->real)) + (*(a->imag) * *(b->imag))) / ((*(b->real) * *(b->real))+ (*(b->real)* *(b->imag)));

 *(c->imag)= (*(a->imag) * *(b->real)) / (*(b->imag) * *(b->real));

 TIPADO_(imprimir_complexo)(c);
 return c;
}

//funçao que “acumula” somando (a += b)
TIPADO_(complexo_t)* TIPADO_(acumulaComplexo)(TIPADO_(complexo_t)* complexo36, TIPADO_(complexo_t)* complexo37){
  *(complexo36->real) += *(complexo37->real);
  *(complexo36->imag) += *(complexo37->imag);

  return complexo36;
}

//funçao que multiplica (a *= b)
TIPADO_(complexo_t)* TIPADO_(multiplicandoComplexo)(TIPADO_(complexo_t)* complexo38, TIPADO_(complexo_t)* complexo39){
  
  *(complexo38->real) = (*(complexo38->real) * *(complexo39->real)) - (*(complexo38->imag) * *(complexo39->imag)); 
  *(complexo38->imag) = (*(complexo38->real) * *(complexo39->imag)) + (*(complexo38->imag) * *(complexo39->real));

  return complexo38;
}

//funçao que executa uma das seis operações acima, dependendo da string “operação” recebida como argumento
TIPADO_(complexo_t)* TIPADO_(operacaoComplexo)(TIPADO_(complexo_t)* complexo40, TIPADO_(complexo_t)* complexo41, TIPADO_(complexo_t)* complexo42,char * oper){
 
 if(!strcmp(oper, "+")){
  *(complexo42->real) = *(complexo40->real) + *(complexo41->real); 
  *(complexo42->imag) = *(complexo40->imag) + *(complexo41->imag);
  return complexo42;
 }else if(!strcmp(oper, "-")){
  *(complexo42->real) = *(complexo40->real) - *(complexo41->real); 
  *(complexo42->imag) = *(complexo40->imag) - *(complexo41->imag);
  return complexo42;
 }else if(!strcmp(oper, "*")){ 
  *(complexo42->real) = (*(complexo40->real) * *(complexo41->real)) - (*(complexo40->imag) * *(complexo41->imag)); 
  *(complexo42->imag) = (*(complexo40->real) * *(complexo41->imag)) + (*(complexo40->imag) * *(complexo41->real));
  return complexo42;
 }else if(!strcmp(oper, "/")){
  *(complexo41->imag)= *(complexo41->imag) * (-1);
  *(complexo42->real)= ((*(complexo40->real) * *(complexo41->real)) + (*(complexo40->imag) * *(complexo41->imag))) / ((*(complexo41->real) * *(complexo41->real))+ (*(complexo41->real)* *(complexo41->imag)));
  *(complexo42->imag)= (*(complexo40->imag) * *(complexo41->real)) / (*(complexo41->imag) * *(complexo41->real));
  TIPADO_(imprimir_complexo)(complexo42);
  return complexo42;
 }else if(!strcmp(oper, "+=")){
  *(complexo40->real) += *(complexo41->real);
  *(complexo40->imag) += *(complexo41->imag);
  return complexo40;
 }else {
  *(complexo40->real) *= *(complexo41->real);
  *(complexo40->imag) *= *(complexo41->imag);
  return complexo40;
 }
}

#endif
#endif
#endif