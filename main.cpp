#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <cstdlib>

int main() {

    std::string PlayerName;


    //TODO : Put a loop here that asks the player to confirm what their name is..
    char userAnswer;
    std::cout << "What is your name..?\n";
    std::cin >> PlayerName;

    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::cout << "Your name is .. " << PlayerName << "? (Y/N)";
    
    
    
    
    
    system("cls");

    std::cout << "Your name has been recorded.\n" << std::endl;
    
    std::this_thread::sleep_for(std::chrono::seconds(5));

    system("cls");

    std::this_thread::sleep_for(std::chrono::seconds(5));
    return 0;
}

// make a separate file for saving user variables like name, location, items in inventory etc.
