#include <iostream>

using namespace std;

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = a + b;
	int product = a * b;
	int diff = a - b;
	if(diff > sum && diff > product)
	{
		if(a < 0) printf("(%d)", a);
		else printf("%d", a);
		printf("-");
		if(b < 0) printf("(%d)", b);
		else printf("%d", b);
		printf("=");
		if(diff < 0) printf("(%d)", diff);
		else printf("%d", diff);
	}
	else if(sum > diff && sum > product)
	{
		if(a < 0) printf("(%d)", a);
		else printf("%d", a);
		printf("+");
		if(b < 0) printf("(%d)", b);
		else printf("%d", b);
		printf("=");
		if(sum < 0) printf("(%d)", sum);
		else printf("%d", sum);
	}
	else if(product > sum && product > diff)
	{
		if(a < 0) printf("(%d)", a);
		else printf("%d", a);
		printf("*");
		if(b < 0) printf("(%d)", b);
		else printf("%d", b);
		printf("=");
		if(diff < 0) printf("(%d)", product);
		else printf("%d", product);
	}
	else printf("NIE");
	return 0;
}
