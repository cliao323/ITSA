#include<iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    double x, y, z, d;
    while (cin >> x >> y >> z)
    {
    d = ((x+y)*z/2);
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    std::cout << "Trapezoid area:" << d << endl;

    }
    return 0;
}
