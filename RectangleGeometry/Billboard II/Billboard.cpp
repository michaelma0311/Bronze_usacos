#include <iostream>
#include <cstdio>

using namespace std;

bool coverc(int x, int y, int x1, int y1, int x2, int y2) {
	return x >= x1 && x <= x2 && y >= y1 && y <= y2;
}

int main() {
	freopen("billboard.in","r",stdin);
	freopen("billboard.out","w",stdout);

	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int x3, y3, x4, y4;
	cin >> x3 >> y3 >> x4 >> y4;
    int counter = 0;

	if (coverc(x1, y1, x3, y3, x4, y4)) {
        counter++;
    }
	if (coverc(x1, y2, x3, y3, x4, y4)) {
        counter++;
    }
     
	if (coverc(x2, y1, x3, y3, x4, y4)) {
        counter++;
    }
	if (coverc(x2, y2, x3, y3, x4, y4)) {
        counter++;
    }

	if (counter == 1 or counter == 0) {
		cout << (x2 - x1) * (y2 - y1);
	} else if (counter == 4) {
		cout << 0;
	} else {
		int xl = max(x1, x3);
		int xr = min(x2, x4);
		int yl = max(y1, y3);
		int yr = min(y2, y4);
		// subtract away the area of the intersection
		cout << (x2 - x1) * (y2 - y1) - (xr - xl) * (yr - yl);
	}
}