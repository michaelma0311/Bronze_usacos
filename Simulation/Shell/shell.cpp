#include <cstdio>
#include <algorithm>

int N, shell_at_position[3], counter[3];
int main()
{
	freopen("shell.in", "r", stdin);
	freopen("shell.out", "w", stdout);
	scanf("%d", &N);
	for(int i=0;i<3;++i)
		shell_at_position[i]=i; 
	for(int i=0;i<N;++i)
	{
		int a,b,g;
		scanf("%d%d%d", &a, &b, &g);
		--a, --b, --g; 
		std::swap(shell_at_position[a], shell_at_position[b]);
		++counter[shell_at_position[g]]; 
	}
	printf("%d\n", std::max({counter[0], counter[1], counter[2]}));
	return 0;
}
