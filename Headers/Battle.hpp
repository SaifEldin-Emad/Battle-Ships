#include <iostream>
#include <array>
using namespace std;

class Ship {
    private:
    short int shipSize;
    short int shipAmount;
    int *shipStartArray;
    int *shipEndArray;
    public:
    Ship(short int,short int);
    ~Ship();
};
Ship::Ship(short int Size, short int amount) {
    this->shipSize = Size;
    this->shipAmount = amount;
    this->shipStartArray = new int[shipAmount];
    this->shipEndArray = new int[shipAmount];
}
Ship::~Ship() {
    delete[] this->shipStartArray;
    delete[] this->shipEndArray;
}

class Map {
    private:
    bool map[9][9];
    public:
    Map();
    void mapSetter(bool, short int, short int);
    int mapGetter(short int, short int);
};
Map::Map() {
    for(short int i = 0; i < 9; i++) {
        for(short int y = 0; y < 9; y++) {
            map[i][y] = 0;
        }
    }
}
void Map::mapSetter(bool newSet, short int x, short int y) {
    this->map[y][x] = newSet;
}
int Map::mapGetter(short int x, short int y) {
    return this->map[y][x];
}