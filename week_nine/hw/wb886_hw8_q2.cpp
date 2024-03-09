#include <iostream>
#include <string>
using namespace std;


bool isPalindrome(string str);

int main() {
    string word;

    cout<<"Please enter a word: ";
    cin>>word;

    if (isPalindrome(word)) {
        cout << word << " is a palindrome"<<endl;
    } else {
        cout << word << " is not a palindrome"<<endl;
    }

    return 0;
}

bool isPalindrome(string str) {
    int strLength = str.length();

    for (int i = 0; i < strLength / 2; i++) {
        if (str[i] != str[strLength - i - 1]) {
            return false;
        }
    }

    return true;
}
