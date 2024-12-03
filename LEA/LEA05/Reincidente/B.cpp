#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string, int> database;
    string name;
    int crime;

    while (cin >> name >> crime) {
        if (name == "fim" && crime == 0) {
            break;
        }
        if (database.find(name) == database.end()) {
            database[name] = 0;
            cout << name << " eh reu primario" << endl;
        } else {
            database[name]++;
            cout << name << " eh reincidente com " << database[name] << " crime(s)" << endl;
            }
        }
    return 0;
}