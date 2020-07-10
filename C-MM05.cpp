#include<iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    double x;
    while (cin >> x)
    {
        x *= x;
        x *= 10;
        x += 0.5;
        std::cout << std::fixed;
        std::cout << std::setprecision(1);
        std::cout << x/10 << endl;
    }
    return 0;
}
