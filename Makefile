all: bin/honassir
	bin/honassir

bin/honassir: obj $(patsubst src/%.cpp,obj/%.o,$(wildcard src/*.cpp)) bin
	g++ -Wall -Wextra -std=c++11 -o bin/honassir $(patsubst src/%.cpp,obj/%.o,$(wildcard src/*.cpp))


obj/%.o: src/%.cpp $(wildcard src/includes/*.h)
	g++ -Wall -Wextra -std=c++11 -I src -c -o $@ $<

bin:
	mkdir bin
obj:
	mkdir obj
clear:
	rm -rf bin
	rm -rf obj
