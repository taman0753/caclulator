#include<iostream>
using namespace std;
void add (int a, int b)
{
	int sum;
	sum=a+b;
	cout<<sum;
}
void sub (int a, int b)
{
        int diff;
        diff=a-b;
        cout<<diff;
}
void mul (int a, int b)
{
        int prod;
        prod=a*b;
        cout<<prod;
}
void div (int a, int b)
{
        int quo;
        quo=a/b;
        cout<<quo;
}
int main()
{
        int a=10 , b=5;
	cout<<"sum"<<endl;
	add(a,b);

	cout<<"diff"<<endl;
	sub(a,b);
        cout<<"product"<<endl;
	mul(a,b);
	cout<<"division"<<endl;
	div(a,b);
       
        return(0);

}


