#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<int(n);i++)
#define forsn(i,s,n) for(int i=int(s);i<int(n);i++)

typedef long long ll;
using namespace std;
/**
**/

vector<bool> visited(8);
vector<set<int>> adj(8);
vector<string> cows = {"Beatrice", "Belinda", "Bella", "Bessie", "Betsy", "Blue", "Buttercup", "Sue"};
map<string,int> ind;

void dfs(int node){
	if(visited[node])return;
	visited[node]=true;
	cout << cows[node] << "\n";
	for(auto &x:adj[node])if(!visited[x])dfs(x);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("lineup.in","r",stdin);
	freopen("lineup.out","w",stdout);
	forn(i,cows.size())ind[cows[i]]=i;
	int n;
	cin >> n;
	forn(i,n){
		string a,b,c,d,e,f;
		cin >> a >> b >> c >> d >> e >> f;
		int x = ind[a],y=ind[f];
		adj[x].insert(y);
		adj[y].insert(x);
	}
	forn(i,8){
		if(!visited[i]&&adj[i].size()<2)dfs(i);
	}
}
