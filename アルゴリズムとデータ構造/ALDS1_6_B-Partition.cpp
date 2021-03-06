#include<iostream>
#include<algorithm>
using namespace std;

#define MAX 100000
int A[MAX],n;

int partition(int p,int r){
	int x,i;
	x=A[r];
	i=p-1;
	for(int j=p;j<r;j++){
		if(A[j]<=x)swap(A[++i],A[j]);
	}
	swap(A[i+1],A[r]);
	return i+1;
}

int main(){
	int q;
	cin>>n;
	for(int i=0;i<n;i++)cin>>A[i];
	
	q=partition(0,n-1);
	for(int i=0;i<n;i++){
		if(i)cout<<" ";
		if(i==q)cout<<"["<<A[i]<<"]";
		else cout<<A[i];
	}
	cout<<endl;
	
	return 0;
}