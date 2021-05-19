#ifndef TCOMPLEXOS_GENERICO_H
#define TCOMPLEXOS_GENERICO_H

#define TIPO_ double
#define TIPADO_(nome) D_ ## nome
#define FORMATO_ "lf"

#include "tComplexos.h"

#undef TIPO_
#undef TIPADO_
#undef FORMATO_

#define TIPO_ long int
#define TIPADO_(nome) LI_ ## nome
#define FORMATO_ "ld"

#include "tComplexos.h"

#undef TIPO_
#undef TIPADO_
#undef FORMATO_

//LI_complexo_t * DoubleParaLI (D_complexo_t * complexo);

//D_complexo_t * LIparaDouble (LI_complexo_t * complexo);

#endif