#include<iostream>
using namespace std;
int binarysearch(int arr[], int size,int n){
	int start =0;
	int end = size -1;
	int mid = start + (end - start)/2;
	if (start<=end){
		if (arr[mid]==n){
			return mid ;
		}
		if (arr[mid ]<n){
			start = mid +1;
		}
		else{
			end = mid -1;
		}
		mid = start + (end - start)/2;
	}
	return -1;
}
int main()
{
	int arr[5]={2,4,322,432,543};
	int ans = binarysearch(arr,5,543);
	cout  << "  index is :  " << ans ;
}
