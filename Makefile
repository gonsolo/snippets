all:
	clang++ -std=c++20 -o main main.cpp
	./main
c: clean
clean:
	rm -f main
e: edit
	vi main.cpp
compile_commands.json:
	bear -- clang++ -std=c++20 -o main main.cpp
tidy:
	clang-tidy -checks=modernize-* main.cpp
.PHONY: all c clean e edit
