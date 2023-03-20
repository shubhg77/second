#include<iostream>
using namespace std;
int main(){
	int rowno=1;
	int tr;
	cin>>tr;
	int temp=tr/2+1;
	while(rowno<=temp){
// spaces ====
int i=1;
while(i<=temp-rowno){
	cout<<"\t";
	i=i+1;
}
// star ===
int j=1;
while(j<=2*rowno-1){
	cout<<"*"<<"\t";
	j=j+1;
}
cout<<endl;
rowno=rowno+1;
	}
	///lower partr===========

int rowno1=1;
int temp1=tr/2;
while(rowno1<=temp1){
	//space s===
	int t=1;
	while(t<=rowno1){
		cout<<"\t";
		t=t+1;
	}
//star===
int k=1;
while(k<=(2*temp1-2*rowno1)+1){
	cout<<"*"<<"\t";
	k=k+1;
}
cout<<endl;
rowno1 = rowno1+1;

}
	return 0;
}
