#include<bits/stdc++.h> //To open/include all libraries 
using namespace std;

// g++ square.cpp -o square
// ./square

int main() {
	freopen("square.in","r",stdin);
	freopen("square.out","w",stdout);
	int x1, y1, x2, y2; cin >>x1>>y1>>x2>>y2;
    int x3, y3, x4, y4; cin >>x3>>y3>>x4>>y4;
    int maxx = max(x2,x4)-min(x1,x3);
	int maxy = max(y2,y4)-min(y1,y3);
    int ans = max(maxx, maxy);

	cout << int(pow(ans,2)) << endl;
}