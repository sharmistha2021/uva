#include <iostream>

using namespace std;

int main()
{
    int numOfDays, i;
    float daily=.01, total = 0;
    cout << "enter no of days: " << endl;
    cin >> numOfDays;
    for(int i = 1; i <=numOfDays; i++){
        total += daily;
        cout << "daily: " << daily << endl;
        daily *= 2;
    }
    cout <<"total: " << total << endl;
    return 0;
}
