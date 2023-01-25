CXX=c++
#CXX=g++
#CXX=clang++
#CXX=clang++-15
#STD=-std=c++2b
FLAGS = -g -std=c++20 # -Wall -Wextra -Werror
LIBS = -lOpenImageIO -lOpenImageIO_Util
all:
	$(CXX) $(FLAGS) -o main main.cpp $(LIBS)
	@./main
c: clean
clean:
	rm -f main
e: edit
	vi main.cpp
compile_commands.json:
	bear -- clang++ $(STD) -o main main.cpp
tidy:
	clang-tidy -checks=modernize-* -fix main.cpp
.PHONY: all c clean e edit
