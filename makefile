.SILENT:
.PHONY: run drun fast dfast gdb dgdb

CXX      ?= g++
CXXFLAGS = -std=c++20 -Werror -Wall -Wextra -Wpedantic -Wno-sign-compare -Wshadow -pipe
DEBUG    = -DDEBUG -ggdb3
FAST     = -O3
SANITIZE = -fsanitize=address,undefined #-D_GLIBCXX_DEBUG

run:
	$(CXX) $(CXXFLAGS) $(DEBUG) $(SANITIZE) main.cpp
	./a.out

drun:
	$(CXX) $(CXXFLAGS) $(DEBUG) $(SANITIZE) dev.cpp
	./a.out

fast:
	$(CXX) $(CXXFLAGS) $(FAST) main.cpp
	./a.out

dfast:
	$(CXX) $(CXXFLAGS) $(FAST) dev.cpp
	./a.out

gdb:
	$(CXX) $(CXXFLAGS) $(DEBUG) main.cpp

dgdb:
	$(CXX) $(CXXFLAGS) $(DEBUG) dev.cpp