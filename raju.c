// Online C compiler to run C program online
#include <stdio.h>
void main()
{
    int raju,rani;
    printf("enter the  rating ofraju and rani\n");
    scanf("%d %d",& raju,&rani);
    if(raju<=2||rani<=2)
    {
        printf("0");
    }
 else if(raju>=8||rani>=8)
        {
            printf("2");
        }
        else
        {
            printf("1");
        }
    }
        
    