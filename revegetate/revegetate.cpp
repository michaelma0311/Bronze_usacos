#include <bits/stdc++.h>
using namespace std;


int main()  {
    freopen("revegetate.in","r",stdin);
    freopen("revegetate.out","w",stdout);
    int n, m;
    cin >> n >> m;
    vector<int> mi;
    vector<int> ma;
    vector<int> ans(n);
    for (int i = 0; i < m; i++) {
        int a1, b1;
        cin >> a1 >> b1;
        int a = min(a1, b1);
        int b = max(a1, b1);
        mi.push_back(a);
        ma.push_back(b);
    }
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 1; j <= 4; j++)    {
            bool tof = false;
            for (int k = 0; k < m; k++) {
                if (ma[k] == i+1 && ans[mi[k]] == j)    {
                    tof = true;
                }
            }
            if (tof == false)   {
                break;
            }
            
            
        }
        ans[i+1] = j;
        cout << j;
        
    }
    cout << endl;
}