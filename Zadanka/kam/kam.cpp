#include <bits/stdc++.h>

using namespace std;

unordered_map <int, bool> u_map;

int main()
{
	int n;
	scanf("%d", &n);
	int w = 0, w2 = 0;
	for(int i = 0; i < n; i++)
	{
		int stone;
		scanf("%d", &stone);
		if(u_map[stone]) w++;
		else
		{
			u_map[stone] = true;
			w2++;
		}
	}
	printf("%d", w / 2 + w2);
	return 0;
}
