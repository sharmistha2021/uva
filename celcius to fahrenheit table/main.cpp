#include <iostream>

using namespace std;

int main()
{
    int i, f;
    cout << "celcius                fahrenheit" << endl;
    for(i = 0; i <= 20; i++){
        f = (9/5)*i + 32;
        cout << i << "                        " << f << endl;
    }

    return 0;
}
