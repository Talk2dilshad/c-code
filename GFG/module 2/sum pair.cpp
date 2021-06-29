#include <bits/stdc++.h>
using namespace std;

void findPairs(int arr[], int n, int sum)
{
    int k = n - 1;
    int j = 0;
    bool flag = false;
    while(arr[j] < sum && j < k)
    {
        if(arr[j] + arr[k] < sum)
            j++;
        else if(arr[j] + arr[k] > sum)
            k--;
        else{
            cout << arr[j] << " " << arr[k] << " " << sum << endl;
            flag = true;
            j++;
            k--;
        }
    }
    if(flag == false)
        cout << -1 << endl;

}

int main()
{
	int arr[]={ 1,2,3,4,5,6,7};
	int n=7;
	int k=34;
	findPairs(arr,n,k);
}