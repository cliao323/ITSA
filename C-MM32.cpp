#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    int x;
    while(cin >> x)
    {
    int sum, a, b, c;
    sum = x;
    c = x % 10;
    x /= 10;
    b = x % 10;
    x /= 10;
    a = x % 10;
    a = a * a * a;
    b = b * b * b;
    c = c * c * c;
    if(sum == (a + b + c))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    }
    return 0;
}
