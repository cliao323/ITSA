#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    int x;
    while(cin >> x)
    {
        for(int i = 1; i < x; i++)
        {
            if(x % i == 0)
                cout << i << " ";
        }
        cout << x << endl;
    }
    return 0;
}
