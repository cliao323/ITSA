#include<iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    float x,y;
    while(cin >> x >> y)
    {
    if (x==0)
        cout << "y-axis" << endl;
    if (y==0)
        cout << "x-axis" << endl;
    if(x>0&&y>0)
        cout << "1st Quadrant" << endl;
    if(x<0&&y>0)
        cout << "2nd Quadrant" << endl;
    if(x<0&&y<0)
        cout << "3rd Quadrant" << endl;
    if(x>0&&y<0)
        cout << "4th Quadrant" << endl;
    }
    return 0;
}
