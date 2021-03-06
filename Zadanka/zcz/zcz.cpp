#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long N;
	scanf("%lld", &N);
	vector <long long> garden(N + 4);
	for(int i = 2; i < N + 2; i++) scanf("%lld", &garden[i]);
	garden[0] = garden[N];
	garden[1] = garden[N + 1];
	garden[N + 2] = garden[2];
	garden[N + 3] = garden[3];
	long long max = 0;
	for(int i = 0; i < N; i++)
	{
		long long sum = garden[i] + garden[i + 1] + garden[i + 2];
		if(sum > max) max = sum;
	}
	printf("%lld", max);
	return 0;
}
