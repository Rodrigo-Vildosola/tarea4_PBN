CC=g++ -std=c++11
exe=probador
rutapython= /Library/Frameworks/Python.framework/Versions/3.10


libreria: _grafo.so
	
_grafo.so: grafo_wrap.cxx grafo.o
	$(CC) -fPIC -c grafo_wrap.cxx -o grafo_wrap.o -I$(rutapython)/include/python3.10
	$(CC) -shared grafo_wrap.o grafo.o -o _grafo.so -L$(rutapython)/lib/ -lpython3.10
	
grafo_wrap.cxx: grafo.i grafo.h
	swig -python -c++ grafo.i

clean:
#la regla varía para windows o linux
ifeq ($(OS),Windows_NT)
	del /f /q *.o $(exe).exe *.pyc *.pyd *.cxx grafo.py
	rmdir /s /q __pycache__
else
	rm -f *.o $(exe) *.pyc *.pyd *.cxx grafo.py *.so
	rm -r -f __pycache__
endif
