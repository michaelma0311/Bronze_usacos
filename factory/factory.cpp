#include <bits/stdc++.h>

using namespace std;

vector<int> adj[100];
vector<bool> visited(100, false);
int n;

void dfs(int cur){
	visited[cur] = true;
	for(int i : adj[cur]){
		if(!visited[i]){
			dfs(i);
		}
	}
}

int main()  {
    freopen("factory.in", "r", stdin);
	freopen("factory.out", "w", stdout);
    cin >> n;
    for (int i = 0; i < (n-1); i++) {
        int a, b;
        cin >> a >> b;
        adj[b-1].push_back(a-1);
    }
    for (int i = 0; i < n; i++) {
        fill(visited.begin(), visited.end(), false);
        dfs(i);
        bool f = true;
        for (int i = 0; i < n; i++)    {
            if (visited[i] == false)    {
                f = false;
                break;
            }
        }
        if (f == true) {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}