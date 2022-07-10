
export LD_LIBRARY_PATH=./

TARGET=main

TARGET:
	$(CXX) -c test.cpp -o test.o
	ar -r libtest.a test.o
	$(CXX) main.cpp -L. -ltest -o TARGET
clean:
	$(RM) TARGET *.a