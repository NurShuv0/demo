
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int evaluatePrefixExpression(const string& expression) {
    stack<int> operands;

    for (int i = expression.size() - 1; i >= 0; --i) {
        char token = expression[i];

        if (isdigit(token)) {
            operands.push(token - '0');
        } else if (token == '+' || token == '-' || token == '*' || token == '/') {

            int operand1 = operands.top(); operands.pop();
            int operand2 = operands.top(); operands.pop();
            switch (token) {
                case '+': operands.push(operand1 + operand2); break;
                case '-': operands.push(operand1 - operand2); break;
                case '*': operands.push(operand1 * operand2); break;
                case '/': operands.push(operand1 / operand2); break;
            }
        }
    }

    return operands.top();
}

int main() {
    string prefixExpression;
    cout << "Enter the prefix expression: ";
    getline(cin, prefixExpression);
    cout << "Result: " << evaluatePrefixExpression(prefixExpression) << nl;
    return 0;
}
