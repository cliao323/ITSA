#include<iostream>
#include <iomanip>

using namespace std;

int fit(int x, int y, int z)
{
    if((y + z) > x)
    {
        if((x + z) > y)
        {
            if((x + y) > z)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int x, y, z;
    while(cin >> x >> y >> z)
    {
        if(fit(x, y, z))
            cout << "fit" << endl;
        else
            cout << "unfit" << endl;
    }
    return 0;
}
