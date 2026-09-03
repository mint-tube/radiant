.SILENT:
.PHONY: main, dev, gdb

CXX ?= g++
CXXFLAGS = -DDEBUG -ggdb3 -Werror -Wall -Wextra -Wpedantic

main:
	$(CXX) $(CXXFLAGS) -fsanitize=address,undefined main.cpp
	./a.out

dev:
	$(CXX) $(CXXFLAGS) -fsanitize=address,undefined dev.cpp
	./a.out

gdb:
	$(CXX) $(CXXFLAGS) main.cpp