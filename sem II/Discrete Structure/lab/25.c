#include <stdio.h>
#include <limits.h>

int minDistance(int dist[], int visited[], int n){
    int min=INT_MAX, min_index;
    for(int i=0;i<n;i++)
        if(!visited[i] && dist[i]<=min)
            min=dist[i], min_index=i;
    return min_index;
}

void dijkstra(int G[10][10], int n, int src){
    int dist[10], visited[10]={0};
    for(int i=0;i<n;i++) dist[i]=INT_MAX;
    dist[src]=0;
    
    for(int count=0;count<n-1;count++){
        int u=minDistance(dist,visited,n);
        visited[u]=1;
        for(int v=0;v<n;v++){
            if(!visited[v] && G[u][v] && dist[u]+G[u][v]<dist[v])
                dist[v]=dist[u]+G[u][v];
        }
    }
    
    printf("Vertex\tDistance from Source\n");
    for(int i=0;i<n;i++) printf("%d\t%d\n", i, dist[i]);
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
    
    int src;
    printf("Enter source vertex: ");
    scanf("%d",&src);
    dijkstra(G,n,src);
    return 0;
}
