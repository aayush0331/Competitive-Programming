#include<bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while (tc--) {

        vector<string> s(9);
        for (int i = 0; i < 9; ++i) {
            cin >> s[i];335D.
        }

        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                if (s[i][j] == '2')
                    s[i][j] = '1';
                cout << s[i][j];
            }
            cout << '\n';
        }
    }
    return 0;
}
