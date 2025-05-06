#include <iostream>

using namespace std;

int main()
{
    int budget, sum = 0, expense;
    cout << "enter amont of budget: " << endl;
    cin >> budget;
    for(int i = 0; i < 30; i++){
        cin >> expense;
        sum += expense;
    }

    if(expense < budget)
        cout << budget - expense << "$ under budget" << endl;
    else
        cout << expense - budget << "$ over budget" << endl;
    return 0;
}
