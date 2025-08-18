#include <stdio.h>

int visited[20];

void DFS(int G[20][20], int n, int u){
    visited[u]=1;
    printf("%d ", u);
    for(int v=0;v<n;v++){
        if(G[u][v] && !visited[v])
            DFS(G,n,v);
    }
}

int main(){
    int n;
    printf("Enter number of vertices: ");
    scanf("%d",&n);
    int G[20][20];
    printf("Enter adjacency matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&G[i][j]);
    
    for(int i=0;i<n;i++) visited[i]=0;
    int start;
    printf("Enter starting vertex: ");
    scanf("%d",&start);
    printf("DFS Traversal: ");
    DFS(G,n,start);
    printf("\n");
    return 0;
}
