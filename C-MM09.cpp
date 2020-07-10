#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(void)
{
    int i;
    while(cin >> i)
    {
        if(i>30)
            cout << "Value of more than 31" << endl;
        else
            cout << (long long int)pow(2, i) << endl;
    }
    return 0;
}
