#include <stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    int row_position;
    int colomn_position;
    struct node *next;
}

//func to create node
void node(struct node ** start, int non_zero_element , int row_index, int colomn_index)
{   
    struct node *temp, *r;
    temp= *start;
    if(temp== NULL)   
    {
        //create new node dynamically
        temp=(struct node*)malloc(sizeof(struct node));
        temp->value=non_zero_element;
        temp->row_position=row_index;
        temp->colomn_position=colomn_index;
        temp->next=NULL;
        *start=temp;
    }
    else
    {
        while (temp->next != NULL) 
        temp = temp->next; 
        // Create new node dynamically 
        r = (struct node*) malloc (sizeof(struct node)); 
        r->value = non_zero_element; 
        r->row_position = row_index; 
        r->colomn_position = colomn_index; 
        r->next = NULL; 
        temp->next = r;
    }

}
void display(struct node* start)
{
    struct node* temp,*r,*s;
    temp=r=s=start;
    printf("row position :  ");
    while(temp != NULL)
    {
        printf("%d ",temp->row_position);
        temp=temp->next;
    }
    printf("\n");

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
//  passing input to struct linklist sparse
    for( int i = 0; i< m ; i++)
    {
        for (int j =0; j< n; j++)
        {
          //  passing value non-zero to func(node)
          if(sparse[i][j] != 0)
          {
            node(&start,sparse[i][j],i,j);
          }
        }
    }
    // display sparse ...
    display(start);
    return 0;
}