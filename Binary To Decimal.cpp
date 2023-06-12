#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cin>>n;
	int i=0;
	int dec=0;
	while(n!=0){
		int rem=n%10;
	
		dec+=rem*(pow(2,i));
			i=i+1;
		n=n/10;
	}
	cout<<dec;
	
	return 0;
}
