.SILENT:
.PHONY: main, dev, gdb

CXX      ?= g++
CXXFLAGS = --std=c++20 -Werror -Wall -Wextra -Wpedantic -pipe
DEBUG    = -DDEBUG -ggdb3 -fomit-frame-pointer
FAST     = -O3
SANITIZE = -fsanitize=address,undefined -D_GLIBCXX_DEBUG

run:
	$(CXX) $(CXXFLAGS) $(DEBUG) $(SANITIZE) main.cpp
	./a.out

drun:
	$(CXX) $(CXXFLAGS) $(DEBUG) $(SANITIZE) dev.cpp
	./a.out

fast:
	$(CXX) $(CXXFLAGS) $(FAST) $(SANITIZE) main.cpp
	./a.out

dfast:
	$(CXX) $(CXXFLAGS) $(FAST) $(SANITIZE) dev.cpp
	./a.out

gdb:
	$(CXX) $(CXXFLAGS) $(DEBUG) main.cpp

dgbd:
	$(CXX) $(CXXFLAGS) $(DEBUG) main.cpp