#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
	int a, b;
	cout << "Jest to program obliczajacy sume oraz iloraz dwoch liczb \n \n";
	cout << "\n Podaj pierwsza liczbe:   ";
	cin >> a;
	cout << "\n Podaj druga liczbe:   ";
	cin >> b;
	cout << "\n \n Suma liczby " << a << " i liczby " << b << " wynosi " << a+b << endl;
	cout << "\n Iloraz liczby " << a << " i liczby " << b << " wynosi " << a*b << endl << endl << endl;
	cout << "Created by Tigersoft \n \n";
	system ("pause");
	return 0;
}
