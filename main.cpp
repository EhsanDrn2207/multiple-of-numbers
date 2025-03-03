#include <iostream>
using namespace std;

int main(){

	int x, y;
	bool answer;

	while(true)
	{
        cout << "Enter x number: ";
        cin >> x;

        if(x<=0)
        {
            cout << "The number must be positive. Please try again." << endl;
            cout << "---------------------------------------------------" << endl;
        }
        else
        {
            break;
        }

	}

	cout << "Enter y number: ";
    cin >> y;

	answer = (y%x == 0) ? 1 : 0;

	if (answer==1)
	{
        cout << "The answer is True";

	}

	else
	{
        cout << "The answer is False";
    }
	cin.ignore();
	cin.get();
	return 0;

}
