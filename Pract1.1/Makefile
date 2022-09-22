makefile: entrF out del
 
entrF: FuncF.c FuncG.c main.c
	g++ -c FuncF.c -o FuncF.o
	g++ -c FuncG.c -o FuncG.o
	g++ -c main.c -o main.o
	g++ FuncF.o FuncG.o main.o -o mkfile
out: entrF 
	./mkfile
del: out 
	rm mkfile
	rm FuncF.o
	rm FuncG.o
	rm main.o
