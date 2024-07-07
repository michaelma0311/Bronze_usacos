#include <bits/stdc++.h>

using namespace std;


int main() {
	freopen("notlast.in", "r", stdin);
	freopen("notlast.out", "w", stdout);
	int n;
	cin >> n;

	map<string, int> logs;
	for (int i = 0; i < n; i++) {
		string a;
		int b;
		cin >> a >> b;
		logs[a] += b;
	}

	vector<pair<int, string>> cows;
	for (pair<string, int> i : logs) {
		cows.push_back({i.second, i.first});
	}
	sort(cows.begin(), cows.end());

	int index = 0;
	if (cows.size() == 7) {
		while (index < cows.size() && cows[index].first == cows[0].first) {
			index++;
		}
	}

	if (index < cows.size() && (index + 1 == cows.size() || cows[index].first != cows[index + 1].first)) {
		cout << cows[index].second << endl;
	} else {
		cout << "Tie" << endl;
	}
}
