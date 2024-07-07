#include <bits/stdc++.h>
#include <fstream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;


vector<string> cows = {"Beatrice", "Belinda", "Bella", "Bessie", "Betsy", "Blue", "Buttercup", "Sue"};

int main()  {
    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);
    map<string, int> cow_inds;
    for (int i = 0; i < cows.size(); i++) {
        cow_inds[cows[i]] = i;
    }
    int num;
    cin >> num;
    vector<vector<int> > neighbors(cows.size());
    for (int i = 0; i < num; i++)   {
        string cow1;
        string cow2;
        string useless;
        cin >> cow1 >> useless >> useless >> useless >> useless >> cow2;
        
        int first = cow_inds[cow1];
        int sec = cow_inds[cow2];
        neighbors[first].push_back(sec);
        neighbors[sec].push_back(first);
    }
    vector<int> ans;
    vector<bool> visited(cows.size());
    for (int i = 0; i < cows.size(); i++) {
		if (!visited[i] && neighbors[i].size() <= 1) {
			visited[i] = true;
			ans.push_back(i);
           if (neighbors[i].size() == 1) {
				int prev = i;
				int at = neighbors[i][0];
				while (neighbors[at].size() == 2) {
					visited[at] = true;
					ans.push_back(at);
					
					int a = neighbors[at][0];
					int b = neighbors[at][1];
					int temp_at = a == prev ? b : a;
					prev = at;
					at = temp_at;
				}
				visited[at] = true;
				ans.push_back(at);
			}
        }
    }
    for (int i : ans) {
        cout << cows[i] << endl;
    }
}