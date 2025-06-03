#include<stdio.h>
int main(){
    int a[]= {2,3,4,5,6};
    int sum=0;
    float avg;
    int n;

    for (int i = 0; i < 5; i++)
    {
        sum=sum+a[i];
        n= sizeof(a)/ sizeof(a[0]);
        avg =sum/n;
    }
    printf("sum =%d",sum);
        printf("avg =%.2f",avg);

    
}