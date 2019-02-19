#include<iostream>
using namespace std;
void add (int a, int b)
{
	int sum;
	sum=a+b;
	cout<<sum;
}
int main()
{
	int a=10 , b=5;
	cout<<"sum="<<endl;
	add();
	return(0);

}
void sub (int a, int b)
{
        int diff;
        diff=a-b;
        cout<<diff;
}
int main()
{
        int a=10 , b=5;
        cout<<"difference="<<endl;
        sub();
        return(0);

}
void mul (int a, int b)
{
        int prod;
        prod=a*b;
        cout<<prod;
}
int main()
{
        int a=10 , b=5;
        cout<<"product"<<endl;
        mul();
        return(0);

}


