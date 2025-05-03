#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter number of seconds: " << endl;
    cin >> n;
    if(n >= 60)
        cout << n / 60 << endl;
    if(n >= 3600)
        cout << n / 3600 << endl;
    if(n >= 86400)
        cout << n / 86400 << endl;

    return 0;
}
