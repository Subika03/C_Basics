#include<stdio.h>

int main()
{
    int dice=1;


    while(dice<=6)
    {
        if(dice<6)
        {
            printf("No Yartz! \n");
        }else{
            printf("Yartz ");
        }
        dice++;
    }
}