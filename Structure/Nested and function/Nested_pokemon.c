//Features of Structures
//Nesting one structure within another structure

#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{     //Forming of user define data type
        int speed;
        int attack;
        char type[10];
    }pokemon;
    
    typedef struct legendarypokemon{
        pokemon p1;
        char ability[10];
    }legendarypokemon;
    
    pokemon pikachu = {100,70,"Electric"};
    pokemon charizard = {80,120,"Fire"};
    legendarypokemon mewtwo;
    mewtwo.p1.attack=130;
    mewtwo.p1.speed=150;
    strcpy(mewtwo.p1.type,"Psychic");
    strcpy(mewtwo.ability,"Pressure");
    return 0;
}
