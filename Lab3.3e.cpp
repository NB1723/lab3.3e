#include "Lorry.h"

int main()
{
	cout << "Number of elements of class Lorry: " << Lorry::Count() << endl;

	cout << "Initialization of private B" << endl;
	Lorry B1("MAN", 8, 320, 20000);
	cout << B1 << endl;

	cout << "Number of elements of class Lorry: " << Lorry::Count() << endl;

	cout << "Size = " << sizeof(B1) << endl << endl;

	cout << "Principle of substitution" << endl << endl;
	Lorry A1 = B1;
	cout << A1 << endl;

	cout << "Number of elements of class Lorry: " << Lorry::Count() << endl;

	cout << "Initialization of private C1" << endl;
	Lorry C1;
	cin >> C1;
	cout << C1 << endl;

	cout << "Number of elements of class Lorry: " << Lorry::Count() << endl;

	cout << "++B1: " << endl;
	cout << ++B1 << endl;
	cout << "--B1: " << endl;
	cout << --B1 << endl;
	cout << "B1++: " << endl;
	cout << B1++ << endl;
	cout << "B1--: " << endl;
	cout << B1-- << endl;
}