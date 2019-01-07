#include<iostream>
#include<math.h>
using namespace std;
int n,i,r,d,m,c,b,ch,count;
void d2b()
{
	cout<<"\nEnter the decimal number to be converted\n";
	cin>>n;
	r=0;
	d=0;
	m=n;
	while(n!=0)
	{
		r=n%2;
		n=n/2;
		d=d*10+r;
	}
	cout<<"\nDecimal="<<m<<"\nBinary="<<d<<"\n";
	cout<<"\nIdk what to chnage!! T^T\n";
}
void b2d()
{
	cout<<"\nEnter the binary number to be converted\n";
	cin>>b;
	c=b;
	count=0;
	while(b!=0)
	{
		b=b%10;
		b=b/10;
		sum=sum+b*pow(2,count);
		count++;
	}
	cout<<"\nBinary="<<b<<"\nDecimal="<<sum<<"\n";
}
int main()
{
	do
	{
		cout<<"\nEnter your choice\n1-Convert decimal to binary\n2-convert binary to decimal\n0-Exit\n";
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
	cout<<"\nYou know what? BYEEEE!\n";
	return 0;
}		
	
