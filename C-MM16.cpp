#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    int x, y;
    while(cin >> x >> y)
    {
        if(x*x+y*y>10000)
            cout << "outside" << endl;
        else
            cout << "inside" << endl;
    }
    return 0;
}
