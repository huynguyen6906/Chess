all:
	g++ -Isrc/include -Lsrc/lib -I . -o Chess main.cpp -lmingw32 -lSDL2main -lSDL2