#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n, r;
    r = rand() % 100;

   while(n != r){
      cout << "enter num : " << endl;
      cin >> n;
      if(n > r)
        cout << "\Your guess is higher than the number. Guess again!" << endl;
      else if(n < r)
        cout << "\Your guess is lower than the number. Guess again!" << endl;
      else if(n == r)
        cout << "correct" << endl;
   }

    return 0;
}
