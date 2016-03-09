#include <iostream>
#include "dice.h"
#include <ctime>

using namespace std;

float average(int n, int* parr)
{
	float sum = 0;
	 
	for(int c=0;c<n;c++)
	{
	 sum += parr[c]; 
	}
	
	return sum/n;
};

float average(int n, dice* pdice)
{
	float sum = 0;
	int* parr = pdice->getpr();
	 
	for(int c=0;c<n;c++)
	{
	 sum += parr[c]; 
	}
	
	return sum/n;
};



int main()
{
	srand(time(0));
	dice ad, ad2(8);
	float avg;
	
	
	//First Dice
	ad.roll();
	
	int nr1 = ad.getnr();
	int* pr1 = ad.getpr();
	avg = average(nr1, pr1); //Passing int + pointer to array of int
	cout << "The rolls are ";
	for (int c=0;c<nr1;c++)
	{
		cout << " " << pr1[c];
	}
	
	cout << endl;
	cout << "The average of the above rolls is " << avg << endl; 
	
	//Second Dice
	ad2.roll();
	
	avg = average(ad2.getnr(), &ad2); //Passing numrolls and address of object
	cout << "The rolls are ";
	for (int c=0;c<ad2.getnr();c++)
	{
		cout << " " << *(ad2.getpr()+c);
	}
	
	cout << endl;
	cout << "The average of the above rolls is " << avg << endl; 
	
	
	cin.get();

	return 0;
}

