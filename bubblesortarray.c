//Bubble sort using array in c
#include<stdio.h>
int main()
{   
    int i,x[100],n;
    char a;
    printf("Enter the no of elements to be added in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {   
            printf("enter a no:");
            scanf("%d",&x[i]);
        }
    printf("Enter how the sorting should be done whether to be done in ascending order or descending order:(A/D):");
    scanf(" %c",&a);
    if(a=='A')
        {
            for(i=0;i<n-1;i++)
                {
                    {
                    for(int j=0;j<n-i-1;j++)
                        {
                            if(x[j]>x[j+1])
                                {
                                    int temp=x[j];
                                    x[j] = x[j+1];
                                    x[j+1] = temp;
                                }
                        }
                    }
                }
           for (i = 0; i < n; i++) 
            {
                printf("The %dth no is %d\n", i + 1, x[i]);
            } 

        }
    else if(a=='D')
        {    
            for(i=0;n-1>i;i++)
                {   
                    {
                    for(int j=0;j<n-i-1;j++)
                        {
                            if(x[j]<x[j+1])
                                {
                                    int temp=x[j];
                                    x[j] = x[j+1];
                                    x[j+1] = temp;
                                }
                        }
                    }
                }
            for (i = 0; i < n; i++) 
            {
                printf("The %dth no is %d\n", i + 1, x[i]);
            }
        }
    else
        {
            printf("Check whether what you wrote is either A or D");
        }

}