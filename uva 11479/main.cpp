#include <iostream>

using namespace std;

int main()
{
    long long int T, a, b, c;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> a >> b >> c;
        if((a+b) <= c || (a+c) <= b || (b+c) <= a)
            cout << "Case " << i + 1 << ": Invalid" << endl;
        else if(a == b && b == c)
            cout << "Case " << i + 1 << ": Equilateral" << endl;
        else if(a == b || b == c || a == c)
            cout << "Case " << i + 1 << ": Isosceles" << endl;
        else
            cout << "Case " << i + 1 << ": Scalene" << endl;
    }

    return 0;
}
