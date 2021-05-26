//بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ‎
//Bismillah-ir-Rahman-ir-Rahim

#include <bits/stdc++.h>
using namespace std;
struct node
{
	int parent;
	int rank;
};
vector<node> dsuf;// disjoint set union find
// Find Operation
int find(int v)
{
	if(dsuf[v].parent== -1)
	return v;
	return dsuf[v].parent=find(dsuf[v].parent); //path compression 
}
// union function
void union_op(int fromP, int toP)
{
	fromP=find(fromP);
	toP=find(toP);

	//union by rank
	if(dsuf[fromP].rank>dsuf[toP].rank) // if fromP has higher rank then make toP parent => fromP
	dsuf[toP].parent=fromP;
	else if(dsuf[fromP].rank<dsuf[toP].rank) // if toP has higher rank then make fromP parent => toP
	dsuf[fromP].parent=toP;
	else
	{
		//both has same rank ,so anyone can be made as parent
		dsuf[fromP].parent=toP;
		dsuf[toP].rank += 1; // increase the rank of parent
	}
}
bool isCyclic(vector<pair<int,int>>& edge_list)
{
	for(auto p: edge_list)
	{
		int fromP =find(p.first);// find absolute parent of subset
		int toP=find(p.second);// find absolute parent of subset
		if(fromP==toP)
		return true;
		//union operation
		union_op(fromP,toP);
	}
	return false;
}


int main()
{
	int v,e;// vertex ,edge
	cin>>v>>e;
	dsuf.resize(v);// mark all vertices as seperate subset with only one element
	//mark all node as independent set
	for(int i=0; i<v; i++)
	{
		dsuf[i].parent=-1;
		dsuf[i].rank=0;
	}
	//Adjacency List
	vector <pair<int,int>> edge_list;
	for(int i=0; i<e; i++)
	{
		int from,to;
		cin>>from>>to;
		edge_list.push_back({from,to});
	}
	if(isCyclic(edge_list))
		cout<<"TRUE\n";
	else
		cout<<"FALSE\n";
	
	return 0;
}