//
// Created by Marta on 13/12/2020.
//

#ifndef HARRYPOTTER_GAME_H
#define HARRYPOTTER_GAME_H
using namespace std;

class Game {

};

class Object: protected Game {
protected:
    string m_objectName;
    string m_objectType;
public:

};

class Weapon : protected Object {
private:
    int m_attackBonus;
    bool m_equippedWeapon;
public:
    Weapon (string weaponName, int attackBonus){
        m_objectName = weaponName;
        m_attackBonus = attackBonus;
        m_objectType = "weapon";
        m_equippedWeapon = false;
    };

    int getAttackBonus (){
        return m_attackBonus;
    }
};

class Potion : protected Object {
private:
    int m_healHP;
public:
    Potion (string potionName, int healHP) {
        m_objectName = potionName;
        m_healHP = healHP;
        m_objectType = "potion";
    };
};

// konci Object zacina Character

class Character : protected Game {
protected:
    string m_characterName;
    int m_characterAttack;
    int m_characterBaseAttack;
    int m_characterHP;
    int m_characterMaxHP;
    bool m_characterType; // true = PC, false = NPC
public:
    int getAttack (){
        return m_characterAttack;
    };

    string getCharacterName (){
        return m_characterName;
    };

    int getCharacterHP (){
        return m_characterHP;
    };

    int getChacterMaxHP (){
        return m_characterMaxHP;
    };

    void printInfo (){
        cout << "Name: " << m_characterName << endl;
        cout << "HP: " << m_characterHP << endl;
        cout << "Attack: " << m_characterAttack << endl; // vratit se sem a pridat bonus ze zbrane
    }

    Character (string characterName, int characterBaseAttack, int characterMaxHP, bool characterType){
        m_characterName = characterName;
        m_characterBaseAttack = characterBaseAttack;
        m_characterAttack = m_characterBaseAttack;
        m_characterMaxHP = characterMaxHP;
        m_characterHP = m_characterMaxHP;
        m_characterType = characterType;
    };

    void Attack (){
        
    }
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
