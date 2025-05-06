#include <iostream>

using namespace std;

int main()
{
    int weight, height, BMI;
    cout << "enter weight: " << endl;
    cin >> weight;
    cout << "enter height: " << endl;
    cin >> height;
    BMI = weight * 703 / (height * height);
    if(BMI >= 18.5 && BMI <= 25)
        cout << "optimal" << endl;
    else if(BMI < 18.5)
        cout << "underweight" << endl;
    else
        cout << "overweight" << endl;

    return 0;
}
