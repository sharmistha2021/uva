#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for(int i = 1; i <= 7; i++){
            int n;
            cout << "enter no of bugs: " << endl;
            cin >> n;
            sum += n;
    }
    cout << sum << endl;

    return 0;
}
