#include <bits/stdc++.h>
#define int long long
using namespace std;
int T, n;
signed main() {
    cin >> T;
    while (T --) {
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i ++) a[i] = n - i + 1;
        for (int k = 1; k <= n - 1; k ++) {
            vector<int> b = a;
            swap(b[k], b[k + 1]);
            for (int i = 1; i <= n; i ++) cout << b[i] << " \n"[i == n];
        }
        for (int i = 1; i <= n; i ++) cout << a[i] << " \n"[i == n];
    }
}//msdika