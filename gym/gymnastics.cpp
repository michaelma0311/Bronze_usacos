#include<bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    ofstream cout ("cowsignal.out");
	ifstream cin ("cowsignal.in");
    int ans = 0;
    int k;
    int n;
    cin >> k, n;
    int gym[];
    for (int i = 0; i < k; i++) {
        string a;
        cin << a;
        int p[];
        for (int j = 0; j < a.length(); j++) {
            if (a[j] != ' ') {
                p.push_back(a[j]);
            }
        }
        gym.push_back(p);
    }
    for (int i = 1; i < n+1; i++) {
        for (int j = i+1; i < n+1; j++) {
            int where1 = 0;
            int where2 = 0;
            for (int l = 0; l < gym.size(); i ++) {
                
            }
        }
    }
}