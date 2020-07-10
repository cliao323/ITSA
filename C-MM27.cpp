#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    int x, y, z;
    while (cin >> x >> y)
    {
        z = x + y;
        if(x > y)
            z *= (x - y) + 1;
        else
            z *= (y - x) + 1;
        z /= 2;
        cout << z << endl;
    }
    return 0;
}
