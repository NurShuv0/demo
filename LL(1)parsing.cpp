#include <iostream>
#include <string>
#include <vector>

using namespace std;

void displayStack(const vector<char> &stack)
{
    for (char c : stack)
    {
        cout << c;
    }
    cout << "\t";
}

void displayInput(const string &input, int pos)
{
    for (size_t i = pos; i < input.size(); i++)
    {
        cout << input[i];
    }
    cout << endl;
}

int main()
{
    vector<char> stack; 
    string input;
    int pos = 0; 

    
    input = "abba$";      
    stack.push_back('$'); 
    stack.push_back('A'); 

    cout << "Stack\tInput" << endl;
    cout << "-----\t-----" << endl;

    while (!stack.empty())
    {
        displayStack(stack);
        displayInput(input, pos);

        char topSymbol = stack.back(); 
        char currInput = input[pos];   

        if (topSymbol == currInput)
        {
            stack.pop_back();
            pos++;
        }
        else if (topSymbol == 'A' && currInput == 'a')
        {
            stack.pop_back();     
            stack.push_back('a'); 
            stack.push_back('C');
            stack.push_back('a');
        }
        else if (topSymbol == 'C' && currInput == 'b')
        {
            stack.pop_back();     
            stack.push_back('C'); 
            stack.push_back('b');
        }
        else if (topSymbol == 'C' && (currInput == 'a' || currInput == '$'))
        {
            stack.pop_back(); 
        }
        else
        {
            cout << "Error: Invalid input or grammar rule." << endl;
            return 1;
        }
    }

    if (pos == input.size())
    {
        cout << "Parsing successful!" << endl;
    }
    else
    {
        cout << "Error: Input not fully consumed." << endl;
    }

    return 0;
}
