#include <stdio.h>

int binarySearch(int arr[], int n, int key){
    int l=0, r=n-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]<key) l=mid+1;
        else r=mid-1;
    }
    return -1;
}

int main() {
    int n, key;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter sorted elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    
    printf("Enter key to search: ");
    scanf("%d",&key);
    int idx=binarySearch(arr,n,key);
    if(idx!=-1) printf("Key found at index %d\n", idx);
    else printf("Key not found\n");
    return 0;
}
