.SILENT:

main:
	clang++ -DDEBUG -Wall -Wextra -Wpedantic main.cpp
	./a.out

ndebug:
	clang++ -Wall -Wextra -Wpedantic main.cpp
	./a.out

dev:
	clang++ -DDEBUG -Wall -Wextra -Wpedantic dev.cpp
	./a.out

dndebug:
	clang++ -Wall -Wextra -Wpedantic dev.cpp
	./a.out