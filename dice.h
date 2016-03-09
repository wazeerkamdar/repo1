#ifndef DICE_H
#define DICE_H

class dice
{
	int numrolls;
	int* results;
	
	public:
		dice();
		dice(int);
		int roll();
		int getnr();
		int* getpr();
		~dice();
};

#endif

