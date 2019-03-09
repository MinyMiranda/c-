#include<iostream>
using namespace std;
main(){
	int vector [10];
	for(int i=0; i<10 ; i++)
	{
		cout<<"Digite um numero \n";
		cin>>vector[i];
	}
for(int i=0;i<10;i++)
	if(vector[i]%2==0)
		cout<<"\n" << vector[i]<< "\n";
}
