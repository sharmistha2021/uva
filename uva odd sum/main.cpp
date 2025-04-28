#include <iostream>

using namespace std;

int main()
{
    int T, a, b;
    cin >> T;
    for(int i = 0; i < T; i++){
        int sum = 0;
        cin >> a >> b;
        for(int j = a; j <= b; j++){
            if(j%2 != 0)
            sum += j;
        }
        cout << "Case " << i + 1 << ": " << sum << endl;
    }
    return 0;
}
