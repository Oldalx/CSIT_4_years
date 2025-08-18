#include <stdio.h>
#include <limits.h>
#include <string.h>

int bfs(int rGraph[10][10], int s, int t, int parent[10], int n){
    int visited[10]={0};
    int queue[10], front=0, rear=0;
    queue[rear++]=s; visited[s]=1; parent[s]=-1;
    
    while(front<rear){
        int u=queue[front++];
        for(int v=0;v<n;v++){
            if(!visited[v] && rGraph[u][v]>0){
                queue[rear++]=v;
                parent[v]=u;
                visited[v]=1;
            }
        }
    }
    return visited[t];
}

int fordFulkerson(int graph[10][10], int s, int t, int n){
    int u,v;
    int rGraph[10][10];
    for(u=0;u<n;u++)
        for(v=0;v<n;v++)
            rGraph[u][v]=graph[u][v];
    
    int parent[10];
    int max_flow=0;
    
    while(bfs(rGraph,s,t,parent,n)){
        int path_flow=INT_MAX;
        for(v=t; v!=s; v=parent[v]){
            u=parent[v];
            if(rGraph[u][v]<path_flow) path_flow=rGraph[u][v];
        }
        for(v=t; v!=s; v=parent[v]){
            u=parent[v];
            rGraph[u][v]-=path_flow;
            rGraph[v][u]+=path_flow;
        }
        max_flow+=path_flow;
    }
    return max_flow;
}

int main(){
    int n;
    printf("Enter number of vertices: ");
    scanf("%d",&n);
    int graph[10][10];
    printf("Enter capacity matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&graph[i][j]);
    
    int s,t;
    printf("Enter source and sink: ");
    scanf("%d %d",&s,&t);
    printf("Maximum flow: %d\n", fordFulkerson(graph,s,t,n));
    return 0;
}
