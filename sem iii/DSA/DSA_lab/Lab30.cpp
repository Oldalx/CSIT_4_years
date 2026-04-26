#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct { int src, dest, weight; } Edge;

Edge edges[MAX], result[MAX];
int parent[MAX], rnk[MAX];

int find(int i) {
    return parent[i] == i ? i : (parent[i] = find(parent[i]));
}

void unite(int x, int y) {
    int rx = find(x), ry = find(y);
    if (rnk[rx] < rnk[ry]) parent[rx] = ry;
    else if (rnk[rx] > rnk[ry]) parent[ry] = rx;
    else { parent[ry] = rx; rnk[rx]++; }
}

int cmp(const void* a, const void* b) {
    return ((Edge*)a)->weight - ((Edge*)b)->weight;
}

int main() {
    int n, e, count = 0, total = 0;

    printf("Vertices & Edges: ");
    scanf("%d %d", &n, &e);

    for (int i = 0; i < n; i++) parent[i] = i, rnk[i] = 0;

    printf("Enter edges (src dest weight):\n");
    for (int i = 0; i < e; i++)
        scanf("%d %d %d", &edges[i].src, &edges[i].dest, &edges[i].weight);

    qsort(edges, e, sizeof(Edge), cmp);

    printf("\nMST Edges:\n");
    for (int i = 0; i < e && count < n - 1; i++) {
        int rs = find(edges[i].src), rd = find(edges[i].dest);
        if (rs != rd) {
            unite(rs, rd);
            printf("%d -- %d == %d\n", edges[i].src, edges[i].dest, edges[i].weight);
            total += edges[i].weight;
            count++;
        }
    }

    printf("Total Weight: %d\n", total);
    return 0;
}
