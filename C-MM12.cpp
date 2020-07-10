#include<iostream>
#include<iomanip>

using namespace std;

int time(double x);
int main(void)
{
    int x;
    while(cin >> x)
        cout << time(x/(1-0.3*2.54)) << endl;
    return 0;
}
int time(double x)
{
    if(x>(int)x)
        return x+1;
    else
        return (int)x;
}
