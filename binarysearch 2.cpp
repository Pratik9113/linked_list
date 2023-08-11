#include<iostream>
using namespace std;
int binarysearch(int arr[], int size,int n){
	int start =0;
	int end = size -1;
	int mid = start + (end - start)/2;
	while(start<=end){
		if (arr[mid]==n){
			return mid ;
		}
		if (n>arr[mid]){
			start = mid +1;
		}
		else{
			end = mid -1;
		}
		mid = start + (end - start)/2;
	}

}
int main()
{
	int arr[5]={2,4,322,432,543};
	cout << binarysearch(arr,5,322);

}
