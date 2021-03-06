#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	if(N == 1)
	{
		printf("3 5");
		return 0;
	}
	int count = 1;
	for(int i = 6; ; i += 6)
	{
		bool is = true;
		int p1 = i - 1;
		int p2 = i + 1;
		for(int j = 4; j <= sqrt(p2); j++)
		{
			if(p1 % j == 0 || p2 % j == 0)
			{
				is = false;
				break;
			}
		}
		if(is)
		{
			count++;
			if(count == N)
			{
				printf("%d %d", p1, p2);
				return 0;
			}
		}
	}
}
