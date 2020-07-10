#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
    int x;
    unsigned long long dp[20];
    dp[0] = 1;
    for (int i = 1; i < 21; i++)
        dp[i] = dp[i - 1] * i;
    while (cin >> x)
    {
        cout << dp[x] << endl;
    }
    return 0;
}
