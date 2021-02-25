#include <iostream>

using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	for(int i = 0; i < N; i++)
	{
		if(i % 2 == 0) for(int j = N * i + 1; j <= N * (i + 1); j++) printf("%d ", j);
		else for(int j = N * (i + 1); j >= N * i + 1; j--) printf("%d ", j);
		printf("\n");
	}
	return 0;
}
