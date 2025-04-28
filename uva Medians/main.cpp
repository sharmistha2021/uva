#include <iostream>
#include <math.h>

#include <stdio.h>

using namespace std;

int main()
{
    double m1, m2, m3;
    while(cin >> m1 >> m2 >> m3){
        double s = (m1 + m2 + m3) / 2.0;
            s = s * ((s-m1) * (s-m2) * (s-m3));
           double A = (4.0/ 3.0) * sqrt(s);
            if(s <= 0.000)
                A = -1.0;
            printf("%.3lf\n", A);
    }
    return 0;
}
