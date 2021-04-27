#include <stdio.h>
#include "D:\Coding Practice\Graph\Queue.h"

void BFS(int g[][7],int start,int n)
{
    int source_node=start,v;

    int visited[7]={0};
    printf("%d",source_node);
    visited[source_node]=1;
    enqueue(source_node);

    while(!isEmpty())
    {
        source_node=dequeue();
        for(v=1;v<n;v++)
        {
            if(g[source_node][v]==1 && visited[v]==0)
            {
                printf("%d",v);
                visited[v]=1;
                enqueue(v);
            }

        }
    }

}
void DFS(int g[][7],int start,int n) 
{
    static int visited[7]={0};
    int j;
    if(visited[start]==0)
    {
        printf("%d  ",start);
        visited[start]=1;
        for(j=1;j<n;j++)
        {
            if(g[start][j]==1 && visited[j]==0)
            DFS(g,j,n);
        }
    }
}

int main()
{
 int G[7][7]=
 {{0,0,0,0,0,0,0},
 {0,0,1,1,0,0,0},
 {0,1,0,0,1,0,0},
 {0,1,0,0,1,0,0},
 {0,0,1,1,0,1,1},
 {0,0,0,0,1,0,0},
 {0,0,0,0,1,0,0}};
 
// BFS(G,6,7);  remove comment to use bfs search 
 DFS(G,1,7);
 return 0;
}