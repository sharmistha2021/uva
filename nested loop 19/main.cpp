#include <iostream>

using namespace std;

int main()
{
    int i, j;
    char c = 'P';
    for(i = 6; i >= 1; i--){
        for(j = 0; j < i; j++){
            if(j > i-1)
            cout << (char)(c) << " ";
            //c - 1;

        }
        cout << endl;
    }

    return 0;
}
