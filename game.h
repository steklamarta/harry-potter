//
// Created by Marta on 13/12/2020.
//

#ifndef HARRYPOTTER_GAME_H
#define HARRYPOTTER_GAME_H
using namespace std;

class Game {

};

class Object: protected Game {

};

class Weapon : protected Object {

};

class Potion : protected Object {

};

// konci Object zacina Character

class Character : protected Game {

};

class Player : protected Character {

};

// konci Character zacina Room

class Room : protected Game {

};

class FirstRoom : protected Room {

};

class SecondRoomA : protected Room {

};

class SecondRoomB : protected Room {

};

class ThirdRoom : protected Room {

};

class FourthRoom : protected Room {

};

class FifthRoom : protected Room {

};

class SixthRoom : protected Room {

};

class SeventhRoom : protected Room {

};
#endif //HARRYPOTTER_GAME_H
