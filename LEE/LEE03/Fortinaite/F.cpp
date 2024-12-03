#include <bits/stdc++.h>
using namespace std;

int main() {
    int J;
    cin >> J;
    vector<pair<string, string>> jogadores(J);

    for (int i = 0; i < J; i++) {
        string nick, tempo;
        cin >> nick >> tempo;
        jogadores[i] = make_pair(nick, tempo);
    }

    // Ordenação
    sort (jogadores.begin(), jogadores.end(), [](pair<string, string> a, pair<string, string> b) {
        if (a.second != b.second) {
            return a.second > b.second;
        }
        return a.first > b.first;
    });

    for (int i = 0; i < J; i++) {
        cout << i + 1 << ". " << jogadores[i].second << " - " << jogadores[i].first << endl;
    }


    return 0;
}
