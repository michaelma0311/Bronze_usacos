	#include<bits/stdc++.h>

	using namespace std;

int main() {
	ofstream cout ("cowsignal.out");
	ifstream cin ("cowsignal.in");
	int m, n, k;
	cin >> m >> n >> k;
	char a[10][10];
	for(int i = 0; i < m; ++i) {
		for(int j = 0; j < n; ++j) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            for (int z = 0; z < n; z++) {
                for (int x = 0; x < k; x ++){
                    cout << a[i][z];
                }
            }
            cout << '\n';
        }
    }
}
