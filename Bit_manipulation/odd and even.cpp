#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    /*Function to count even and odd elements in the array
    * arr : Array with its elements
    * sizeof_array : number of array elements
    * countOdd : variable to count number of odd elements
    * countEven : variable to count number of even elements
    */
    void countOddEven(int arr[], int sizeof_array)
    {
        
        // your code here
        int count_even=0,count_odd=0;
       for(int i=0;i<sizeof_array; i++)
       {
         long long int n=arr[i];
		 // if xor of no. led to increament in no. then it is even else odd(in case of odd there is decrement)
         if ((n^1)==n+1)
		  count_even++;
          else count_odd++;
       }
        cout<<count_odd<<" "<<count_even<<endl;
    }
};
int main()
{
	int size;
	cin>>size;
	int arr[size];
	for(int n=0; n<size; n++)
	cin>> arr[n];
	Solution ob;

	ob.countOddEven(arr,size);
}