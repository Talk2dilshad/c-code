#include <bits/stdc++.h>
using namespace std;

vector <int> parent;
int find(int v)
{
	if(parent[v]== -1)
	return v;
	return find(parent[v]);
}
void union_op(int fromP,int  toP)
{
	fromP = find(fromP);//search parent node
	toP=find(toP); //search parent node
	parent[fromP] = toP;
}
bool isCycle(vector <pair<int,int>>& edge_list)
{
	for(auto p : edge_list)
	{
		//find absolute parent of subset
		int fromP=find(p.first);
		int toP= find(p.second);

		if(fromP== toP)
		return true;
		//union operation
		union_op(fromP,toP); // union of two set
	}
	return false;
}

int main()
{
	int E; //edge
	int V; //vertices

	cin>>V>>E;// inputs

	parent.resize(V,-1);// mark all the vertices as seperate subset with one element only
	vector<pair<int,int>>  edge_list; //adjacency list
	//take input of edge (as source, distination)
	for(int i=0; i< E; ++i)
	{
		int from,to;
		cin>>from>>to;
		edge_list.push_back({from,to});
	}
	//check cyclic or not
	if(isCycle(edge_list))
	cout<<"\nTrue\n";
	else
	cout<<"\nFalse\n";
}
// time complexity => O(e.v)