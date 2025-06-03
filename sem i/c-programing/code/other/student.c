#include<stdio.h>
void main(){
    int student[10];
    int i;
    for (i=0 ; i<10 ; i++){
    printf("%d Enter the marks of student in maths : ",i+1);
    scanf("%d",&student[i]);
    }
    for (i=0 ; i<10 ; i++){
    printf("the marks of student in maths is %d \n",student[i]);
    }




}