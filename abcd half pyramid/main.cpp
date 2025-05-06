#include <iostream>

using namespace std;

int main()
{
    int i, j;
    char c = 'A';
    for(i = 0; i <= 6; i++){
        for(j = 0; j < i; j++){

            cout << (char)(c) << " ";
            c += 1;

        }
        cout << endl;
    }

    return 0;
}
