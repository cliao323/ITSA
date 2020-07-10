#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    int x;
    while (cin >> x)
    {
        for (int i = 2; i < x; i++)
        {
            if ((x%i)==0)
            {
                cout << "NO" <<endl;
                return 0;
            }
        }
        cout << "YES" <<endl;
    }
    return 0;
}
