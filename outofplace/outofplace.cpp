#include <bits/stdc++.h>

using namespace std;

int main()  {
    freopen("outofplace.in", "r", stdin);
	freopen("outofplace.out", "w", stdout);
    int n;
    cin >> n;
    int cows[n];
    int sorte[n];
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        cows[i] = p;
        sorte[i] = p;
    }
    sort(sorte, sorte+n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (cows[i] != sorte[i])    {
            ans += 1;
        }
    }
    cout << ans-1 << endl;
}