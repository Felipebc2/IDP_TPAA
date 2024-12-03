#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int N;
    cin >> N;

    bitset<32> bits(N);
    bitset<32> reversedBits;

    for (int i = 0; i < 32; i ++) {
        reversedBits[i] = bits[31 - i];
    }

    unsigned int reversed = reversedBits.to_ulong();
    cout << reversed << endl;
    
    return 0;
}
