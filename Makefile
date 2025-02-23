all:
	g++ -o Chess main.cpp -Isrc/include -Lsrc/lib -IInit -lmingw32 -lSDL2main -lSDL2