STD=-std=c++2b

all:
	clang++ $(STD) -o main main.cpp
	./main
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
