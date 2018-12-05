CXX=gcc#compilador
CXX_FLAGS=-fsanitize=address -ggdb -O0 -Wall -Wextra#flags
SRC=ptr_struct.c#arquivo de entrada
PROGRAM_NAME=f.arc #arquivo e formato de saida

$(PROGRAM_NAME): $(SRC)
	$(CXX) $(CXX_FLAGS) $(SRC) -o $@


clean:
	rm -rf $(PROGRAM_NAME)
