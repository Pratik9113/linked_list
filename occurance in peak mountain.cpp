#include<iostream>
using namespace std;

int peakelement(int arr[], int size ){
	int s =0;
	int e= size-1;
	int mid = s+(e-s)/2;
	while(s<e){
		if (arr[mid]<arr[mid +1]){
			start = mid +1;
		}
		else {
			e = mid ;
		}
		mid = s+(e-s)/2;
	}
	return s;
}
int nOccuranceMOuntainArray(int arr[], int size , int key){
	
	int peakindex = peakelement(arr,size);
	int k=0;
	while(s<e){
	if (arr[peakindex]==key){
		k++;
	}
	if (arr[peakindex]>key){
		int start = peakindex;
		int end = size-1;
		int mid = start +(end -start)/2
		while(start < end){
			if (arr[mid]==key){
				k++;
			}
			else if (ar)
		}
	}
	
}
int main(){
	int arr[9]={3,4,5,6,5,4,3,2,1};
	
}
