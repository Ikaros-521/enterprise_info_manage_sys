CC=g++
LIB=-lm
INC=-I./include
OBJ=service_impl.o tools.o main.o department.o employee.o serviceview_console_impl.o manager.o managerview_console_impl.o managerservice_impl.o managerdao_file_impl.o emis.o servicedao_file_impl.o
BIN=a
FLAG=-Wall -Werror

all:$(OBJ)
	$(CC) $(OBJ) $(LIB) -o $(BIN)
%.o:%.cpp
	$(CC) $(FLAG) $(INC) -c $< -o $@

clean:
	rm $(OBJ) $(BIN)

