#include <stdio.h>

int main() {
    int n,i;

    int a[10];
    int largest,secondlarge;
    printf("enter the size of array :");
    scanf("%d",&n);

    printf("number in array");
    for(int i=0; i<n; i++){
    scanf("%d",&a[i]);
}

if(a[0]>a[1]){
    largest=a[0];
    secondlarge=a[1];
}
    else{
        largest= a[1];
        secondlarge=a[0];
    }
    



for (int i=2; i<n; i++){
    if(a[i]>largest){
        secondlarge =largest;
        largest=a[i];
    }
     else if(a[i]>secondlarge && a[i]!=largest){
        secondlarge =a[i];
     }


}
  printf("The second largest element is: %d\n", secondlarge);
    
    return 0;
}
