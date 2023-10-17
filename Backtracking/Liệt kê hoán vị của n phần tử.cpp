#include <iostream>
using namespace std;
void result(int n, int x[]){
	for (int i=0;i<n;i++){
		cout<<x[i]<<" ";
	}
	cout<<"\n";
}
void Try(int i, int n, int x[], int used[]){
	for (int j=1;j<=n;j++){
		if (!used[j]){
			x[i]=j;
			used[j]=1;
			if (i==n-1) result(n,x);
			else Try(i+1,n,x,used);
			used[j]=0;
		}
	}
}
int main(){
	int n;
	cin>>n;
	int used[n+1],x[n];
	for (int i=0;i<=n;i++) used[i]=0;
	Try(0, n, x,used);	
}
