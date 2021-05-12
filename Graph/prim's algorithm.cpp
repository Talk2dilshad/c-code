#include <bits/stdc++.h>
using namespace std;

#define v 6		//No of vertices

int Select_min_vertex(vector <int>& value, vector <bool>& setMST)
{
	int minimum= INT_MAX;
	int vertex;
	for(int i=0; i< v; i++)
	{
		if(setMST [i] == false && value[i]<minimum )
		{
		vertex=i;
		minimum=value[i];
		}
	}
	return vertex;
}

void findMST(int graph[v][v])
{
	int parent[v]; // store MST
	vector<int> value(v,INT_MAX); //used for edge relaxation 
	vector<bool> setMST(v,false);// TRUE -> vertex is included in MST

	//Assuming starting node as 0 
 	parent[0]=-1;// start node has no parent node
	value[0]=0;  // start node value 0 as it to be picked first 

	//form MST with (v-1) edge
	for(int i=0; i< v-1; i++)
	{
		//select best vertex by applying greedy method
		int u= Select_min_vertex(value,setMST);
		setMST[u]=true;// Include new vertex in setMST

		// Relax adjacent vertices (not including edge in MST)
		for(int j=0; j<v; j++)
		{
			// constraints to relax
			// 1.Edge is present from U to j.
			//  2.Vertex j is not included in MST
			//  3.Edge weight( eg. graph[][] ) is smaller than current edge weight
			if(graph[u][j] !=0 && setMST[j] == false && graph[u][j] < value[j])
			{
				value[j]=graph[u][j];
				parent[j]=u;
			}
		}

	}
	//print MST
	for(int i=1; i<v; ++i)
	cout<<"u->v :  "<<parent[i]<<"->"<<i<<" weight -> "<<graph[parent[i]][i]<<"\n";

}

int main()
{
	int graph[v][v]={{0,4,6,0,0,0},
						   {4,0,6,3,4,0},
						   {6,6,0,1,8,0},
						   {0,3,1,0,2,3},
						   {0,4,8,2,0,7},
						   {0,0,0,3,7,0} };
	
	findMST(graph);

}
// Time complexity (v^2)