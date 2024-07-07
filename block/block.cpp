#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	freopen("blocks.in", "r", stdin);
	freopen("blocks.out", "w", stdout);

	int ans [26] = { };
	int n;
	cin >> n;
	string a, b;
	for (int i = 0; i < n; i++) {
		int alis [26] = { };
		int blis [26] = { };
		cin >> a >> b;
		for (int j = 0; j < a.length(); j++) {
			alis[a.at(j) - 97]++;
		}
		for (int j = 0; j < b.length(); j++) {
			blis[b.at(j) - 97]++;
		}
		for (int j = 0; j < 26; j++) {
			ans[j] += max(alis[j], blis[j]);
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << ans[i] << endl;
	}
}  