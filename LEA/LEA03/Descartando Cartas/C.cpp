#include <iostream>
#include <queue>
#include <vector>

using namespace std;

queue<int> preencherDeck(int N) {
    queue<int> deck;
    for (int i = N; i >= 1; --i) {
        deck.push(i);
    }
    return deck;
}

vector<int> processarDescarte(queue<int>& deck) {
    vector<int> discart;
    while (deck.size() > 1) {
        discart.push_back(deck.front());
        deck.pop();
        deck.push(deck.front());
        deck.pop();
    }
    return discart;
}

void imprimirResultado(const vector<int>& discart, int ultimaCarta) {
    cout << "Descarte: ";
    for (int i = 0; i < discart.size(); ++i) {
        if (i > 0) cout << ", ";
        cout << discart[i];
    }
    cout << endl;

    cout << "Ultima carta: " << ultimaCarta << endl;
}

int main() {
    int N;
    cin >> N;

    queue<int> deck = preencherDeck(N);
    vector<int> discart = processarDescarte(deck);

    imprimirResultado(discart, deck.front());

    return 0;
}
