// Dijkstra Algorithm
// single source shortest path
// ------------------------- STEPS ------------------------------
// Mark all vertices as unvisited initially
// Mark all nodes with infinity distance except source node 
// Repeat steps...........for (v-1) times
// 1. pick the min value node which is unprocessed
// 2. mark this node as processed.
// 3. update the all adjacent vertices.
// if cost[u] + wt[u->v] < cost[v] then update else skip

// ---------------- REQUIREMENTS ----------------------
// use a visited array / set
// use value array / map
//store shortest path i.e. use parent array (spg) 
#include <bits/stdc++.h>
using namespace std;

#define v 6 // no of vertices
int selectMinVertex(vector<int>& value,vector<bool>& processed)
{
	int minimum = INT_MAX;
	int vertex;
	for(int i=0; i<v; i++)
	{
		if(processed[i]== false && value[i] <minimum )
		{
			vertex = i;
			minimum=value[i];
		}
	}
	return vertex;
}
void dijkstra(int graph[v][v])
{
	int parent[v];//store shortest path 
	vector <int> values(v,INT_MAX);//keep the shortest path value to each vertex from source
	vector <bool> processed(v,false); // TRUE  -> VERTEX IS PROCESSED.......

	// Assuming start point node -0
	parent[0]=-1; // as start node has no parent 
	values[0]=0;// start node has value 0 to get picked up first

	//Include (V-1) edges to cover all V-vertices
	for(int i=0; i<v; i++)
	{
		int u=selectMinVertex(values,processed);// select min vertex by applying greedy algo..
		processed[u]=true;
		// relax the adjacent vertex
		for(int j=0;j<v;j++)
		{
			/* constraints
			    1. edge present from u to j
				2. vertex j should not included in shortest path graph i.e. processed
				3. edge weight is smaller than current weight edge 
			*/	
			if(graph[u][j] !=0 && processed[j] != true && values[u]+graph[u][j] < values[j] )
			{
				values[j]= values[u]+graph[u][j];
				parent[j]=u;
			}
		}
	}
	//Print Shortest Path Graph
	for(int i=1;i<v;++i)
	cout<<"U->V "<<parent[i]<<"->"<<i<<" wt = "<<graph[parent[i]][i]<<"\n";

}
int main()
{
	int graph[v][v]= {{0, 1, 4, 0, 0, 0},
						   {1, 0, 4, 2, 7, 0},
						   {4, 4, 0, 3, 5, 0},
						   {0, 2, 3, 0, 4, 6},
						   {0, 7, 5, 4, 0, 7},
						   {0, 0, 0, 6, 7, 0}};
	dijkstra(graph);	
	return 0;
}