#include <iostream>
using namespace std;

void selectionsort(int A[], int n){
	for (int i = 0; i < n-1; ++i)
	{
		int imin=i;
		for (int j = i+1; j < n; ++j)
		{
			if(A[j] < A[imin])
				imin=j;
		}
		int temp=A[i];
		A[i]=A[imin];
		A[imin]=temp;
	}
}
void print(int A[], int n){
	for (int i = 0; i < n; ++i)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"enter the size of array : ";
	cin>>n;
	int A[n];
	cout<<"Enter array elements : ";
	for (int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}
	selectionsort(A,n);
	cout<<"Sorted elements : ";
	print(A,n);
	return 0;
}