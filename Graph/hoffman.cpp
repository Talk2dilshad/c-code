// learn concept of hoffman code by https://www.programiz.com/dsa/huffman-coding 
// -----------------    algorithm    -----------------
// Begin
// define a node with character, frequency, left and right child of the node for Huffman tree.
//    create a list ‘freq’ to store frequency of each character, initially all are 0
//    for each character c in the string do
//       increase the frequency for character ch in freq list.
//    done
//    for all type of character ch do
//       if the frequency of ch is non zero then add ch and its frequency as a node of priority queue Q.
//    done
//    while Q is not empty do
//       remove item from Q and assign it to left child of node
//       remove item from Q and assign to the right child of node
//       traverse the node to find the assigned code
//    done/end.
#include <bits/stdc++.h>
using namespace std;

struct node
{
	int freq;
	char data;
	const node *child0,*child1;
	//assign the value..
	node(char d, int f =-1)
	{
		data=d;
		freq=f;
		child0=NULL;		
		child1=NULL;		
	}
	node(const node *c0,const node *c1)
	{
		data=0;
		freq=c0->freq+c1->freq;
		child0=c0;
		child1=c1;
	}

	/*The operator is operator < which is the less than operator. The current object is considered the left hand side or lhs, and the object compared against, the right hand of the a < b expression is rhs.
 bool  // return type
 operator <  // the operator
 (const TriIndex& rhs) // the parameter
 {
     ...
 }*/
	bool operator< (const node &a)const 
	{//operator performs to find priority in queue
		return freq > a.freq;
	}
	void traverse(string code="")const
	{
		if(child0 != NULL)
		{
			child0->traverse(code+'0');//add 0 with the code as left child
			child1->traverse(code+'1');//add 1 with the code as right child
		}
		else
		{
			cout<<"character: "<<data<<",frequency : "<<freq<<",code : "<<code<<endl;
		}
	}
};
void huffman(string str)
{
	priority_queue<node> qu;
	int frequency[256]={0};//clear all frequency
	for(int i=0;i<str.size(); i++)
	frequency[int(str[i])]++;// increase the frequency
	for(int i=0;i<256; i++)
	{
		if(frequency[i])
		{
			qu.push(node(i, frequency[i]));
		}
	}
	while(qu.size()>1)
	{
		node *c0 = new node(qu.top());//get the left child and remove from the queue
		qu.pop(); 
		node *c1 = new node(qu.top());//get the right child and remove from the queue
		qu.pop();
		qu.push(node(c0,c1));//add frequency of two child and again in the queue
	}
	cout<<"Huffman code :  "<<endl;
	qu.top().traverse();//traverse the tree to get code
}
int main()
{
	string str = "ACCEBFFFFAAXXBLKE";
	huffman(str);
}