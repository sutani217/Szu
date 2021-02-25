#include <iostream>

using namespace std;

int convert(char digit)
{
	if(digit == 'I') return 1;
	else if(digit == 'V') return 5;
	else if(digit == 'X') return 10;
	else if(digit == 'L') return 50;
	else if(digit == 'C') return 100;
	else if(digit == 'D') return 500;
	else return 1000;
}

int main()
{
	ios_base::sync_with_stdio(false);
	string input;
	cin >> input;
	int len = input.length();
	int w = 0;
	for(int i = 0; i <= len - 1; i++)
	{
		int current = convert(input[i]);
		if(i != len - 1)
		{
			int next = convert(input[i + 1]);
			if(next > current)
			{
				w += next - current;
				i++;
			}
			else w += current;
		}
		else w+= current;
	}
	printf("%d", w);
	return 0;
}
