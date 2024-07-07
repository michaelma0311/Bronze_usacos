#include <bits/stdc++.h>

using namespace std;

int main()  {
    freopen("stacking.in", "r", stdin);
	freopen("stacking.out", "w", stdout);
    int n, k;
    cin >> n >> k;
    vector<int> lis(n + 1);
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        lis[x] += 1;
        lis[y+1] -= 1;

    }
    int ans = 0;
    int ansl[n+1];
    ansl[0] = 0;
    for (int i = 1; i < n+1; i++) {
        ansl[i] = ansl[i-1] + lis[i-1];
        //cout << ansl[i] << endl;
    }
    sort(ansl, ansl+n+1);
    cout << ansl[(n+1)/2] << endl;

}