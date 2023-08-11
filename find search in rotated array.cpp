#include<iostream>
using namespace std;
int binarysearch(int arr[], int size ,int key){
	int s=0;
	int e = size -1;
	int mid = s + (e-s)/2;
	while(s<=e){
	if (arr[mid]== key){
		return mid;
	}
	else if (arr[mid]>key){
		e = mid -1;
	}
	else if (arr[mid]<key){
		s = mid +1;
	}
	mid = s + (e-s)/2;
}
return -1;
}

int getpivot (int arr[], int size){
    int s=0;
    int e = size -1;
    int mid = s + (e-s)/2;
    while(s<e){
    if (arr[mid]>=arr[0]){
    	s = mid + 1;
	}
	else 	{
		e = mid ;
	}
	mid = s + (e-s)/2;
}
return s;
}
int getrotatedarray(int arr[], int size, int k)
{
	int pivot = getpivot(arr,size);
	
		if (k>=arr[pivot]&& k<=arr[size-1]){
			return binarysearch(arr,size,k);
		}
		else
		{
			return binarysearch(arr,size,k);
		}
	
	return -1;
	}
int main ()
{
	int arr[7]= {4,5,6,7,0,1,2};
	cout <<"get pivot : " <<  getpivot(arr,7)<< endl;
	cout <<"getrotated array : " << getrotatedarray(arr,7,0);
}
