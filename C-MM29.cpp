#include<iostream>
#include<iomanip>

using namespace std;

int prime(int x);

int main(void)
{
    int x;
    while (cin >> x)
    {
        for (int i = x - 1; i > 1; i--)
        {
            if(prime(i))
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}

int prime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if ((x%i)==0)
        {
            return 0;
        }
    }
    return 1;
}
