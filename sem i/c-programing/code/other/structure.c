#include<stdio.h>
struct students
{
    int age;
    int roll_num;
}s1;

void whatever(s1){
    


}



int main(){
    s1.roll_num =2;
    s1.age =18;
    
    printf("name %d age %d \n",s1.roll_num,s1.age);
}