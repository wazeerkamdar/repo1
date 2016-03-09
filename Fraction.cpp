#include "Fraction.h"
#include <string>
#include <iostream>

using namespace std;

fraction::fraction()
{
	num=1;
	den=1;
}


fraction::fraction(int nt,int dt)
{
	setnd(nt,dt);
}

int fraction::gcd(int nt, int dt) 
{ 
    return dt == 0 ? nt : gcd(dt, nt % dt); 
}


int fraction::lcm(int nt, int dt) 
{ 
    return (nt*dt)/gcd(nt, dt); 
}


void fraction::setnd(int nt, int dt)
{
	num = nt;
	if (dt==0) 
	{
		cout << "Cannot have a 0 denominator, setting to 1 instead" << endl;
		den=1;
	}
	
	else den = dt;
}


void fraction::getnd(int& nt, int& dt)
{
	nt = num;
	dt = den;
}


fraction& fraction::addfrc(fraction& fr2, fraction& frH)
{
	int num2,den2;
	
	fr2.getnd(num2,den2);
	frH.num = num*lcm(den,den2)/den + num2*lcm(den,den2)/den2;
	frH.den = lcm(den,den2);
	
	return frH;
}

fraction fraction::operator*(fraction& fr2)
{
	int num2,den2,numH,denH;
	fraction frH;
	
	fr2.getnd(num2,den2);
	numH = num*num2/gcd(num*num2,den*den2);
	denH = den*den2/gcd(num*num2,den*den2);
	frH.setnd(numH,denH);
	
	return frH;
}

std::string fraction::printfrc()
{
	std::string frcstr;
	long long tnum = num; //VS2010 problems
	long long tden = den;

	frcstr = to_string(tnum) + "/" + to_string(tden);
	return frcstr;
}



