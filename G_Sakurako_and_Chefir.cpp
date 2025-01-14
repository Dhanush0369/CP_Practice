#include <bits/stdc++.h>

using namespace std;

int main() {
    string S;
    cin >> S;

    int N = S.size();

    for (int i = 0; i < N; ++i) {
        if (S[i] == 'B') {
            // Any character occurring later than B is B or C
            for (int j = i + 1; j < N; ++j) {
                if (S[j] != 'B' && S[j] != 'C') {
                    // Print No if it is violated
                    cout << "No" << endl;
                    return 0;
                }
            }
        } else if (S[i] == 'C') {
            // Any character occurring later than C is C
            for (int j = i + 1; j < N; ++j) {
                if (S[j] != 'C') {
                    // Print No if it is violated
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}
