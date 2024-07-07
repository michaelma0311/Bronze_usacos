#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>
#include <cmath>
using namespace std;

    
void setIO(string s) {
	freopen((s + ".in").c_str(),"r",stdin);
	freopen((s + ".out").c_str(),"w",stdout);
}

void solve(){

	int n;
	cin >> n;

	string type[100];
	int low[100];
	int high[100];

	for (int i = 0; i < n; i++){
		string t;
		int l, h;
		cin >> t >> l >> h;
		type[i] = t;
        low[i] = l;
        high[i] = h;
	}

	int lowl = -100000;
    int highl = 100000;

	for (int i = n - 1; i >= 0; i--){ // going backwards
		if (type[i] == "none"){
            lowl = max(lowl, low[i]);
            highl = min(highl, high[i]);
        } 
        else if (type[i] == "off"){
            lowl += low[i];
            highl += high[i];
        } 
        else if (type[i] == "on"){
            lowl -= high[i];
            highl -= low[i];
        }
	}

	cout << max(0, lowl) << " " << max(0, highl) << "\n";

    lowl = -100000;
    highl = 100000;

	for (int i = 0; i < n; i++){
        if (type[i] == "none"){
            lowl = max(lowl, low[i]);
            highl = min(highl, high[i]);
        
        }
        else if (type[i] == "off"){
            lowl -= high[i];
            highl -= low[i];

        }
        else if (type[i] == "on"){
            lowl += low[i];
            highl += high[i];
        }
	}

	cout << max(0, lowl) << " " << max(0, highl) << "\n"    ;

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	setIO("traffic");

	solve();

	return 0;
}   