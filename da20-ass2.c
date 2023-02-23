#include <stdio.h>
 void main()
{
    int i, num, osum = 0, esum = 0,diff;
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            esum = esum + i;
        else
            osum = osum + i;
    }
    diff=osum-esum;  
   printf("Odd Sum=%d\nEven Sum=%d\nDifference= %d\n", osum,esum,diff);
   
}
