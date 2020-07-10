#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    int x;
    while (cin >> x)
    {
        for (int i = 35; i < x + 1; i += 35)
        {
            cout << i;
            if (i + 35 < x + 1)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
