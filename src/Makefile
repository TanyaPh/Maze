CC=g++ -Wall -Werror -Wextra -std=c++17 -g
CHECKFLAGS=-lgtest -lgmock -pthread
GCOVFLAGS = -fprofile-arcs -ftest-coverage
GCOV=--coverage
OS = $(shell uname)

all: install

install:
	mkdir build
	cd Maze && qmake && make && make clean && rm Makefile && cd ../ && mv Maze/maze.app build
	open build/maze.app

uninstall:
	rm -rf build*

test: clean
	$(CC) tests/tests.cpp Maze/matrix.cpp $(CHECKFLAGS) -o tests/tests
	./tests/tests
	rm -rf tests/tests

clean:
	rm -f *.gcno *.gcda *.info *.out *.gch
	rm -rf ./gcov_rep.out.dSYM
	rm -rf ./report
	rm -rf ./*.o ./*.a
	rm -rf test
	rm -rf .clang-format
