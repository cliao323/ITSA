#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    int x;
    while (cin >> x)
    {
        int sum = 0;
		for (int i = 3; i < x + 1; i += 3)
			sum += i;
		cout << sum << endl;
    }
    return 0;
}
