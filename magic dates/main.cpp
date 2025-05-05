#include <iostream>

using namespace std;

int main()
{
    int d, m, y;
    cin >> d >> m >> y;
    if((d*m) == y)
        cout << "mAGIC" << endl;
    else
        cout << " not magic" << endl;
    return 0;
}
