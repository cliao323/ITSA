#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    int time,day,hour,min,sec;
    cin >> time;
    day=(time/86400);
    time%=86400;
    hour=(time/3600);
    time%=3600;
    min=(time/60);
    sec=(time%60);

    cout << day  << " days"    << endl;
    cout << hour << " hours"   << endl;
    cout << min  << " minutes" << endl;
    cout << sec  << " seconds" << endl;
    return 0;
}
