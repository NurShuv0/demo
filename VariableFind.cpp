#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

// List of keywords in C++
bool isKeyword(string s) {
    return (s == "auto" || s == "int" || s == "char" || s == "long" ||
            s == "float" || s == "double" || s == "struct" || s == "if" ||
            s == "else" || s == "break" || s == "continue" || s == "while" ||
            s == "do" || s == "for" || s == "return" || s == "signed" ||
            s == "unsigned" || s == "default" || s == "goto" || s == "case" ||
            s == "sizeof" || s == "short" || s == "switch" || s == "void" ||
            s == "static" || s == "typedef");
}

// Check if a string is a valid C++ variable name
bool isValidVariable(string s) {
    // Variable names cannot be keywords
    if (isKeyword(s)) {
        return false;
    }

    // Variable name must start with a letter or underscore
    if (!isalpha(s[0]) && s[0] != '_') {
        return false;
    }

    // Remaining characters must be alphanumeric or underscore
    for (int i = 1; i < s.length(); ++i) {
        if (!isalnum(s[i]) && s[i] != '_') {
            return false;
        }
    }

    return true;
}

// Parse line to extract potential variable names after types
void extractAndPrintVariables(string line) {
    stringstream ss(line);
    string word;
    bool lastWasType = false;

    // Process each word in the line
    while (ss >> word) {
        // If the last word was a type keyword, check the next word for a variable
        if (isKeyword(word)) {
            lastWasType = true;  // Expect variable after type
        } else if (lastWasType && isValidVariable(word)) {
            cout << word << " is a valid variable\n";  // Print valid variable
            lastWasType = false;  // Reset after finding a variable
        }
    }
}

int main() {
    string line;
    freopen("9 Input.txt", "r", stdin);

    cout << "Variables found in the input:\n\n";

    // Read input line by line
    while (getline(cin, line)) {
        extractAndPrintVariables(line);
    }

    return 0;
}
