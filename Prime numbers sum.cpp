#include<iostream>
using namespace std;

// PROTOTYPES
bool prime(int n);

// MAIN FUNCTION
int main(){
	int n,i;
	bool flag = false;
	cout<<"Enter a positive number : ";
	cin>>n;
	
	for(i = 2;i <= (n/2);i++)
	{
		if(prime(i))
		{
			if(prime(n-i))
			{
				cout<<n<<" = "<<i<<" + "<<(n-i)<<endl;
				flag = true;
			}
		}
	}
	if(!flag)
	{
		cout<<n<<" can not be expressed as sum of two prime numbers.";
		return 0;
	}
	return 0;
}

// prime()
bool prime(int n){
	int i;
	bool isprime = true;
	if(n == 0 || n == 1)
	{
		isprime = false;
	}
	else
	{
		for(i = 2;i <=(n/2);i++)
		{
			if(n % i == 0)
			{
				isprime = false;
				break;
			}
		}
	}
	return isprime;
}

