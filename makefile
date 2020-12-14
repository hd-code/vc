appname = Game
flags = -std=c++11 -lstdc++ -Wall
inc = -Isrc

# ------------------------------------------------------------------------------

all: $(shell find ./src -name '*.cpp')
	gcc $(flags) $(inc) $^ -o bin/$(appname)

# ------------------------------------------------------------------------------
# make scripts below do not work properly – just a draft!

build/core.a: build/core.o
	ar rcs $@ $^

build/data.a: build/data.o
	ar rcs $@ $^

build/gfx.a: build/gfx.o
	ar rcs $@ $^

build/gui.a: build/gui.o
	ar rcs $@ $^

build/logic.a: build/logic.o
	ar rcs $@ $^

# ------------------------------------------------------------------------------

build/core.o: $(shell find ./src/core -name '*.cpp')
	gcc $(flags) $(inc) -o $@ $^

build/data.o: $(shell find ./src/data -name '*.cpp')
	gcc $(flags) $(inc) -o $@ $^

build/game.o: $(shell find ./src/game -name '*.cpp')
	gcc $(flags) $(inc) -o $@ $^

build/gfx.o: $(shell find ./src/graphics -name '*.cpp')
	gcc $(flags) $(inc) -o $@ $^

build/gui.o: $(shell find ./src/gui -name '*.cpp')
	gcc $(flags) $(inc) -o $@ $^

build/logic.o: $(shell find ./src/logic -name '*.cpp')
	gcc $(flags) $(inc) -o $@ $^