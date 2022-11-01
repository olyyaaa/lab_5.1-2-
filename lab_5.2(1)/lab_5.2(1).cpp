// lab_5.2(1).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void S(const double x, const double eps, int& n, double& s);
void A(const double x, const int n, double& a);
int main()
{
	double xp, xk, x, dx, eps, s = 0;
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "exp(x)" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		S(x, eps, n, s);
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << exp(x) << " |"
			<< setw(10) << setprecision(5) << s << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}
void S(const double x, const double eps, int& n, double& s)
{
	n = 0; // вираз залежить від умови завдання варіанту
	double a = 1; // вираз залежить від умови завдання варіанту
	s = a;
	do {
		n++;
		A(x, n, a);
		s += a;
	} while (abs(a) >= eps);
}
void A(const double x, const int n, double& a)
{
	double R = (x*x) / n; // вираз залежить від умови завдання варіанту
	a *= R;
}
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double C(const double x, const double eps, int& n, double s);
double B(const double x, const int n, double a);
int main1()
{
	double xp, xk, x, dx, eps, s = 0;
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "exp(x)" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		s = C(x, eps, n, s);
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << exp(x) << " |"
			<< setw(10) << setprecision(5) << s << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}
double C(const double x, const double eps, int& n, double s)
{
	n = 0; // вираз залежить від умови завдання варіанту
	double a = 1; // вираз залежить від умови завдання варіанту
	s = a;
	do {
		n++;
			a =B(x, n, a);
		s += a;
	} while (abs(a) >= eps);
	return s;
}
double B(const double x, const int n, double a)
{
	double R = (x*x) / n; // вираз залежить від умови завдання варіанту
	a *= R;
	return a;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
