#include <iostream>

using namespace std;

string DivideCheck(const string &inputNumber)
{
	for(unsigned i = 0; i < inputNumber.size(); ++i)
	{
		if(!(static_cast<int>(inputNumber[i] - 48) % 2))
		{
			return "Tak";
		}
	}
	return "Nie";
}


int main()
{
	string number;
	cin >> number;	
	cout << DivideCheck(number) << endl;
}