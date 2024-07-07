#include <bits/stdc++.h>
using namespace std;

int main()  {
    freopen("whereami.in","r",stdin);
    freopen("whereami.out","w",stdout);
     int n;
     cin >> n;
     string s;
     cin >> s;
     set<string> a;
     int ans = 0;
     for (int i = 1; i <= n; i++)   {
        bool dif = false;
        for (int j = 0; j <= n-i; j++)  {
            string mid = s.substr(j, i);
            if (a.count(mid) != 0)  {
                dif = true;
                break;
            }
            a.insert(mid);
        }
        if (dif == false)    {
            ans = i;
            break;
        }
     }
     cout << ans << endl;
}