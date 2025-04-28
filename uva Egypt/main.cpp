#include <iostream>

using namespace std;

int main()
{
    long long int a, b, c;
    while(cin >> a >> b >> c){
        a = a * a;
        b = b * b;
        c = c * c;
        if(a == 0 && b == 0 && c == 0)
            break;
        else if(a + b == c || a + c == b || b + c == a)
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }
    return 0;
}
