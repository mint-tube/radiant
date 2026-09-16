.SILENT:
.PHONY: main, dev, gdb

CXX ?= g++
CXXFLAGS = --std=c++20 -DDEBUG -ggdb3 -Werror -Wall -Wextra -Wpedantic -Wshadow 
SANITIZE = -fsanitize=address,undefined -D_GLIBCXX_DEBUG

main:
	$(CXX) $(CXXFLAGS) $(SANITIZE) main.cpp
	./a.out

dev:
	$(CXX) $(CXXFLAGS) $(SANITIZE) dev.cpp
	./a.out

gdb:
	$(CXX) $(CXXFLAGS) main.cpp