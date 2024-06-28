#include "src/gisp.h" //global isos program

int main() {
    system("cls");
    map<string, function<void()>> commands;

    commands["ping"] = pingPong;
    
    cout << "Welcome to IsOS Quadrion!" << endl;

    while (true) {
        cout << "C:/> ";
        string input;
        cin >> input;

        if(input=="exit") {cout << "Goodbye!" << endl; return 0;}

        auto checker = commands.find(input);
    
        if(checker != commands.end()) {
            commands[input]();   
        } else {
            cout << "Unknown Command." << endl;
        }
    }

}
