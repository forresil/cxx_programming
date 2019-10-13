myprog: maybe_unused.o
	g++ -O3 -std=c++17 -DNDEBUB -o myprog maybe_unused.o

maybe_unused.o: maybe_unused.cc
	g++ -std=c++17 -c maybe_unused.cc

clean:
	rm *.o myprog
