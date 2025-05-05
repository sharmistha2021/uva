#include <iostream>

using namespace std;

int main()
{
    int i, j;
    char c = 'F';
    for(i = 0; i <= 6; i++){
        for(j = 0; j < i; j++){

            cout << (char)(c - j) << " ";

        }
        cout << endl;
    }
    return 0;
}
