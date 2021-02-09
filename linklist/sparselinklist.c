#include <stdio.h>
struct node
{
    int value;
    int row_position;
    int colomn_position;
    struct node *next;
}

//func to create node
void node(struct node ** start, int non_zero_element , int row_index, int column_index)
{   
    struct node *temp;
    temp= *start;
    if(temp== NULL)   
    {
        //create new node dynamically
        temp=(struct node*)malloc(sizeof(struct node));
        temp->value=non_zero_element;
        temp->row_position=row_index;
        temp->colomn_position=column_index;
        temp->next=NULL;
        *start=temp;
    }
    else
    {
        while (temp->next != NULL) 
        temp = temp->next; 
        // Create new node dynamically 
        r = (struct Node *) malloc (sizeof(struct Node)); 
        r->value = non_zero_element; 
        r->row_position = row_index; 
        r->column_postion = column_index; 
        r->next = NULL; 
        temp->next = r;
    }
    
}
int main()
{
//  Matrix input part
    int m,n;
    printf("Enter row and coloumn respectively : ");
    scanf("%d  %d",&m,&n);
    int sparse[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n;j++)
        {
            printf("Enter element of Sparse[%d,%d] : ",i,j);
            scanf("%d",&sparse[i][j]);
        }
    }
//  
    return 0;
}