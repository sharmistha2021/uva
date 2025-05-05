#include <iostream>

using namespace std;

int main()
{
    int n, product = 0;

    while(product < 100)
    {
        cout << "Enter a number: " << endl;
        cin >> n;
        product += n * 10;
    }
    return 0;
}

