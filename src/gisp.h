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

#endif