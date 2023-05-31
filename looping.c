#include<stdio.h>

int minvaluearry(int arry[]){
     int minvalue=-200;
    for (int i = 0; i < 6; i++)
    {
        if(arry[i] > minvalue);
        {
minvalue = arry[i];
}
    }
    return minvalue;
}


int main(){
int arry[]={158,148,123,120,110};
printf("enter the value",arry);
scanf("%d",&arry );

int answer = minvalue();
printf	("answer: %d\n",answer);
}