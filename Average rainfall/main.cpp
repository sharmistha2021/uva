#include <iostream>

using namespace std;

int main()
{
    int yr, av, sum = 0, count, amount_rainfall, i, j;
    cout << "no of yrs: " << endl;
    cin >> yr;
    for(i = 0; i < yr; i++)
    {
        for(j = 0; j < 12; j++)
        {
            cout << "enter rainfall" <<endl;
            cin >> amount_rainfall;
            sum += amount_rainfall;
        }
    }
    count = 12 * yr;
    av = sum / count;
    cout << "no of months: " << count << endl << "total rainfall: " << sum << endl << "average rainfall: " << av << endl;

    return 0;
}
