#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1;
	
	for (int c = 1; c<31; c++)
	{
		str1 = "";
		
		if (c%3==0) str1.append("Fizz");
		if (to_string(c%10)=="3") str1.append("Fizz");
		if (to_string(c/10)=="3") str1.append("Fizz");

		if (c%5==0) str1.append("Buzz");
		if (to_string(c%10)=="5") str1.append("Buzz");
		if (to_string(c/10)=="5") str1.append("Buzz");
			
		if (c%7==0) str1.append("Woof");
		if (to_string(c%10)=="7") str1.append("Woof");
		if (to_string(c/10)=="7") str1.append("Woof");
			
		if (str1=="") str1.append(to_string(c));
		
	 cout << str1 << " ";
	 	
	}
	
	cout << endl;
	
	return 0;
}

