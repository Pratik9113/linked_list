#include<iostream>
using namespace std;
int frontmountain(int arr[],int size, int key){
	int s =0;
  	int e = size-1;
  	int k=0;
	int mid = s +(e-s)/2;
	while (s<e){
		if (arr[mid] == key){
			k++;
		}
		mid = s +(e-s)/2;
	}
	
return k;
}
int main(){
	int arr[7]={2,4,5,6,7,5,4};
    cout << frontmountain(arr,7,6);	
}
