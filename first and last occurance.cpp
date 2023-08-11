/*#include<iostream>
using namespace std;
int displayindex(int arr[], int size, int key){
	int start =0;
	int end = size-1;
	int ans = start +(end -start)/2;
	if(arr[ans]== key){
	while (end >=start){
		ans = start +(end -start)/2;
		end = ans-1;
		if (arr[ans]!= key){
		return ans+1 ;
	}
	}
}
return -1;
}
int displayindexlast(int arr[], int size, int key){
	int start =0;
	int end = size-1;
	ans-1 ;
	}+
	}
	
}
return -1;	
}
int main ()
{
	int arr[8]={3,3,3,3,3,3,3,4};
	cout << displayindex(arr,8,3);
	cout << displayindexlast(arr,8,3);
}
*/
#include<iostream>
using namespace std;
int firstoccurance(int arr[], int n,int key){
	int s=0,e=n-1;
	int ans;
	int mid = s +(e-s)/2;
	while (s<=e){
    if (arr[mid]== key){
    	ans = mid;
    	e =  mid -1;
	}
	
	else if (arr[mid] > key){
		e = mid-1;
	}
	else if (arr[mid]<key){
		s = mid +1;
	}
	mid =  s+ (e-s)/2;
	
}
return ans;
}
int lastoccurance(int arr[], int n,int key){
	int s=0,e=n-1;
	int ans;
	int mid = s +(e-s)/2;
	while (s<=e){
    if (arr[mid]== key){
    	ans = mid;
    	s = mid+1;
	}
	
	else if (arr[mid] > key){
		e = mid-1;
	}
	else if (arr[mid]<key){
		s = mid +1;
	}
	mid =  s+ (e-s)/2;
	
}
return ans;
}
int main()
{
	int arr[10] ={ 6,6,6,6,6,6,6,6,6,34};
	cout << "first occurance at index : " << firstoccurance(arr,10,6);
	cout << "last occurance at index : " << lastoccurance(arr,10,6);
}
