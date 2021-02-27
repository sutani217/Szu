#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin >> T;
	for(int i = 0; i < T; i++)
	{
		char type;
		cin >> type;
		if(type == 'H')
		{
			double a, b, c;
			cin >> a >> b >> c;
			double p = (a + b + c) / 2;
			cout << setprecision(2) << fixed << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
		}
		else if(type == 'S')
		{
			double a, b, gamma;
			cin >> a >> b >> gamma;
			gamma = gamma / 180 * 3.14159265358979323846;
			cout << setprecision(2) << fixed << a * b * sin(gamma) / 2 << endl;
		}
		else
		{
			double a, beta, gamma;
			cin >> a >> beta >> gamma;
			beta = beta / 180 * 3.14159265358979323846;
			gamma = gamma / 180 * 3.14159265358979323846;
			double x = tan(beta) * a / (tan(beta) + tan(gamma));
			double h = tan(gamma) * x;
			cout << setprecision(2) << fixed << a * h / 2 << endl;
		}
	}
	return 0;
}
