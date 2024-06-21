UNAME_S := $(shell uname -s)

# Compilacion
ifeq ($(UNAME_S),Darwin)
  CC := clang++ -arch x86_64
else
  CC := g++
endif

# Archivos binarios a borrar
binaries := Main.o Ejercicio_1.o Ejercicio_2.o Ejercicio_3.o Ejercicio_4.o Ejercicio_5.o

# Archivo ejecutable
target := TP_Subrutinas
targetWin := TP_Subrutinas.exe

TP_Subrutinas: Main.o Ejercicio_1.o Ejercicio_2.o Ejercicio_3.o Ejercicio_4.o Ejercicio_5.o
	$(CC) -o TP_Subrutinas Main.o Ejercicio_1.o Ejercicio_2.o Ejercicio_3.o Ejercicio_4.o Ejercicio_5.o

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
	
Ejercicio_6.o: Ejercicio_6.c
	$(CC) -c Ejercicio_6.c

clean:
	-rm -f $(binaries) $(target) $(targetWin) 


