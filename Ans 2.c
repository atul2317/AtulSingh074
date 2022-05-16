#include<stdio.h>
main()
{
    int no;
    printf("Enter the number:\n");
    scanf("%d",&no);
    if(no/10 != 0)
    {
        if(no/100 != 0)
        {
            if(no/1000 != 0)
            {
                if(no/10000 != 0)
                {
                    if(no/100000 != 0)
                    printf("More than five digit no.");
                    else
                    printf("Five digit no.");
                }
                else
                printf("Four digit no.");
            }
            else
            printf("Three digit no.");
        }
        else
        printf("Two digit no.");
    }
    else
    printf("One digit no.");
    return 0;
}
