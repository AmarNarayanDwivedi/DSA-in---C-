#include <iostream>
using namespace std;

int fibbo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int ans = fibbo(n - 1) + fibbo(n - 2);
    return ans;
}

int main()
{
    int n = 7;
    int ans = fibbo(n);
    cout << "fibbonachi series number at " << n << "th place " << ans << endl;

    return 0;
}