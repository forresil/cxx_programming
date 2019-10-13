myprog: nodiscard.o
	g++ -O3 -std=c++17 -DNDEBUB -o myprog nodiscard.o

nodiscard.o: nodiscard.cc
	g++ -std=c++17 -c nodiscard.cc

clean:
	rm *.o myprog
