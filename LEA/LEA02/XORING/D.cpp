#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        string input1, input2, output = "";
        cin >> input1 >> input2;

        for (int j = 0; j < input1.length(); j++) {
            if(isupper(input1[j]) == isupper(input2[j])) {
                output += toupper(input1[j]);
            } else {
                output += tolower(input1[j]);
            }
        }

        cout << output << endl;
    }

    return 0;
}
