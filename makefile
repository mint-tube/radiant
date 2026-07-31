.SILENT:

CXXFLAGS = -Wall -Wextra -Wpedantic -Wno-unqualified-std-cast-call

main:
	clang++ -DDEBUG $(CXXFLAGS) main.cpp
	./a.out

ndebug:
	clang++ $(CXXFLAGS) main.cpp
	./a.out

dev:
	clang++ -DDEBUG $(CXXFLAGS) dev.cpp
	./a.out

dndebug:
	clang++ $(CXXFLAGS) dev.cpp
	./a.out