#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "tComplexos_generico.h"

#undef TIPO_
#undef TIPADO_
#undef FORMATO_

#define TIPO_ double
#define TIPADO_(nome) D_ ## nome
#define FORMATO_ "lf"

#include "tComplexos.c" 

#undef TIPO_
#undef TIPADO_
#undef FORMATO_


#define TIPO_ long int
#define TIPADO_(nome) LI_ ## nome
#define FORMATO_ "ld"

#include "tComplexos.c" 

#undef TIPO_
#undef TIPADO_
#undef FORMATO_

/*LI_complexo_t* DoubleParaLI(D_complexo_t* complexo) {
  LI_complexo_t* inteiro = (LI_complexo_t*) malloc(sizeof(LI_complexo_t));
  inteiro->real = round(complexo->real);
  inteiro->imag = round(complexo->imag);
  return inteiro;
}

D_complexo_t* LIparaDouble(LI_complexo_t* complexo) {
  D_complexo_t* var = (D_complexo_t*) malloc(sizeof(D_complexo_t));
  var->real = (double)complexo->real;
  var->imag = (double)complexo->imag;

  return var;
}*/