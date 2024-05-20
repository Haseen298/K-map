#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	cout<<"Enter the numbers of minterms you want enter in 3 variables K-map: ";
	int size;cin>>size;
	int minterms[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter "<<i+1<<" minterm: ";
		cin>>minterms[i];
	}
	int counter=0,condition;
	int array[4][4];
	for(int i=0;i<4;i++)
	{
		if(i==3)
		{
			counter-=4;
			for(int j=0;j<4;j++)
		{
			condition=0;
			for(int k=0;k<size;k++)
			{
				if(j==2)
				{
					counter+=1;
					if(minterms[k]==counter)
					{
						cout<<1;
				    	condition=1;
					}
					counter-=1;
					
				}
				else if (j==3){
					counter-=1;
					if(minterms[k]==counter)
					{
						cout<<1;
				    	condition=1;
					}
					counter+=1;
				}
				else{
					if(minterms[k]==counter)
					{
						cout<<1;
				    	condition=1;
					}
				}
			}
			if(condition==0)
			{
				cout<<0;
			}
			cout<<"  ";
			counter+=1;
		}
			counter+=4;
		}
		else if(i==2)
		{
			counter+=4;
			for(int j=0;j<4;j++)
		{
			condition=0;
			for(int k=0;k<size;k++)
			{
				if(j==2)
				{
					counter+=1;
					if(minterms[k]==counter)
					{
						cout<<1;
				    	condition=1;
					}
					counter-=1;
					
				}
				else if (j==3){
					counter-=1;
					if(minterms[k]==counter)
					{
						cout<<1;
				    	condition=1;
					}
					counter+=1;
				}
				else{
					if(minterms[k]==counter)
					{
						cout<<1;
				    	condition=1;
					}
				}
			}
			if(condition==0)
			{
				cout<<0;
			}
			cout<<"  ";
			counter+=1;
		}
			counter-=4;
		}
		else{
			for(int j=0;j<4;j++)
		{
			condition=0;
			for(int k=0;k<size;k++)
			{
				if(j==2)
				{
					counter+=1;
					if(minterms[k]==counter)
					{
						cout<<1;
				    	condition=1;
					}
					counter-=1;
					
				}
				else if (j==3){
					counter-=1;
					if(minterms[k]==counter)
					{
						cout<<1;
				    	condition=1;
					}
					counter+=1;
				}
				else{
					if(minterms[k]==counter)
					{
						cout<<1;
				    	condition=1;
					}
				}
			}
			if(condition==0)
			{
				cout<<0;
			}
			cout<<"  ";
			counter+=1;
		}
		}
		cout<<endl;
	}
	return 0;
}
