.SILENT:

CXXFLAGS = -Wall -Wextra -Wpedantic -Wno-unqualified-std-cast-call

main:
	clang++ -DDEBUG $(CXXFALGS) main.cpp
	./a.out

ndebug:
	clang++ $(CXXFALGS) main.cpp
	./a.out

dev:
	clang++ -DDEBUG $(CXXFALGS) dev.cpp
	./a.out

dndebug:
	clang++ $(CXXFALGS) dev.cpp
	./a.out