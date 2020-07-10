#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    double x;
    while (cin >> x)
    {
        x *= (1.6);

        std::cout << std::fixed;
        std::cout << std::setprecision(1);
        std::cout << x << endl;
    }
    return 0;
}
