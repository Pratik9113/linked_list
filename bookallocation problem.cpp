#include<iostream>
using namespace std;
bool isposible(int arr[], int size , int m , int mid){
	int studentcount =1;
	int pagenum =0;
	
	for (int i=0;i<size;i++){
		if (pagenum+arr[i]<=mid){
			pagenum+=arr[i];
		}
		else {
			studentcount++;
			if (arr[i]>mid || studentcount>m){
				return false;
			}
			pagenum+=arr[i];
		}
	}
	return true;
}
int bookallocation(int arr[], int size, int m ){
	int s =0;
	int sum =0;
	int ans =-1;
	for (int i=0;i<size;i++){
		sum += arr[i];
	}
	int e = sum ;
	int mid = s + (e-s)/2;
	while(s<=e){
	if (isposible(arr,size,m,mid)){
		ans = mid;
		e = mid-1;
	}
	else {
		s = mid+1;
	}
	mid = s + (e-s)/2;
}
return ans;
}
int main ()
{
	int arr[5]={10,20,30,40,50};
	cout << bookallocation(arr,5,2);
}
