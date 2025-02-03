#include<stdio.h>

void main(){
    int p,y;
    float r,si;
    printf("the value of principle amount is ",p);
    scanf("%d",&p);
    printf("the no. of year for si to be calculated =",y);
    scanf("%d",&y);
    printf("the rate of interest per year= ",r);
    scanf("%f",&r);
    // formula for si//
    si=p*y*r/100;
    
    printf("%f",si);
    
}