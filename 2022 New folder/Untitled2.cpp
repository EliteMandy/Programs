#include<iostream>
using namespace std;
int Polar(int x){
	if(x%2==0){
		cout<<" Even";
	}
	else{
		cout<<" ODD";
	}
}
int main(int num){
	cin>>num;
	Polar(num);
	return 0;
}
