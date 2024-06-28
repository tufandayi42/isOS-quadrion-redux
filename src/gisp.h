#ifndef GISP
#define GISP

#include <fstream>
#include <iostream>
#include <vector>
#include <conio.h>
#include <map>
#include <string>
#include <functional>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <unistd.h>
#include <algorithm>
#include <cctype>

using namespace std;

void wait(int seconds) {
    this_thread::sleep_for(chrono::seconds(seconds));
}

void pingPong() {
    cout << "Pong!" << endl;
}

void calculator() {
    int num1, num2;
    char operation;

    cout << "Please enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;
    switch (operation) {
    case '+':
        cout << "Result: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Result: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Result: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        }
        else {
            cout << "You can't divide a number by 0." << endl;
        }
        break;
    default:
        cout << "Invalid operation" << endl;
    }
}

void readFile() {
    string fileName, line;
    cout << "Please enter the file name: ";
    cin >> fileName;

    ifstream fileRead(fileName);

    if (!fileRead) {
        cerr << "File cannot be opened: " << fileName << endl;
        return;
    }

    cout << "File opened. File content:" << endl;

    while (getline(fileRead, line)) {
        cout << line << endl;
    }

    fileRead.close();
}

void writeFile() {
    string fileName, text;
    cout << "Please enter the file name: ";
    cin >> fileName;

    ofstream fileWrite(fileName);

    if (!fileWrite) {
        cerr << "File cannot be created: " << fileName << endl;
        return;
    }

    cout << "File opened. You can enter text. Press (Ctrl+Z)+Enter to end the text." << endl;

    cin.ignore();

    while (getline(cin, text)) {
        fileWrite << text << endl;
    }

    cout << "Text saved successfully." << endl;
    fileWrite.close();
}

void notepad() {
    int secim;    
    cout << "Do you want to write text to the file or read text from the file? "
         << "1. Write File 2. Read File ";
    cin >> secim; 
    switch (secim) {
        case 1:
            writeFile();
            break;
        case 2:
            readFile();
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }
}
