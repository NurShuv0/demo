#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // Define the regular expressions for the patterns
    regex pattern_a_star("a*");
    regex pattern_aa_star("aa*");
    regex pattern_aba_star("aba*");

    smatch match; // For storing the match results

    cout << "Matching substrings:" << endl;

    // Iterate through the input string to find matches for each pattern
    for (size_t i = 0; i < input.size(); i++) {
        string sub = input.substr(i); // Extract the substring starting at index i

        if (regex_search(sub, match, pattern_a_star)) {
            cout << "Matched a*: " << match.str(0) << endl;
        }
        if (regex_search(sub, match, pattern_aa_star)) {
            cout << "Matched aa*: " << match.str(0) << endl;
        }
        if (regex_search(sub, match, pattern_aba_star)) {
            cout << "Matched aba*: " << match.str(0) << endl;
        }
    }

    return 0;
}
