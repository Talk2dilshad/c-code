#include <stdio.h>
#include "D:\Coding Practice\Graph\Queue.h"

void BFS(int g[][7],int start,int n)
{
    int i=start,v;

    int visited[7]={0};
    printf("%d",i);
    visited[i]=1;
    enqueue(i);

    while(!isEmpty())
    {
        i=dequeue();
        for(v=1;v<n;v++)
        {
            if(g[i][v]==1 && visited[v]==0)
            {
                printf("%d",v);
                visited[v]=1;
                enqueue(v);
            }

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
 
 BFS(G,6,7);
 return 0;
}