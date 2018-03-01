#include <iostream>

using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>2 || b >4 || c>6)
	{
		cout<<"input error"<<endl;
	}
	int min_sum=10;
	while(min_sum<101)
	{
		if((min_sum%3 == a)&& (min_sum%5 == b) && (min_sum%7 == c))
		{
			cout<<min_sum<<endl;
			return 0;
		}
		min_sum++;
	}
	cout<<"No answer"<<endl;
	return 0;
}
