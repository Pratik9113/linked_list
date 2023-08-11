#include<iostream>
using namespace std;
bool ispossible(int arr[], int size, int painternumber,int mid){
	int paintercount=1;
	int wallnum =0;
	for (int i=0;i<size;i++){
		if (wallnum + arr[i] <= mid ){
			wallnum+=arr[i];
			
		}
		else {
			paintercount++;
			if (arr[i]>mid || paintercount>2 ){
			return false;
		}
			wallnum+=arr[i];
		}
	}
	return true;
}
int painterproblem (int arr[], int size, int painternumber){
	int s = 0;
	int sum =0;
	int ans =-1;
	
	for (int i=0;i<size;i++){
		sum+=arr[i];
	}
	int e = sum;
	int mid = s + (e-s)/2;
	while(s<=e){
		if (ispossible(arr,size,painternumber,mid)){
			ans = mid ;
			e = mid -1;
		}
		else {
			s = mid +1;
		}
		 mid = s + (e-s)/2;
	}
	return ans;
}
int main ()
{
	int arr[4] = {5,5,5,5};
	cout << painterproblem (arr,4,2);	
}
