#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> grass;
vector<vector<int>> neighbors;


void dfs(int cur, int prev) {
    int num = 1;
    for (int i : neighbors[cur]) {
        if (i == prev) {
            continue;
        }
        while (num == grass[cur] || num == grass[prev]) {
            
            num += 1;
        }
        grass[i] = num;
        dfs(i, cur);
        num += 1;
    }
}

int main()  {
    freopen("planting.in", "r", stdin);
	freopen("planting.out", "w", stdout);
    int n;
    cin >> n;
	grass = vector<int>(n);
	neighbors = vector<vector<int>>(n);
    for (int i = 0; i < n-1; i++)   {
        int a;
        int b;
        cin >> a >> b;
        neighbors[a-1].push_back(b-1);
        neighbors[b-1].push_back(a-1);
    }
    grass[0] = 1;

    dfs(0, 0);
    int ans;
    for (int i = 0; i < n; i++) {
        ans = max(ans, grass[i]);
    }
    cout << ans << endl;
}