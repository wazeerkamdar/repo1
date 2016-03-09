#include <cstdlib>
#include "dice.h"

dice::dice()
{
	numrolls = 5;
	results = new int[numrolls];
	for(int c=0;c<numrolls;c++)
	{
	 results[c] = roll();
	}
}

dice::dice(int nr)
{
	numrolls = nr;
	results = new int[numrolls];
	for(int c=0;c<numrolls;c++)
	{
	 results[c] = roll();
	}
}


int dice::roll()
{
 return rand() % 6 + 1;
}


int dice::getnr()
{
	return numrolls;
}


int* dice::getpr()
{
	return results;
}


dice::~dice()
{
	delete[] results;
}


