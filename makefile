.SILENT:

CXX ?= g++
CXXFLAGS = -Werror -Wall -Wextra -Wpedantic -Wno-unqualified-std-cast-call

main:
	$(CXX) -DDEBUG -ggdb3 -fsanitize=address,undefined $(CXXFLAGS) main.cpp
	./a.out

ndebug:
	$(CXX) -O1 $(CXXFLAGS) main.cpp
	./a.out

dev:
	$(CXX) -DDEBUG -ggdb3 -fsanitize=address,undefined $(CXXFLAGS) dev.cpp
	./a.out

dndebug:
	$(CXX) -O1 $(CXXFLAGS) dev.cpp
	./a.out