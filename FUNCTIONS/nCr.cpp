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
    int n, r;
    cin >> n >> r;
    int ans = fact(n) / (fact(r) * fact(n - r));
    cout << ans << endl;
    return 0;
}