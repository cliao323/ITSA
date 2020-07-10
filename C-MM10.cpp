#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    double x,d;
    while (cin >> x)
    {
        d = ((x*9/5)+32);
        std::cout << std::fixed;
        std::cout << std::setprecision(1);
        std::cout << d << endl;
    }
    return 0;
}
