#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    int hourstart, minstart, hourend, minend,time;
    while(cin >> hourstart >> minstart >> hourend >> minend)
    {
        time = (hourend-hourstart)*60+(minend-minstart);

        if(time>240)
            cout << 280+((time/30)-8)*60 << endl;
        else if(time>120)
            cout << 120+((time/30)-4)*40 << endl;
        else
            cout << (time/30)*30 << endl;
    }
    return 0;
}
