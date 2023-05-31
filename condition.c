#include<stdio.h>



int minvalue(int a,int b){
    if (a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main ()
{
int a,b;
printf("enter two value: ",minvalue);
scanf("%d %d",&a,&b);

int answer = minvalue(a,b);
printf	("answer: %d\n",answer);


}
