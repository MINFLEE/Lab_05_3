// Lab_05_3

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double p(const double x);

int main()
{
	double gp, gk, z;
	int n;

	cout << "gp = "; cin >> gp;
	cout << "gk = "; cin >> gk;
	cout << "n = "; cin >> n;

	double dg = (gk - gp) / n;
	double g = gp;

	while (g <= gk)
	{
		z = p(1 - 2 * g) + pow(p(1 - p(1) + pow(p(2 * g), 2)), 2);
		cout << "|" << setw(3) << g << "|" << setw(6) << z << endl;
		g += dg;
	}

	return 0;

}

double p(const double x)
{
	if (abs(x) >= 1)
		return (pow(cos(x), 2) - sin(x)) / exp(sin(x));
	else
	{
		double S = 0;
		int j = 0;
		double a = 1;
		S = a;
		do
		{
			j++;
			double R = x / (2 * (j * (j - 1)));
			a *= R;
			S += a;
		} while (j < 4);
		return S;
	}
}