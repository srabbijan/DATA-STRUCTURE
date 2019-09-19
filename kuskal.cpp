#include <bits/stdc++.h>
using namespace std;
#define V 5
#define MAX 99
int parent[V];
int find(int i)
{
    while (parent[i] != i)
        i = parent[i];
    return i;
}
void union1(int i, int j)
{
    int a = find(i);
    int b = find(j);
    parent[a] = b;
}
void kruskalMST(int cost[][V])
{
    int mincost = 0;
    for (int i = 0; i < V; i++)
        parent[i] = i;
    int edge_count = 0;
    while (edge_count < V - 1) {
        int min = MAX, a = -1, b = -1;

        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (find(i) != find(j) && cost[i][j] < min) {
                    min = cost[i][j];
                    a = i;
                    b = j;
                }
            }
        }
        union1(a, b);
        printf("Edge %d:(%d, %d) cost:%d \n", edge_count++, a, b, min);
        mincost += min;
    }
    printf("\n Minimum cost= %d \n", mincost);
}
int main()
{
    int cost[][V] = {
        { MAX, 5, 14, 8, MAX },
        { 5, MAX, MAX, MAX, 7 },
        { 14, MAX, MAX, 3, MAX },
        { 8, MAX, 3, MAX, 10 },
        { MAX, 7, MAX, 10, MAX },
    };
    kruskalMST(cost);
    return 0;
}
