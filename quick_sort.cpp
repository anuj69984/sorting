#include <iostream>
using namespace std;

// Time complexity--> O(nlogn)
// space complexity--> constant amount of extra memory.

int partition(int A[], int start, int end){
	int pivot=A[end];
	int pindex=start;
	for (int i = start; i < end; ++i)
	{
		if(A[i] <= pivot){
			swap(A[i],A[pindex]);
			pindex++;
		}
	}
	swap(A[pindex],A[end]);
	return pindex;
}

void quicksort(int A[], int start, int end){
	if(start < end){
		int pindex=partition(A,start,end);
		quicksort(A,start,pindex-1);
		quicksort(A,pindex+1,end);
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
	int n,T;
	cin>>T;
	for(int j=0;j<T;j++){
	cout<<"enter the size of array : ";
	cin>>n;
	int A[n];
	cout<<"Enter array elements : ";
	for (int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}
	cout<<"Sorted array : ";
	quicksort(A,0,n-1);
	print(A,n);
}
	return 0;
}
