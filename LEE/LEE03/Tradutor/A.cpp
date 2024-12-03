#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    stack<char> pile;
    bool isValid = true;

    cin >> s;

    for (char c : s) {
        if(c == '(' || c == '[' || c == '{') {
            pile.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if(pile.empty()) {
                isValid = false;
                break;
            }
            char top = pile.top();
            pile.pop();

            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')){
                isValid = false;
                break;
            }
        }
    }

    if (!pile.empty()) {
        isValid = false;
    }

    if (isValid) {
        cout << "OK" << endl;
    } else {
        cout << "SyntaxError" << endl;
    }

    return 0;
}
