#include <stdio.h>

typedef struct{
    int u,v,weight;
} Edge;

int find(int parent[], int i){
    if(parent[i]==i) return i;
    return find(parent,parent[i]);
}

void unionSet(int parent[], int x, int y){
    int xset=find(parent,x);
    int yset=find(parent,y);
    parent[xset]=yset;
}

int main(){
    int n,e;
    printf("Enter vertices and edges: ");
    scanf("%d %d",&n,&e);
    Edge edges[e];
    
    printf("Enter edges (u v weight):\n");
    for(int i=0;i<e;i++)
        scanf("%d %d %d",&edges[i].u,&edges[i].v,&edges[i].weight);
    
    // Simple sort by weight
    for(int i=0;i<e-1;i++)
        for(int j=i+1;j<e;j++)
            if(edges[i].weight>edges[j].weight){
                Edge temp=edges[i]; edges[i]=edges[j]; edges[j]=temp;
            }
    
    int parent[n];
    for(int i=0;i<n;i++) parent[i]=i;
    
    printf("Edges in MST:\n");
    for(int i=0;i<e;i++){
        int x=find(parent,edges[i].u);
        int y=find(parent,edges[i].v);
        if(x!=y){
            printf("%d-%d : %d\n", edges[i].u, edges[i].v, edges[i].weight);
            unionSet(parent,x,y);
        }
    }
    return 0;
}
