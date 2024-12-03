#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();

    for (int i = 0; i < N; ++i) {
        string s;
        getline(cin, s);

        stack<char> pile;
        int preciousStones = 0;

        for (char c : s) {
            if (c == '<') {
                pile.push(c);
            } else if (c == '>' && !pile.empty() && pile.top() == '<') {
                pile.pop();
                preciousStones++;
            }
        }

        cout << preciousStones << endl;
    }

    return 0;
}
