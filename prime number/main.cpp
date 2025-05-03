#include <iostream>

using namespace std;

int main()
{
    int n, flag;
    cout << "enter a positive number: " << endl;
    cin >> n;
    for(int i = 2; i <= n/2; i++){
        if(n%i ==0){
            flag = 1;
            break;
        }
    }
    if(n == 1)
        cout << "prime" << endl;
    else if(flag == 0)
        cout << "not prime" << endl;
    else
        cout << "prime" << endl;
    return 0;
}
