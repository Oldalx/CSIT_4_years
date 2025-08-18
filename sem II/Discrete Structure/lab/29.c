#include <stdio.h>
#include <limits.h>

int minKey(int key[], int mstSet[], int n){
    int min=INT_MAX, min_index;
    for(int v=0;v<n;v++)
        if(!mstSet[v] && key[v]<min)
            min=key[v], min_index=v;
    return min_index;
}

void primMST(int G[10][10], int n){
    int parent[10], key[10], mstSet[10]={0};
    for(int i=0;i<n;i++) key[i]=INT_MAX;
    key[0]=0; parent[0]=-1;
    
    for(int count=0;count<n-1;count++){
        int u=minKey(key,mstSet,n);
        mstSet[u]=1;
        for(int v=0;v<n;v++)
            if(G[u][v] && !mstSet[v] && G[u][v]<key[v]){
                parent[v]=u; key[v]=G[u][v];
            }
    }
    
    printf("Edges in MST:\n");
    for(int i=1;i<n;i++)
        printf("%d-%d : %d\n", parent[i], i, G[i][parent[i]]);
}

int main(){
    int n;
    printf("Enter number of vertices: ");
    scanf("%d",&n);
    int G[10][10];
    printf("Enter adjacency matrix (0 if no edge):\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&G[i][j]);
    
    primMST(G,n);
    return 0;
}
