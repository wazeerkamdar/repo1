#ifndef FRACTION_H
#define FRACTION_H

#include <string>


class fraction
{
	int num,den;
	
 public:
 	fraction();
 	fraction(int,int);
 	void setnd(int,int);
 	void getnd(int&,int&);
 	int gcd(int, int);
 	int lcm(int, int);
 	fraction& addfrc(fraction&, fraction&);
 	fraction operator*(fraction&);
	std::string printfrc();
};

#endif
