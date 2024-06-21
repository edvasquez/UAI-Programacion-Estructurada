UNAME_S := $(shell uname -s)

# Compilacion
ifeq ($(UNAME_S),Darwin)
  CC := clang++ -arch x86_64
else
  CC := g++
endif

# Archivos binarios a borrar
binaries := main Ejercicio_1 Ejercicio_2 Ejercicio_3 Ejercicio_4 Ejercicio_5 Ejercicio_6 Ejercicio_7 Ejercicio_8 Ejercicio_10 Ejercicio_11 Ejercicio_12 Ejercicio_13 Ejercicio_14

# Archivo ejecutable
target := Estructura_Condicional
targetWin := Estructura_Condicional.exe

Primer_Programa_TP1: main.o Ejercicio_1.o Ejercicio_2.o Ejercicio_3.o Ejercicio_4.o Ejercicio_5.o Ejercicio_6.o Ejercicio_7.o Ejercicio_8.o Ejercicio_10.o Ejercicio_11.o Ejercicio_12.o Ejercicio_13.o Ejercicio_14.o
	$(CC) -o Estructura_Condicional main.o Ejercicio_1.o Ejercicio_2.o Ejercicio_3.o Ejercicio_4.o Ejercicio_5.o Ejercicio_6.o Ejercicio_7.o Ejercicio_8.o Ejercicio_10.o Ejercicio_11.o Ejercicio_12.o Ejercicio_13.o Ejercicio_14.o

main.o: main.c
	$(CC) -c main.c
	
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

Ejercicio_6.o: Ejercicio_6.c
	$(CC) -c Ejercicio_6.c
	
Ejercicio_7.o: Ejercicio_7.c
	$(CC) -c Ejercicio_7.c
	
Ejercicio_8.o: Ejercicio_8.c
	$(CC) -c Ejercicio_8.c

Ejercicio_10.o: Ejercicio_10.c
	$(CC) -c Ejercicio_10.c

Ejercicio_11.o: Ejercicio_11.c
	$(CC) -c Ejercicio_11.c

Ejercicio_12.o: Ejercicio_12.c
	$(CC) -c Ejercicio_12.c
	
Ejercicio_13.o: Ejercicio_13.c
	$(CC) -c Ejercicio_13.c

Ejercicio_14.o: Ejercicio_14.c
	$(CC) -c Ejercicio_14.c

clean:
	-rm -f $(binaries) *.o $(target) $(targetWin) 


