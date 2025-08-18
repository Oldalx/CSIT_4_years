#include <stdio.h>

int isEulerian(int deg[], int n){
    int odd=0;
    for(int i=0;i<n;i++) if(deg[i]%2!=0) odd++;
    if(odd==0) return 2;  // Eulerian Circuit
    else if(odd==2) return 1; // Eulerian Path
    else return 0; // Not Eulerian
}

int main(){
    int n;
    printf("Enter number of vertices: ");
    scanf("%d",&n);
    int G[10][10], deg[10]={0};
    
    printf("Enter adjacency matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            scanf("%d",&G[i][j]);
            if(G[i][j]) deg[i]++;
        }
    
    int res=isEulerian(deg,n);
    if(res==2) printf("Eulerian Circuit exists\n");
    else if(res==1) printf("Eulerian Path exists\n");
    else printf("No Eulerian Path/Circuit\n");
    
    printf("Hamiltonian Path/Circuit check requires backtracking (complex to implement in short code)\n");
    return 0;
}
