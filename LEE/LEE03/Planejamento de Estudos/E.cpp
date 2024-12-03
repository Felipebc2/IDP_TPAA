#include <bits/stdc++.h>
using namespace std;

int main() {
    int Caps, Hours;
    cin >> Caps >> Hours;

    vector<int> exerc(Caps);
    for (int i = 0; i < Caps; i++) {
        cin >> exerc[i];
    }

    // Limites da busca binária.
    int left = 1;
    int right = *max_element(exerc.begin(), exerc.end());
    int result = right;

    while (left <= right) {
        int mid = (left + right) / 2;
        int sessionsNeeded = 0;

        for (int i = 0; i < Caps; i++) {
            sessionsNeeded += (exerc[i] + mid - 1) / mid;
        }

        if (sessionsNeeded <= Hours) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << result << endl;
    return 0;
}
