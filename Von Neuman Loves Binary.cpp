#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n>0){
		int t;
		cin>>t;
	int i=0;
	int dec=0;
	while(t!=0){
		int rem=t%10;
	
		dec+=rem*(pow(2,i));
			i=i+1;
		t=t/10;
	}
	cout<<dec<<endl;
	n=n-1;
	}
	
	return 0;
}
