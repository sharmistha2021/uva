#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t, arr[3000], i, arrDif[3000];

    while(scanf("%d", &t)!= EOF)
{
    for(i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < t - 1; i++)
    {
        arrDif[i]= abs(arr[i + 1] - arr[i]);
    }
    int count = 0;
    for(i = 0; i < t - 2; i++)
    {
        if(arrDif[i] - arrDif[i + 1] != 1)
            {
                count++;
            }
    }
    printf("%d\n", count);
    if(count == 0)
        printf("Jolly\n");
    else
        printf("Not Jolly\n");
}
    return 0;

}
