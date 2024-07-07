#include <cstdio>
#include <algorithm>

const int N = 3;
int capacity[N], milk[N];

void pour(int i, int j)
{
	int amt=std::min(milk[i], capacity[j]-milk[j]);
	milk[i] -= amt;
	milk[j] += amt;
}

int main()
{
	freopen("mixmilk.in", "r", stdin);
	freopen("mixmilk.out", "w", stdout);
	for(int i=0;i<N;++i)
		scanf("%d%d", capacity+i, milk+i);
	for(int i=0;i<100;++i)
		pour(i%N, (i+1)%N); 
	for(int i=0;i<N;++i)
		printf("%d\n", milk[i]);
	return 0;
}