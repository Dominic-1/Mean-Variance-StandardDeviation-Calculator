
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,j,y;
	double sum=0,variance;
	cout<<"\n how many numbers to type?"<<endl;
	cin>>y;
	double max[y];
	cout<<"type numbers:";
	for(n=0;n<=y-1;n++)
	{
		cin>>max[n];
	}
	n=0;
	cout<<endl;
	cout<<"numbers are;\t";
	for(j=0;j<=y-1;j++)
	{
		cout<<max[n]<<"\t";
		sum+=max[n];
		n++;
	}
	double mean=sum/n;
	cout<<endl<<"the sum is :"<<sum<<endl;
	cout<<"the meanis :"<<mean<<endl;
	n=0;
	j=0;
	sum=0;
	for(j=0;j<=y-1;j++)
	{
		max[n]=pow((max[n]-mean),2);
		sum+=max[n];
		n++;
	}
	variance=sum/(n-1);
	cout<<"variance is :"<<variance<<endl;
	cout<<"standard deviation is:"<<sqrt(variance)<<"\n\n";
	return 0;
	}
//mean,variance and standard deviation
