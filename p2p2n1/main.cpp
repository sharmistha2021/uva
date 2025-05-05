#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    cout << "enter a number: " << endl;
    cin >> n;
    while(n > 0){
        n = n/10;
        count++;
    }
    cout << " The Number " << n << " has " << count << " digits" << endl;
    return 0;
}
