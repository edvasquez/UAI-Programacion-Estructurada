UNAME_S := $(shell uname -s)

# Compilacion
ifeq ($(UNAME_S),Darwin)
  CC := clang++ -arch x86_64
else
  CC := g++
endif

# Archivos binarios a borrar
binaries := Main Ejercicio_1 Ejercicio_2 Ejercicio_3 Ejercicio_4 Ejercicio_5a Ejercicio_5b Ejercicio_6 Ejercicio_7

# Archivo ejecutable
target := Estructuras_estaticas
targetWin := Estructuras_estaticas.exe

Estructuras_estaticas: Main.o Ejercicio_1.o Ejercicio_2.o Ejercicio_3.o Ejercicio_4.o Ejercicio_5a.o Ejercicio_5b.o Ejercicio_6.o Ejercicio_7.o
	$(CC) -o Estructuras_estaticas Main.o Ejercicio_1.o Ejercicio_2.o Ejercicio_3.o Ejercicio_4.o Ejercicio_5a.o Ejercicio_5b.o Ejercicio_6.o Ejercicio_7.o

Main.o: Main.c
	$(CC) -c Main.c
	
Ejercicio_1.o: Ejercicio_1.c
	$(CC) -c Ejercicio_1.c

Ejercicio_2.o: Ejercicio_2.c
	$(CC) -c Ejercicio_2.c

Ejercicio_3.o: Ejercicio_3.c
	$(CC) -c Ejercicio_3.c

Ejercicio_4.o: Ejercicio_4.c
	$(CC) -c Ejercicio_4.c 

Ejercicio_5a.o: Ejercicio_5a.c
	$(CC) -c Ejercicio_5a.c
	
Ejercicio_5b.o: Ejercicio_5b.c
	$(CC) -c Ejercicio_5b.c
	
Ejercicio_6.o: Ejercicio_6.c
	$(CC) -c Ejercicio_6.c
	
Ejercicio_7.o: Ejercicio_7.c
	$(CC) -c Ejercicio_7.c

clean:
	-rm -f $(binaries) *.o $(target) $(targetWin) 


