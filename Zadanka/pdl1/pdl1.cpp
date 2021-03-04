#include <iostream>

using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	int size;
	scanf("%d", &size);
	int current = 1, max = 1, prev = size;
	for(int i = 0; i < N - 1; i++)
	{
		int size;
		scanf("%d", &size);
		if(size == prev) current++;
		else
		{
			if(current > max) max = current;
			current = 1;
			prev = size;
		}
	}
	if(current > max) max = current;
	printf("%d", max);
	return 0;
}
