#include <iostream>
using namespace std;


void print(int A[], int n){
    for (int i = 0; i < n; ++i)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    int n,T;
    cout<<"Enter the no of test cases : ";
    cin>>T;
    for (int j = 0; j < T; ++j)
     {
             
     cout<<"Enter the size of array : ";
     cin>>n;
     int A[n];
     cout<<"Enter the array elements : ";
     for (int i = 0; i < n; ++i)
        {
        /* code */cin>>A[i];
        }
        Quicksort(A,0,n-1);
        print(A,n);

   } 
    return 0;
}