#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, P, K;
	scanf("%d %d %d", &N, &P, &K);
	int w = 0;
	for(; P <= K; P++)
	{
		int w_local = 0;
		for(char i : to_string(P))
		{
			if(i == '0') w_local += 0;
			else if(i == '1') w_local += 1;
			else if(i == '2') w_local += 2;
			else if(i == '3') w_local += 3;
			else if(i == '4') w_local += 4;
			else if(i == '5') w_local += 5;
			else if(i == '6') w_local += 6;
			else if(i == '7') w_local += 7;
			else if(i == '8') w_local += 8;
			else w_local += 9;
		}
		if(w_local == N) printf("%d\n", P);
	}
	return 0;
}
