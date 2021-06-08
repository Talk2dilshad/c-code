#include <iostream>
using namespace std;
#define EVEN 0
#define ODD 1
int main()
{

   // int x = 3, y = 5, z = 6;
   // int a = 2, b = 4, c = 7;
   
   // int res1 = c ^ (x ^ y);
   // int res2 = z ^ (a ^ b);
   
   // cout << (res1 | res2);
  
//   int x = 2, y = 3;
//     x = y << x;
//     y = x << y;
//     cout << (x >> 1) << " " << (y >> 1);

//   int i = 1024;
//     for (; i; i >>= 1)
//         cout << "GeeksQuiz ";

   int i = 3;
    switch (i & 1)
    {
        case EVEN: cout << "Even";
                break;
        case ODD: cout << "Odd";
                break;
        default: cout << "Default";
    }
   return 0;
} 