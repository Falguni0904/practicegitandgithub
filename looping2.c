#include<stdio.h>

int main()
{
    int space=2;
    int ktimes=3;
    for (int i = 1; i < 4; i++)
    {
        for ( int j = 1; j<=ktimes; j++)
        {
            printf("* ");
        }
     if(i>=2)   
    {
        for ( int s = 1; s <= space; s++)
        {
            printf(" ");
        }
        space * 2;
    }
     for ( int j = i; j<=ktimes; j++)
        {
            printf("* ");
        }
  
    printf("\n");    
    }

ktimes++;

}