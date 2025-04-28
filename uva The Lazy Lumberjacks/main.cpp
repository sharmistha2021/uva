#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if((a + b > c) && (a + c > b) && (b + c > a))
            cout << "OK" << endl;
        else
            cout << "Wrong!!" << endl;
    }
    return 0;
}
