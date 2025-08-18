#include <stdio.h>
#define MAX 20

int queue[MAX], front=-1, rear=-1;
void enqueue(int x){ queue[++rear]=x; if(front==-1) front=0; }
int dequeue(){ return queue[front++]; }
int isEmpty(){ return front>rear || front==-1; }

void BFS(int G[MAX][MAX], int n, int start){
    int visited[MAX]={0};
    enqueue(start);
    visited[start]=1;
    
    while(!isEmpty()){
        int u=dequeue();
        printf("%d ", u);
        for(int v=0;v<n;v++){
            if(G[u][v] && !visited[v]){
                enqueue(v);
                visited[v]=1;
            }
        }
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter number of vertices: ");
    scanf("%d",&n);
    int G[MAX][MAX];
    printf("Enter adjacency matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&G[i][j]);
    
    int start;
    printf("Enter starting vertex: ");
    scanf("%d",&start);
    printf("BFS Traversal: ");
    BFS(G,n,start);
    return 0;
}
