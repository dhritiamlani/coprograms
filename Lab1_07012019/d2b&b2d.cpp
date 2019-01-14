#include<iostream>
#include<math.h>
using namespace std;
int n,x=0,i,r,t,d,j,b,ch,count,sum=0;
void d2b()
{
	cout<<"Enter decimal number\n";
	cin>>n;
	r=0;
	d=0;
	j=1;
	while(n!=0)
	{
		r=n%2;
		n=n/2;
		d=d+r*j;
		j=j*10;
	}
	cout<<"Binary value is\n"<<d;
}
void b2d()
{
	cout<<"Enter binary number\n";
	cin>>b;
	count=0;
	x=1;
	while(b!=0)
	{
		t=b%10;
		b=b/10;
		sum=sum+t*x;
		x=x*2;
		count++;
	}
	cout<<"Decimal value is\n"<<sum; //corrected comment
}
int main()
{
	do
	{
		cout<<"\nEnter your choice\n1: Decimal to binary\n2: binary to Decimal\n";
		cin>>ch;
		switch(ch)
		{
			case 1: d2b();
					break;
			case 2: b2d();
					break;
			case 0: break;
			default: cout<<"\nInvalid choice!\n";
		}
	}while(ch!=0);
	return 0;
}		
	
