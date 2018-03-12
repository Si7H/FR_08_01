#include <iostream>

using namespace std;

int main()
{
	string number;
	cin >> number;
	
	for(unsigned i = 0; i < number.size(); ++i)
	{
		if(!(static_cast<int>(number[i] - 48) % 2))
		{
			cout << "TAK" << endl;
			break;
		}
	}
	
}