#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1;
	
	for (int c = 1; c<21; c++)
	{
		if ((c%3==0) && (c%5==0))
			str1 = "FizzBuzz";
		else if (c%3==0)
			str1 = "Fizz";
		else if (c%5==0)
			str1 = "Buzz";
		else
			str1 = to_string(c); 
		
	 cout << str1 << " ";
	 	
	}
	
	cout << endl;
	
	return 0;
}

