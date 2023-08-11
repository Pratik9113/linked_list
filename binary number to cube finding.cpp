#include<iostream>
#include<string>
using namespace std;
int binarynumberforcune(int n){
	int s =0;
	int e = n-1;
	int mid = s+(e-2*s)/3;
	int ans =-1;
	while(s<=e){
		if ((mid*mid*mid)<n){
			ans = mid;
			s= mid +1;
		}
		else{
			e = mid -1;
		}
		if (mid*mid == n){
			return mid;
		}
		mid = s+(e-2*s)/3;
	}
	return ans;
}
int main(){
	
	cout << binarynumberforcune(1000);
}
