UNAME_S := $(shell uname -s)

# Compilacion
ifeq ($(UNAME_S),Darwin)
  CC := clang++ -arch x86_64
else
  CC := g++
endif

# Archivos binarios a borrar
binaries := Main Ejercicio_1 Ejercicio_2 Ejercicio_3 Ejercicio_4 Ejercicio_5

# Archivo ejecutable
target := Estructuras_repeticion_exactos
targetWin := Estructuras_repeticion_exactos.exe

Primer_Programa_c: Main.o Ejercicio_1.o Ejercicio_2.o Ejercicio_3.o Ejercicio_4.o Ejercicio_5.o
	$(CC) -o Estructuras_repeticion_exactos Main.o Ejercicio_1.o Ejercicio_2.o Ejercicio_3.o Ejercicio_4.o Ejercicio_5.o

main.o: main.c
	$(CC) -c Main.c
	
Ejercicio_1.o: Ejercicio_1.c
	$(CC) -c Ejercicio_1.c

Ejercicio_2.o: Ejercicio_2.c
	$(CC) -c Ejercicio_2.c

Ejercicio_3.o: Ejercicio_3.c
	$(CC) -c Ejercicio_3.c

Ejercicio_4.o: Ejercicio_4.c
	$(CC) -c Ejercicio_4.c 

Ejercicio_5.o: Ejercicio_5.c
	$(CC) -c Ejercicio_5.c

clean:
	-rm -f $(binaries) *.o $(target) $(targetWin) 


