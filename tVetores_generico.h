#ifndef TVETORES_GENERICO_H
#define TVETORES_GENERICO_H

#define tipo_ double
#define tipado_(nome) D_ ## nome
#define formato_ "lf"

#include "tVetores.h"

#undef tipo_
#undef tipado_
#undef formato_

#define tipo_ long int
#define tipado_(nome) LI_ ## nome
#define formato_ "ld"

#include "tVetores.h"

#undef tipo_
#undef tipado_
#undef formato_


#endif