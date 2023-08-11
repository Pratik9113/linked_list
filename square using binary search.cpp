#include<iostream>
using namespace std;
int findsquare(int n){
	int s=0;
	int e = n;
	int ans =-1;
	int mid = s+(e-s)/2;
	while(s<=e){
		if ((mid*mid)< n ){
			ans = mid;
			s =  mid+1;
		}
		else{
			e = mid -1;
		}
		if( (mid*mid)== n){
			return mid;
		}
		mid = s+(e-s)/2;
	}
	return ans;
}
int main()
{
    
    cout << findsquare(84);
	}
