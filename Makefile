all:
	g++ -Isrc/include -Lsrc/lib -o Chess main.cpp -lmingw32 -lSDL2main -lSDL2