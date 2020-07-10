#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    double x, y,d;
    while (cin >> x >> y)
    {
        d = (x*y/2);
        std::cout << std::fixed;
        std::cout << std::setprecision(1);
        std::cout << d << endl;
    }
    return 0;
}
