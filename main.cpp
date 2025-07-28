#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <cstdlib>

int main() {

    GetPlayerName();

    return 0;
}

void set_timer(int seconds) {
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

void GetPlayerName() {
    std::string PlayerName;


    //TODO : Put a loop here that asks the player to confirm what their name is..
    char userAnswer;
    std::cout << "What is your name..?\n";
    std::cin >> PlayerName;

    set_timer(1);

    std::cout << "Your name is .. " << PlayerName << "? (Y/N)";
    
    system("cls");

    std::cout << "Your name has been recorded.\n" << std::endl;
    
    set_timer(3);

    system("cls");

    set_timer(5);
}

// make a separate file for saving user variables like name, location, items in inventory etc.
