#include <bits/stdc++.h>
using namespace std;
#define N 4

void print_solution(int board[N][N])
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N; j++)
		cout<<board[i][j];
		cout<<endl;
	}
}

/*A utility function to check if a queen can
   be placed on board[row][col]. Note that this
   function is called when "col" queens are
   already placed in columns from 0 to col -1.
   So we need to check only left side for
   attacking queens */
bool isSafe(int board[N][N],int row,int col)
{
	int i,j;
	//check this row on left side
	for(i=0;i<col;i++)
	if(board[row][i])
	return false;
	// check upper diagonal on left side
	for(i=row,j=col; i>= 0 && j>=0; i--,j--)
	if(board[i][j])
	return false;
	// check lower diagonal on left side
	for(i=row,j=col; j>= 0 && i<N; i++,j--)
	if(board[i][j])
	return false;

	return true;
}

// recursive utility function to solve N Queen problem
bool solveNQutil(int board[N][N],int col)
{
	// base case if all queen are placed then return true 
	if(col >=N)
	return true;
	// iterating over each row in column col
	for(int i=0; i<N; i++)
	{
		if(isSafe(board,i,col))
		{
			board[i][col]=1;// place the queen in this board
			// recursively place rest of the queen 
			if(solveNQutil(board,col+1))
			return true;
			//if placing queen doesn't lead to solution then remove queen from the board[i][col]
			board[i][col]=0;//backtrack
		}
	}
	// if queen cannot be placed in any row in this column col then return false
	return false;
}


/* This function solves the N Queen problem using
   Backtracking. It mainly uses solveNQUtil() to 
   solve the problem. It returns false if queens
   cannot be placed, otherwise, return true and
   prints placement of queens in the form of 1s.
   Please note that there may be more than one
   solutions, this function prints one  of the
   feasible solutions.*/
bool solve_NQueen()
{
	int board[N][N] ={{0,0,0,0},
							{0,0,0,0},
							{0,0,0,0},
							{0,0,0,0}};
	if(solveNQutil(board,0)==false)
	{
		cout<<"Solution doesn't exists";
		return false;
	}
	print_solution(board);
	return true;
							
}

int main()
{
	solve_NQueen();
	return 0;
}