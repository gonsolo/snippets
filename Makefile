#CXX=c++
#CXX=g++
CXX=clang++

FLAGS = -g -std=gnu++20 -Wall -Wextra -Werror

all: run
main: main.o
	$(CXX) $(FLAGS) $(INCLUDES) -o main main.o $(LIBS)
main.o: main.cpp
	$(CXX) $(FLAGS) -c main.cpp
run: main
	@./main
c: clean
clean:
	rm -f main compile_commands.json main.o
e: edit
	vi main.cpp
compile_commands.json:
	bear -- $(CXX) $(FLAGS) -o main main.cpp $(LIBS)
tidy:
	clang-tidy -checks=modernize-* -fix main.cpp
.PHONY: all c clean e edit
