#include<iostream>
using namespace std;
int firstoccurance (int brr[], int size, int key){
	int start =0;
	int end = size -1;
	int mid = start + (end - start)/2 ;
	if (start<=end){
		if(brr[mid]<= key){
			end = mid -1;
			mid = start + (end-start)/2;
		}
		return mid;
		
	}
}
int main ()
{
	int arr[7]={1,2,3,3,3,3,3};
	int ans = firstoccurance(arr,7,3);
	cout <<"ans : " <<  ans << endl;
}

