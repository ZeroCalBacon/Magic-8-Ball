#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <conio.h>
#include <chrono>
#include <thread>
#include <windows.h>
#include <set>

//include the header files for your ASCII response classes
#include "ASCII.h"
#include "ASCIIYes.h"
#include "ASCIINo.h"
#include "ASCIIUnknown.h"

using namespace std;

//initialized responses in vector
vector<string> ASCIIYes::responses;
vector<string> ASCIINo::responses;
vector<string> ASCIIUnknown::responses;

//function converts string to lowercase
string toLowerCase(string str) {
    for (char& c : str) {
        c = tolower(c);
    }
    return str;
}

int main() {
    //seed the random number generator
    srand(time(0));
    

    //initialize responses for all ASCII response classes
    ASCIIYes::initializeResponses();
    ASCIINo::initializeResponses();
    ASCIIUnknown::initializeResponses();

    //exit phrase
    set<string> exitPhrases = {
        "quit", "goodbye", "farewell", "stop" 
    };

    //WELCOME SCREEN//
    cout << ASCII::asciiTagWarning();
    cout << "\n\n\n\n\t\t\t\tPress [ENTER]";
    cin.ignore();
    system("cls");

    cout << ASCII::asciiTagIntro1();
    this_thread::sleep_for(chrono::seconds(1));
    system("cls");
    cout << ASCII::asciiTagIntro2();
    this_thread::sleep_for(chrono::seconds(2));
    system("cls");
    cout << ASCII::ascii8BallIntro();
    this_thread::sleep_for(chrono::seconds(3));

    cout << "\n\n\t\t\tPress [ENTER] to start.";
    cin.ignore();
    system("cls");

    cout << ASCII::asciiSpeechBubbleDefault();

    //main loop
    while (true) {
        string userInput;
        cout << "\n\tYour Question: ";
        cin >> userInput;

        userInput = toLowerCase(userInput);

        this_thread::sleep_for(chrono::seconds(1));
        system("cls");

        cout << ASCII::asciiSpeechBubbleThinking();
        this_thread::sleep_for(chrono::seconds(1));
        system("cls");

        if (exitPhrases.find(userInput) != exitPhrases.end()) {
            break;
        }

        int subject = rand() % 3;
        string response;

        switch (subject) {
            case 0:
                response = ASCIIYes::getRandomResponse();
                break;
            case 1:
                response = ASCIINo::getRandomResponse();
                break;
            case 2:
                response = ASCIIUnknown::getRandomResponse();
                break;
        }

        cout << response;

        //clear any remaining input from the previous question
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        
    }

    cout << ASCII::asciiSpeechBubbleGoodbye();
    this_thread::sleep_for(chrono::seconds(1));
    return 0;
}
