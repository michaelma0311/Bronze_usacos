#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("circlecross.in","r",stdin);
	freopen("circlecross.out","w",stdout);
	string s;
	cin >> s;
	int start[26];
    int end[26];
	// Set all elements of Start and End arrays to -1.
    for (int i = 0; i < 26; i++)    {
        start[i] = -1;
        end[i] = -1;
    }
	for (int i = 0; i < 52; ++i) {
		if (start[s[i]-'A'] == -1)  {
            start[s[i]-'A'] = i;
        }
		else {
            end[s[i]-'A'] = i;
	    }
    }
	int ans = 0;
	for (int i = 0; i < 26; ++i)    {
		for (int j = 0; j < 26; ++j)    {
            if (start[i] < start[j] and start[j] < end[i] and end[i] < end[j])  {
                ans += 1;
                }
            }
        }
	cout << ans << endl;
}


