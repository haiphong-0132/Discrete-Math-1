#include <iostream>
using namespace std;
void Try(int n, int k, int a[], int i){
	if (i==k+1){
		for (int i=1;i<=k;i++) cout<<a[i]<<" ";
		cout<<"\n";
		return;
	}
	for (int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		Try(n,k,a,i+1);

	}
}
int main(){
	int n,k;
	cin>>n>>k;
	int a[n+1];
	a[0]=0;
	Try(n,k,a,1);
}
