#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    double x, y;
    while (cin >> x >> y)
    {
        double d = 0;

		if (x <= 60)
			d = x * y;
		else if (x <= 120)
		{
			d += 60 * y;
			d += (x - 60) * y;
		}
		else
		{
			d += 60 * y;
			d += 60 * 1.33 * y;
			d += (x - 120) * 1.66 * y;
		}

        std::cout << std::fixed;
        std::cout << std::setprecision(1);
        std::cout << d << endl;
    }
    return 0;
}
