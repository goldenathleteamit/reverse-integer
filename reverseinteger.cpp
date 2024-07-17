//reverse the integer
#include<iostream>
using namespace std;
 
int main(){
//	int n;
//	cin>>n;
//	
//	int ans=0;
//	while(n!=0){
//		int rem = n%10;
//		ans= (ans*10)+rem;
//		n=n/10;
//	}
//	cout<<ans<<endl;    THIS CODE IS FOR THE VALUES WHICH ARE IN INT RANGE


	int n;
	cin>>n;
	
	int ans=0;
	while(n!=0){
		int rem = n%10;
		if((ans>INT_MAX/10) || (ans<INT_MIN/10)){
			cout<<"out of the range";
		}
		ans= (ans*10)+rem;
		n=n/10;
	}
	cout<<ans<<endl;






//int n;               FIBONACCI SERIES
//cin>>n;
//int a=0;
//int b=1;
//cout<<a <<" "<<b<<" ";
//for(int i=2;i<n;i++){
//	int nexxtnum=a+b;
//	cout<<nexxtnum<< " ";1
//	
//	a=b;
//	b=nexxtnum;
//	
//}

}
