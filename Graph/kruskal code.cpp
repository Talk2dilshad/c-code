#include <bits/stdc++.h>
using namespace std;
struct node
{
	int parent;
	int rank;
};
struct edge
{
	int src,dst,wt;//source,destination,weight
};

vector <edge> mst;//minimum spanning tree
vector <node> dsuf;//disjoint set union find or parent
int find(int v)
{
	if(dsuf[v].parent== -1)
	return v;
	return dsuf[v].parent=find(dsuf[v].parent);
}
bool compare(edge a,edge b)
{
	return a.wt< b.wt;// comparing weight of edge's
}
void union_op(int fromP,int toP)
{
	fromP = find(fromP);//search parent node
	toP=find(toP); //search parent node
	//union by rank
	if(dsuf[fromP].rank >dsuf[toP].rank)
	dsuf[toP].parent=fromP;

	else if(dsuf[fromP].rank < dsuf[toP].rank)
	dsuf[fromP].parent=toP;
	else
	{
		//both have same rank and so anyone can be made as parent , increase the rank of the parent
		dsuf[fromP].parent=toP;
		dsuf[toP].rank+=1;
	}
}
void print_edgelist(vector<edge>& edge_list)
{
	cout<<"\n===================   Print Edge List   ===============================\n";
	for(auto p : edge_list)
	cout<<"src : "<<p.src<<" dst : "<<p.dst<<"  wt : "<<p.wt<<"\n";
}
void kruskal(vector<edge>& edge_list ,int v, int e)
{
	cout<<"\n\nEdge List before sorting  \n\n";
	print_edgelist(edge_list);
	sort(edge_list.begin(),edge_list.end(),compare);//sort edge_list in ascending order
	cout<<"\n\nEdge List after sorting \n\n";
	print_edgelist(edge_list);

	int i=0,j=0;
	while(i<v-1 && j<e)
	{
		int fromP=find(edge_list[j].src);
		int toP=find(edge_list[j].dst);//find absolute parent of edge
		//check if adding the edge forms cycle then move j pointer ahead i.e. skip that edge
		if(fromP==toP)
		{  
			++j;
		    continue;
		}
		// Union Operation
		union_op(fromP,toP);//union of 2 sets
		mst.push_back(edge_list[j]);
		++i;
	}
	
}
// Display Mst 
void print_Mst(vector<edge>& mst)
{
	cout<<"\n================   Print Minimum Spanning Tree   ========================\n";
	for(auto p : mst)
	cout<<"src : "<<p.src<<" dst : "<<p.dst<<"  wt : "<<p.wt<<"\n";
}

int main()
{
	int v,e;
	cin>>v>>e;
	
	dsuf.resize(v);//mark all vertices as seperate subset with only one element
	//mark all node as independent sets
	for(int i=0; i<v; i++)
	{
		dsuf[i].parent=-1;
		dsuf[i].rank=0;
	}
	// Adjacency List
	vector<edge> edge_list;
	edge temp;
	for(int i=0; i<e; ++i)
	{
		int from,to,wt;
		cin>>from>>to>>wt;
		temp.src=from;
		temp.dst=to;
		temp.wt=wt;
		edge_list.push_back(temp);
	}
	kruskal(edge_list,v,e);
	print_Mst(mst);
}