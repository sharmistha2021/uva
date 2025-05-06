#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, rev = 0;
    cout << "enter a num: " << endl;
    cin >> n;
    while(n != 0){
        rev = rev * 10 + n%10;
        sum += n%10;
        n = n/ 10;
    }
     while(rev != 0){

        cout << rev%10 << " ";
        rev = rev/ 10;
    }
    cout << endl;
    cout << sum << endl;
    return 0;
}
