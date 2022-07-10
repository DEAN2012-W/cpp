#zheyanggbuhao

#calc:
#	g++ add.cpp mul.cpp cal.cpp -o calc
#OBJ=add.o mul.o cal.o
#TARGET=cal

.PHONY:show clean

cal:add.o mul.o cal.o
	g++  add.o mul.o cal.o -o cal

%.o:%.cpp
	g++ -c $^ -o $@


clean:
	rm -rf *.o cal

show:
	echo $(AS)