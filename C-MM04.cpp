#include<iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int a,b;
    cin >> a >> b;

    cout << a << "+" << b << "=" << a+b << endl;
    cout << a << "*" << b << "=" << a*b << endl;
    cout << a << "-" << b << "=" << a-b << endl;
    cout << a << "/" << b << "=";
    if(a<0)
        cout << a/b-1 << "..." << a%b+b << endl;
    else
        cout << a/b << "..." << a%b << endl;
    return 0;
}
