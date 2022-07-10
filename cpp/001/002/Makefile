export LD_LIBRARY_PATH=./


	

demo:
	$(CXX) -shared -fPIC test.cpp -o libtest.so
	$(CXX) demo.cpp -L. -ltest -o demo



clean:
	$(RM) *.so  demo