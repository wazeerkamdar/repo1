#include "Fraction.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	
	cout << "Test" << endl;
	fraction frac1(1,4), frac2(3,8), frac3(2,5);
	fraction sumfrac, multfrac;
	
	cout << "Fraction 1 = " << frac1.printfrc() << endl;
	cout << "Fraction 2 = " << frac2.printfrc() << endl;
	cout << "Fraction 3 = " << frac3.printfrc() << endl;
	
    frac1.addfrc(frac2,sumfrac);
	cout << "Sum of fraction 1 and 2 is " << sumfrac.printfrc() << endl;
	frac1.addfrc(frac3,sumfrac);
	cout << "Sum of fraction 1 and 3 is " << sumfrac.printfrc() << endl;
	frac2.addfrc(frac3,sumfrac);
	cout << "Sum of fraction 2 and 3 is " << sumfrac.printfrc() << endl;
	multfrac = frac1*frac2;
	cout << "The product of fraction 1 and 2 is " << multfrac.printfrc() << endl;
	multfrac = frac1*frac3;
	cout << "The product of fraction 1 and 3 is " << multfrac.printfrc() << endl;
    multfrac = frac2*frac3;
	cout << "The product of fraction 2 and 3 is " << multfrac.printfrc() << endl;
	cin.get();

	return 0;
}
