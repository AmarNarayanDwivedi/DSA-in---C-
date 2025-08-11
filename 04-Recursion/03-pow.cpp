#include <iostream>
using namespace std;
int pow(int n, int m)
{
    if (m == 1)
    {
        return n;
    }
    int ans = n * pow(n, m - 1);
    return ans;
}

int main()
{
    int n = 7;
    int m = 5;
    int ans = pow(n, m);
    cout << n << " to the power " << m << "= " << ans << endl;

    return 0;
}