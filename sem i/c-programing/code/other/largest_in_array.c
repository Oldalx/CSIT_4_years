#include<stdio.h>
void main (){
    int i,j,largest,smallest;
    int a[]= {2,3,4,5,6};
    largest=smallest=a[0];
    for ( i =1; i<5; i++){

          
           if (a[i]>largest){
           largest =a[i]; 
           }
           if (a[i]<smallest)
           {
           smallest =a[i];}

          

        }
          printf("largest = %d",largest);
         printf("Smallest = %d",smallest);


    

}