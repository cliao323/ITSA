#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    int x, y[8];
    while(cin >> x)
    {
        if(x > 0)
            y[0]=0;
        else
        {
            y[0]=1;
            x+=128;
        }

        for(int i = 0; i < 7; i++)
        {
            y[7 - i] = x % 2;
            x /= 2;
        }
        for(int i = 0; i < 8; i++)
            cout << y[i];
        cout << endl;
    }
    return 0;
}
