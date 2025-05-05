
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int gcd, nu, de;
    cin >> nu >> de;
    gcd = __gcd(nu, de);

    nu = nu / gcd;
    de = de / gcd;
    cout << nu << "/" << de << endl;
    return 0;
}
