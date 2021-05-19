#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "tVetores_generico.h"

#undef tipo_
#undef tipado_
#undef formato_

#define tipo_ double
#define tipado_(nome) D_ ## nome
#define formato_ "lf"

#include "tVetores.c" 

#undef tipo_
#undef tipado_
#undef formato_


#define tipo_ long int
#define tipado_(nome) LI_ ## nome
#define formato_ "ld"

#include "tVetores.c" 

#undef tipo_
#undef tipado_
#undef formato_
