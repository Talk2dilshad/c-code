#include <stdio.h>
#include <stdlib.h>
// create structure {of three number}
// main fuction take loop (for structs)
struct Number
{
    int n1,n2,n3;
};

int main()
{
    int n;
    struct Number num;
    FILE *fptr;
    
    if((fptr=fopen("C:\\binary.bin","wb"))==NULL)
    {
        printf("Error !");
        exit(1);
    }
    
    for (n = 1; n < 5; ++n)
    {
        num.n1=n;
        num.n2=n*5;
        num.n3=n*5+1;
       // fwrite(&num,sizeof(struct Number),1,fptr);
        fread(&num, sizeof(struct Number), 1, fptr);
        
    }
    
    printf("n1: %d \t n2: %d \t n3: %d", num.n1, num.n2, num.n3);
    fclose(fptr);
    return 0;
}
