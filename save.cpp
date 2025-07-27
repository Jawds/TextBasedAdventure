#include <fstream>
#include <string>
#include "save.h"

std::string PlayerName;
int Floor;

/* 
 Later, the save file will include:
    -> Current Health
    -> Items in players inventory
    -> NPC Interaction Level
*/

void update_save_file() {
    std::fstream SaveFile;

    SaveFile.open("PlayerSave.txt", std::ios::out);
    if (SaveFile.is_open()) {
        SaveFile << "name:" << PlayerName;
        SaveFile << "flor:" << Floor;
    }
    SaveFile.close();
}

void save_player_name(std::string Name) {
    PlayerName = Name;
    update_save_file();
}

void update_floor() {
    Floor++;
}

void update_floors(int Floors) {
    Floor += Floors;
}
    
