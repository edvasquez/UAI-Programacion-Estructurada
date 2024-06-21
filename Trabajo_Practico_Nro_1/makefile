UNAME_S := $(shell uname -s)

# Compilacion
ifeq ($(UNAME_S),Darwin)
  CC := clang++ -arch x86_64
else
  CC := g++
endif

# Archivos binarios a borrar
binaries := main Ejercicio_1 Ejercicio_2 Ejercicio_3 Ejercicio_4 Ejercicio_5 Ejercicio_6 Ejercicio_7 Ejercicio_8 Ejercicio_9 Ejercicio_10

# Archivo ejecutable
target := Primer_Programa_c
targetWin := Primer_Programa_c.exe

Primer_Programa_c: main.o Ejercicio_1.o Ejercicio_2.o Ejercicio_3.o Ejercicio_4.o Ejercicio_5.o Ejercicio_6.o Ejercicio_7.o Ejercicio_8.o Ejercicio_9.o Ejercicio_10.o
	$(CC) -o Primer_Programa_c main.o Ejercicio_1.o Ejercicio_2.o Ejercicio_3.o Ejercicio_4.o Ejercicio_5.o Ejercicio_6.o Ejercicio_7.o Ejercicio_8.o Ejercicio_9.o Ejercicio_10.o

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

Ejercicio_9.o: Ejercicio_9.c
	$(CC) -c Ejercicio_9.c

Ejercicio_10.o: Ejercicio_10.c
	$(CC) -c Ejercicio_10.c

clean:
	-rm -f $(binaries) *.o $(target) $(targetWin) 


