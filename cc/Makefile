#CXX=c++
CXX=g++
#CXX=clang++

FLAGS = -g -std=c++20 -Wall -Wextra -Werror

all: run
bla: bla.o
	$(CXX) $(FLAGS) $(INCLUDES) -o bla bla.o $(LIBS)
bla.o: bla.cc
	$(CXX) $(FLAGS) -c $<
run: bla
	@./bla
c: clean
clean:
	rm -f bla compile_commands.json bla.o
e: edit
	vi bla.cc
compile_commands.json:
	bear -- $(CXX) $(FLAGS) -o bla bla.cc $(LIBS)
tidy:
	clang-tidy -checks=modernize-* -fix bla.cc
.PHONY: all c clean e edit
