#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
	int x;
	while (cin >> x)
	{
		double y = x * 0.9;

		if (x > 800 && x < 1500)
			y *= 0.9;
		if (x >= 1500)
			y *= 0.79;
		std::cout << std::fixed;
        std::cout << std::setprecision(1);
        std::cout << y << endl;
	}
	return 0;
}
