#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter number: " << endl;
    cin >> n;
    if(n == 0)
        cout << "zero" << endl;
    else if(n < 0)
        cout << "negative" << endl;
    else
        cout << "positive" << endl;

    return 0;
}
