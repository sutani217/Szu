#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string num;
	cin >> num;
	if(num[0] == 'X')
	{
		if(num[2] == '1') printf("891");
		else if(num[2] == '2') printf("792");
		else if(num[2] == '3') printf("693");
		else if(num[2] == '4') printf("594");
		else if(num[2] == '5') printf("495");
		else if(num[2] == '6') printf("396");
		else if(num[2] == '7') printf("297");
		else printf("198");
	}
	else
	{
		if(num[0] == '1') printf("198");
		else if(num[0] == '2') printf("297");
		else if(num[0] == '3') printf("396");
		else if(num[0] == '4') printf("495");
		else if(num[0] == '5') printf("594");
		else if(num[0] == '6') printf("693");
		else if(num[0] == '7') printf("792");
		else printf("891");		
	}
	return 0;
}
