#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int countVowels(const string& str) {
    int count = 0;
    for (char c : str) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (isspace(c)) {
            inWord = false;
        } else {
            if (!inWord) {
                count++;
                inWord = true;
            }
        }
    }
    return count;
}

string reverse(const string& str) {
    return string(str.rbegin(), str.rend());
}

string capitalizeSecondLetter(const string& str) {
    string result = str;
    bool inWord = false;
    int letterCount = 0;
    for (char& c : result) {
        if (isspace(c)) {
            inWord = false;
            letterCount = 0;
        } else {
            if (inWord) {
                letterCount++;
                if (letterCount == 2) {
                    c = toupper(c);
                }
            } else {
                inWord = true;
                letterCount = 1;
            }
        }
    }
    return result;
}

int main() {
    ifstream inputFile("C:/Users/yamik/OneDrive/Desktop/nyani/Lab_task5/okay.txt");
    
    if (!inputFile.is_open()) {
        cerr << "Unable to open file 'C:/Users/yamik/OneDrive/Desktop/nyani/Lab_task5/okay.txt'. Please check the following:" << endl;
        return 1;
    }

    string fileData, line;
    while (getline(inputFile, line)) {
        fileData += line + "\n";
    }
    inputFile.close();

    int vowelCount = countVowels(fileData);
    cout << "Number of vowels in the text file statement: " << vowelCount << endl;

    int wordCount = countWords(fileData);
    cout << "Number of words in the text file statement: " << wordCount << endl;

    string reversedStatement = reverse(fileData);
    cout << "Statement in reverse: " << reversedStatement << endl;

    string capitalizedStatement = capitalizeSecondLetter(fileData);
    cout << "Statement with second letter capitalized: " << capitalizedStatement << endl;

    return 0;
}
