#include <iostream>
using namespace std;

void merge(int L[], int R[], int nl, int rl, int A[], int n){
	int i=0,k=0,j=0;
	while(i <nl && j <rl){
		if(L[i] <= R[j]){
			A[k]=L[i];
			k++;
			i++;
		}
		else{
			A[k]=R[j];
			j++;
			k++;
		}
	}
	while(i < nl){
		A[k]=L[i];
		k++;
		i++;
	}
	while(j<rl){
		A[k]=R[j];
		j++;
		k++;
	}
}

void mergesort(int A[], int n){
	int mid=n/2;
	int L[mid];
	int R[n-mid];
	if(n < 2) return;

	for (int i = 0; i < mid; ++i)
	{
		L[i]=A[i];
	}
	for (int i = mid; i < n; ++i)
	{
		R[i-mid]=A[i];
	}
	mergesort(L,mid);
	mergesort(R,n-mid);
	merge(L,R,mid,n-mid,A,n);
}

void print(int A[], int n){
	for (int i = 0; i < n; ++i)
	{
		cout<<A[i]<<" ";/* code */
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"enter the size of array : ";
	cin>>n;
	int A[n];
	cout<<"Enter the array elements : ";
	for (int i = 0; i < n; ++i)
	{
		cin>>A[i];/* code */
	}
	mergesort(A,n);
	cout<<"Sorted array : ";
	print(A,n);
	return 0;
}