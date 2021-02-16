#include<iostream>
using namespace std;
void TransposeOf(int arr[2][2],int b[2][2])
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			b[i][j]=arr [j][i];
		}
	}
}
int main(){
	int arr[2][2]={
					1,2,
					3,4
	};
	int b[2][2];
	TransposeOf (arr,b);
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		cout<<b[i][j]<<"   ";
		cout<<endl;
	}
	return 0;
	
}
