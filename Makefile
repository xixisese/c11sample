CC=g++ 
CFLAGS  = -Wall -O0 -g3 -Wc++11-extensions -std=c++11
LDFLAGS = -g3 -O0 -std=c++11
LIB     = -lpthread -lboost_regex -lboost_system-mt -lboost_thread-mt
INCLUDE =

OBJ=main.o
PROG=app
  
all:$(PROG) 
	
$(PROG):$(OBJ)  
	$(CC) $(LDFLAGS) $(LIB) -o $@ $(OBJ)  

.SUFFIXES: .c .o .cpp  
.cpp.o:  
	$(CC) $(CFLAGS)  -c $*.cpp -o $*.o  
  
.PRONY:clean all

clean:  
	@echo "Removing linked and compiled files......"  
	rm -f $(OBJ) $(PROG) 
