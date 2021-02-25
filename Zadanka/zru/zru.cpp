#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int P;
	scanf("%d", &P);
	int GCD = __gcd(P, 1000);
	printf("%d/%d", P / GCD, 1000 / GCD);
	return 0;
}
