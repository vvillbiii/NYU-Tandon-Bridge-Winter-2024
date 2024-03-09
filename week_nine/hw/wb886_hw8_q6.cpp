#include <iostream>
#include <string>
using namespace std;

bool isDigitString(string sentence, int startIndex, int endIndex);

void convertDigitString(string &sentence, int startIndex, int endIndex);

int main() {
    string line;

    cout << "Please enter a line of text:"<<endl;
    getline(cin, line);

    int startIndex = 0;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == ' ') {
            int endIndex = i - 1;
            bool digitString = isDigitString(line, startIndex, endIndex);
            if (digitString) {
                convertDigitString(line, startIndex, endIndex);
            }
            startIndex = endIndex + 2;
        }
    }

    cout << line << endl;

    return 0;
}

bool isDigitString(string line, int startIndex, int endIndex) {
    bool isDigitString = true;
    for (int i = 0; i < (endIndex - startIndex + 1); i++) {
        if (line[startIndex + i] < '0' || line[startIndex + i] > '9') {
            isDigitString = false;
        }
    }
    return isDigitString;
}

void convertDigitString(string &line, int startIndex, int endIndex) {
    for (int i = 0; i < (endIndex - startIndex + 1); i++) {
        char stringX = 'x';
        line[startIndex + i] = stringX;
    }
}


