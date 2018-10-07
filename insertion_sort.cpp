#include <iostream>
using namespace std;

void insertionSort(int A[], int n){
	for (int i = 1; i < n; ++i)
	{
		int hole=i;
		int value=A[i];
		while(hole > 0 && A[hole-1] > value){
			A[hole]=A[hole-1];
			hole--;
		}
		A[hole]=value;
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
	cout<<"Sorted array : ";
	insertionSort(A,n);
	print(A,n);
	return 0;
}