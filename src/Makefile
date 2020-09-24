
CC=g++ 
CFLAGS=-Wall -Wextra 
EXEC=./tp1.exe 
TMPOUT=./tp1.testresult
HEADERS_DIR = ./headers

$(EXEC): main.cpp nave.o tipoitem.o tipocelula.o pilha.o fila.o lista.o pilhaencadeada.o listaencadeada.o filaencadeada.o  
	$(CC) $(CFLAGS) main.cpp tipoitem.o tipocelula.o nave.o pilha.o fila.o lista.o pilhaencadeada.o listaencadeada.o filaencadeada.o -o $(EXEC)

tipoitem.o: ${HEADERS_DIR}/TipoItem.hpp  ${HEADERS_DIR}/TipoItem.cpp 
	$(CC) $(CFLAGS) -c ${HEADERS_DIR}/TipoItem.cpp -o tipoitem.o

tipocelula.o: ${HEADERS_DIR}/TipoCelula.hpp  ${HEADERS_DIR}/TipoCelula.cpp 
	$(CC) $(CFLAGS) -c ${HEADERS_DIR}/TipoCelula.cpp -o tipocelula.o
	
fila.o: ${HEADERS_DIR}/Fila.hpp  ${HEADERS_DIR}/Fila.cpp 
	$(CC) $(CFLAGS) -c ${HEADERS_DIR}/Fila.cpp -o fila.o

lista.o: ${HEADERS_DIR}/Lista.hpp  ${HEADERS_DIR}/Lista.cpp 
	$(CC) $(CFLAGS) -c ${HEADERS_DIR}/Lista.cpp -o lista.o

pilha.o: ${HEADERS_DIR}/Pilha.hpp  ${HEADERS_DIR}/Pilha.cpp 
	$(CC) $(CFLAGS) -c ${HEADERS_DIR}/Pilha.cpp -o pilha.o

nave.o: ${HEADERS_DIR}/Nave.cpp 
	$(CC) $(CFLAGS) -c ${HEADERS_DIR}/Nave.cpp -o nave.o

pilhaencadeada.o: ${HEADERS_DIR}/PilhaEncadeada.hpp  ${HEADERS_DIR}/PilhaEncadeada.cpp 
	$(CC) $(CFLAGS) -c ${HEADERS_DIR}/PilhaEncadeada.cpp -o pilhaencadeada.o 

listaencadeada.o: ${HEADERS_DIR}/ListaEncadeada.hpp  ${HEADERS_DIR}/ListaEncadeada.cpp 
	$(CC) $(CFLAGS) -c ${HEADERS_DIR}/ListaEncadeada.cpp -o listaencadeada.o  

filaencadeada.o: ${HEADERS_DIR}/FilaEncadeada.hpp  ${HEADERS_DIR}/FilaEncadeada.cpp 
	$(CC) $(CFLAGS) -c ${HEADERS_DIR}/FilaEncadeada.cpp -o filaencadeada.o  
 
test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean: 
	rm -rf nave.o tipoitem.o tipocelula.o pilha.o fila.o lista.o pilhaencadeada.o listaencadeada.o filaencadeada.o  

clean_windows:
	del nave.o tipoitem.o tipocelula.o pilha.o fila.o lista.o pilhaencadeada.o listaencadeada.o filaencadeada.o  

