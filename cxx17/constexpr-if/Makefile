constexpr-if: constexpr-if.o
	g++ -std=c++17 -o constexpr-if constexpr-if.o

constexpr-if.o: constexpr-if.cc clear
	g++ -std=c++17 -c constexpr-if.cc

clear:
	clear

clean:
	rm *.o constexpr-if
