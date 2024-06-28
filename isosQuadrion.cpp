#include "src/gisp.h" //global isos program

int main() {
    map<string, function<void()>> commands;

    commands["test"] = testCommand1; //defining functions

    string input;
    cin >> input;

    auto checker = commands.find(input);
    
    if(checker != commands.end()) {
        commands[input]();   
    } else {
        cout << "Unknown Command." << endl;
    }
}
