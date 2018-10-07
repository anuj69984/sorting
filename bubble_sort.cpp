#include <iostream>
using namespace std;

void bubblesort(int A[], int n){
	for (int i = 1; i < n; ++i)
	{
		int flag=0;
		for (int j = 0; j <n-i ; ++j)
		{
			if(A[j] > A[j+1]){
				int temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
				flag=1;
			}
		}
		if(flag == 0)
			break;
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
	cout<<"Enter the size of array : ";
	cin>>n;
	int A[n];
	cout<<"Enter array elements : ";
	for (int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}
	bubblesort(A,n);
	print(A,n);
	return 0;
}