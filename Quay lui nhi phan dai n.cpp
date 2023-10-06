#include <iostream>
using namespace std;
void Try(int n, int a[], int i){
	if (i>=n){
		for (int k=0;k<n;k++) cout<<a[k];
		cout<<"\n";
	}
	else{
		for (int j=0;j<=1;j++){
			a[i]=j;
			Try(n,a,i+1);
		}
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	Try(n,a,0);
}
