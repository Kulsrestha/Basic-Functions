#include <iostream>
using namespace std;
int fact(int n)
{
    int mul = 1;
    for (int i = 1; i <= n; i++)
    {
        mul *= i;
    }
    return mul;
}
int main()
{
    int n;
    cin >> n;
    int ans = fact(n);
    cout << ans << endl;
    return 0;
}