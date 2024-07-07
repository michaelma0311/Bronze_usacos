#include <bits/stdc++.h>
using namespace std;

int main()  {
    freopen("speeding.in", "r", stdin);
	freopen("speeding.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    int cur = 0;
    vector<int> limit(100);
    for (int i = 0; i < n; i++) {
        int l, s;
        cin >> l >> s;
        for (int j = cur; j < cur + l; j++)    {
            limit[j] = s;
        }
        cur += l;
    }
    int start = 0;
    vector<int> time(100);
	for (int i = 0; i < m; i++) {
		int l, s;
		cin >> l >> s;
		for (int j = start; j < start + l; j++) {
			time[j] = s;
		}
		start += l;
	}

	int ans = 0;
	for (int i = 0; i < 100; i++) {
		ans = max(ans, time[i] - limit[i]);
	}
	cout << ans << endl;
 
    
}