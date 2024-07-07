#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("cownomics.in", "r", stdin);
	freopen("cownomics.out", "w", stdout);
	int n, m;
    cin >> n >> m;
    string spot[n];
    string plain[n];
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        spot[i] = s;
    }
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        plain[i] = s;
        //cout << plain[i] << endl;
    }
    int ans = 0;
    for(int i=0;i<m;i++){
        bool dif =true;
        for(int j = 0; j<n;j++){
            for(int k = 0 ; k <n;k++){
                //cout << spot[j][i] << ' ' << spot[k][i] << endl;
                if(spot[j][i]==plain[k][i]) {
                    dif = false;
                }
            }
        }
        if (dif == true) {
            ans += 1;
        }
    }
    cout << ans << endl;
return 0;
}