#include <iostream>

using namespace std;

int main()
{
    int sum = 0, n;
    while(n >= 0){
        cin >> n;
        if(n > 0)
            sum += n;
    }
    cout << sum << endl;
    return 0;
}
