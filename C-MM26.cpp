#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    int x;
    while (cin >> x)
    {
        for (int i = 1; i < x + 1; i++)
            cout << i << "*" << i << "=" << i * i <<endl;
    }
    return 0;
}
