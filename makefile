.SILENT:

CXXFLAGS = -Wall -Wextra -Wpedantic -Wno-unqualified-std-cast-call

main:
	clang++ -DDEBUG $(CFALGS) main.cpp
	./a.out

ndebug:
	clang++ $(CFALGS) main.cpp
	./a.out

dev:
	clang++ -DDEBUG $(CFALGS) dev.cpp
	./a.out

dndebug:
	clang++ $(CFALGS) dev.cpp
	./a.out