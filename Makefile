q1 = ./bin/q1

q2 = ./bin/q2

q3 = ./bin/q3

INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./build
BIN_DIR = ./bin
DOC_DIR = ./doc

CC = g++

RM = rm -rf

OBJS_Q01 = ./build/programa01/main.o ./build/programa01/q1.o ./build/programa01/tools.o 

OBJS_Q02 = ./build/programa02/q2.o

OBJS_Q03 = ./build/programa03/main.o ./build/programa03/list.o

CPPFLAGS = -Wall -pedantic -ansi -std=c++11

INC_01 = -I. -I$(INC_DIR)/programa01

INC_03 = -I. -I$(INC_DIR)/programa03

.PHONY: init all programa01  programa02 programa03 doc clean 

all: programa01 programa02 programa03


debug: CFLAGS += -g -O0
debug: all

# Alvo (target) para a criação da estrutura de diretorios
# necessaria para a geracao dos arquivos objeto 	
init:	

	@mkdir -p $(DOC_DIR)
	@mkdir -p $(BIN_DIR)
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)/programa01 $(OBJ_DIR)/programa02 $(OBJ_DIR)/programa03


programa01: $(q1) 

$(q1): $(OBJS_Q01)
	$(CC) $(OBJS_Q01) $(CPPFLAGS) $(INC_01) -o $@

$(OBJ_DIR)/programa01/main.o: $(SRC_DIR)/programa01/main.cpp
	$(CC) -c $(CPPFLAGS) $(INC_01) $^ -o $@

$(OBJ_DIR)/programa01/q1.o: $(SRC_DIR)/programa01/q1.cpp $(INC_DIR)/programa01/q1.h
	$(CC) -c $(CPPFLAGS) $(INC_01) $< -o $@

$(OBJ_DIR)/programa01/tools.o: $(SRC_DIR)/programa01/tools.cpp $(INC_DIR)/programa01/tools.h
	$(CC) -c $(CPPFLAGS) $(INC_01) $< -o $@



programa02: $(q2)

$(q2):	$(OBJS_Q02)
	$(CC) $^ $(CPPFLAGS) $(INC_02) -o $@

$(OBJ_DIR)/programa02/q2.o: $(SRC_DIR)/programa02/q2.cpp
	$(CC) -c $(CPPFLAGS) $^ -o $@


programa03: $(q3)
$(q3):	$(OBJS_Q03)
	$(CC) $^ $(CPPFLAGS) $(INC_03) -o $@

$(OBJ_DIR)/programa03/main.o: $(SRC_DIR)/programa03/main.cpp
	$(CC) -c $(CPPFLAGS) $(INC_03) $^ -o $@

$(OBJ_DIR)/programa03/list.o: $(SRC_DIR)/programa03/list.cpp $(INC_DIR)/programa03/list.h
	$(CC) -c $(CPPFLAGS) $(INC_03) $< -o $@
doxy:
	doxygen Doxyfile

doc:
	$(RM) $(DOC_DIR)/*

clean:
	$(RM) $(OBJ_DIR)/programa01/* $(OBJ_DIR)/programa02/* $(OBJ_DIR)/programa03/*
	$(RM) $(BIN_DIR)/*