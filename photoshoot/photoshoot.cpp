
 #include <bits/stdc++.h>
using namespace std;

 
int main()
{
    int n;
    cin >> n;
    string p;
    cin >> p;
    char str[n+1];
    for (int i = 0; i < n; i++) {
        str[i+1] = p[i];
    }
 
    int cur= 0;
    for (int i = n; i >= 2; i = i - 2)
    {
        if (str[i] == str[i-1]) {
            continue;
        }
 
        if (str[i] == 'G' && cur % 2 == 1)  {
            cur += 1;
        }
 
        if (str[i] == 'H' && cur % 2 == 0)  {
            cur += 1;
        }
    }
 
    cout << cur << endl;
 
}

/*
14
GGGHGHHGHHHGHG
*/

