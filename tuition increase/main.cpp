#include <iostream>

using namespace std;

int main()
{
    int i = 0, tuition = 6000;
    for(; i < 5; i++){
            tuition = tuition + (tuition * .02);
            cout << tuition << endl;
    }
    return 0;
}
