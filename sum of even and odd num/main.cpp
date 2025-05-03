#include <iostream>

using namespace std;

int main()
{
    int n, x, odd = 0, even = 0;
    cout << "enter no of values" << endl;
    cin >> x;
    for(int i = 0; i < x; i++)
    {
        cin >> n;
        if(n%2 == 0)
            even += n;
        else
            odd += n;

    }
    cout << "sum of even numbers: " << even << endl;
    cout << "sum of odd numbers: " << odd << endl;
    return 0;
}
