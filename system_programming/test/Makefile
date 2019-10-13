test: test.o 
	g++ -std=c++17 -o test test.o 
	
test.o: test.cc something.h
	g++ -std=c++17 -c test.cc something.h	

clean: 
	rm test.o test something.h.gch
