#include <iostream>

using namespace std;

int main()
{
    int speed, hrs;
    cout << "What is the speed of the vehicle in mph?" << endl;
    cin >> speed;
    cout << "How many hours has it traveled?" << endl;
    cin >> hrs;
    cout << "Hour                   Distance Traveled" << endl;
    cout << "_________________________________________" << endl;
    for(int i = 1; i <= hrs; i++){
        cout << i << "                              " << i * speed << endl;
    }

    return 0;
}
