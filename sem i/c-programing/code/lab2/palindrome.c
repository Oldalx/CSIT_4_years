#include<stdio.h>
int main(){
    int rev=0,temp;
    int original;
    int num;

    printf("Enter the number :");
    scanf("%d",&num);
    original=num;

    while (num!=0)
    {
        temp=num%10;
        rev =rev*10+temp;

        num/=10;
        }

        if (rev==original)
        {
            printf("The number is palindrome \n");
        }
        else{
        printf("The number is not palindrome \n");
        }
    

}