#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    int x;
    while(cin >> x)
    {
        int sum = (1 + x) * x;
        sum /= 2;
        cout << "1 ";
        for(int i = 2; i < x + 1; i++)
        {
           cout <<"+ " << i << " ";
        }
        if(x == 1)
            cout << "= 1" << endl;
        else
            cout << "= " << sum << endl;
    }
    return 0;
}
