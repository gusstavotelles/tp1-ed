
CC=g++ 
CFLAGS=-Wall -Wextra 
EXEC=./tp1.exe 
TMPOUT=./tp1.testresult

$(EXEC): main.cpp nave.o tipoitem.o tipocelula.o pilha.o fila.o lista.o pilhaencadeada.o listaencadeada.o filaencadeada.o  
	$(CC) $(CFLAGS) main.cpp tipoitem.o tipocelula.o nave.o pilha.o fila.o lista.o pilhaencadeada.o listaencadeada.o filaencadeada.o -o $(EXEC)

tipoitem.o: ./headers/TipoItem.hpp  ./headers/TipoItem.cpp 
	$(CC) $(CFLAGS) -c ./headers/TipoItem.cpp -o tipoitem.o

tipocelula.o: ./headers/TipoCelula.hpp  ./headers/TipoCelula.cpp 
	$(CC) $(CFLAGS) -c ./headers/TipoCelula.cpp -o tipocelula.o

pilha.o: ./headers/Pilha.hpp  ./headers/Pilha.cpp 
	$(CC) $(CFLAGS) -c ./headers/Pilha.cpp -o pilha.o
	
fila.o: ./headers/Fila.hpp  ./headers/Fila.cpp 
	$(CC) $(CFLAGS) -c ./headers/Fila.cpp -o fila.o

lista.o: ./headers/Lista.hpp  ./headers/Lista.cpp 
	$(CC) $(CFLAGS) -c ./headers/Lista.cpp -o lista.o

nave.o: ./headers/Nave.cpp 
	$(CC) $(CFLAGS) -c ./headers/Nave.cpp -o nave.o

pilhaencadeada.o: ./headers/PilhaEncadeada.hpp  ./headers/PilhaEncadeada.cpp 
	$(CC) $(CFLAGS) -c ./headers/PilhaEncadeada.cpp -o pilhaencadeada.o 

listaencadeada.o: ./headers/ListaEncadeada.hpp  ./headers/ListaEncadeada.cpp 
	$(CC) $(CFLAGS) -c ./headers/ListaEncadeada.cpp -o listaencadeada.o  

filaencadeada.o: ./headers/FilaEncadeada.hpp  ./headers/FilaEncadeada.cpp 
	$(CC) $(CFLAGS) -c ./headers/FilaEncadeada.cpp -o filaencadeada.o  
 
test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean: 
	rm -rf nave.o tipoitem.o tipocelula.o pilha.o fila.o lista.o pilhaencadeada.o listaencadeada.o filaencadeada.o  

clean_windows:
	del nave.o tipoitem.o tipocelula.o pilha.o fila.o lista.o pilhaencadeada.o listaencadeada.o filaencadeada.o  

