.SILENT:

CXXFLAGS = -Wall -Wextra -Wpedantic -Wno-unqualified-std-cast-call

main:
	clang++ -DDEBUG -ggdb3 -fsanitize=address,undefined $(CXXFLAGS) main.cpp
	./a.out

ndebug:
	clang++ -O2 $(CXXFLAGS) main.cpp
	./a.out

dev:
	clang++ -DDEBUG -ggdb3 -fsanitize=address,undefined $(CXXFLAGS) dev.cpp
	./a.out

dndebug:
	clang++ -O2 $(CXXFLAGS) dev.cpp
	./a.out