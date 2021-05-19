CC=gcc
CFLAGS= -Wall -lm

DEPS= tRacionais.h tComplexos_generico.h tVetores_generico.h

OBJ= main.o tRacionais.o tComplexos_generico.o tVetores_generico.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

codigo: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
	echo "Compilado!"
	./codigo

run: 
	./codigo

clean:
	rm -rf *.o main 