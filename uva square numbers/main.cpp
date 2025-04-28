#include <iostream>

using namespace std;

int main()
{
    int a, b;
    while(cin >> a >> b){
        int count = 0;
        if(a == 0 && b == 0)
            break;
        else
        for(int i = a; i <= b; i++){
            for(int j = 1; j * j <= i; j++){
                if(j * j == i)
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
