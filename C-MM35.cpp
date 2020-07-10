#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    int x;
    while(cin >> x)
    {
        if(x % 4 == 0)
        {
            if(x % 400 == 0)
                cout << "Bissextile Year";
            else if(x % 100 == 0)
                cout << "Common Year";
        }
        else
            cout << "Common Year";
        cout << endl;
    }
    return 0;
}
