#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    int x,y;
    while (cin >> x >> y)
    {
        cout << (x+y)*(x+y) << endl;
    }
    return 0;
}
