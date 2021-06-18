/* 
Example
Input:

x = 47 (00101111)

let p1 = 1 (Start from the second bit from the right side)

p2 = 5 (Start from the 6th bit from the right side)

n = 3 (No of bits to be swapped)

Output:

227 (11100011)

The 3 bits starting from the second bit (from the right side) are 

swapped with 3 bits starting from 6th position (from the right side)
*/
#include <iostream>
using namespace std;

// Algorithm https://practice.geeksforgeeks.org/tracks/module-2-arrays-and-strings/?batchId=113


int swapBits(unsigned int x, unsigned int p1,
             unsigned int p2, unsigned int n)
{
    /* Move all bits of first set to rightmost side */
    unsigned int set1 = (x >> p1) & ((1U << n) - 1);

    /* Move all bits of second set to rightmost side */
    unsigned int set2 = (x >> p2) & ((1U << n) - 1);

    /* Xor the two sets */
    unsigned int Xor = (set1 ^ set2);

    /* Put the Xor bits back to their original positions */
    Xor = (Xor << p1) | (Xor << p2);

    /* Xor the 'Xor' with the original number so that the 
    two sets are swapped */
    unsigned int result = x ^ Xor;

    return result;
}
int swapBits_inshort(int x, int p1, int p2, int n)
{
    //move all bits of 1st and 2nd sets to the rightmost side and then xor the set 1&2
        
    int Xor=((x>>p1)^(x>>p2))&((1U<<n)-1);
    
    // swap the sets and XOR the xor with orginal set
        
    return x^((Xor << p1) | (Xor << p2));
}
/* Driver code*/
int main()
{
    int res = swapBits(28, 0, 3, 2);
    cout << "Result = " << res;
    return 0;
}
