#include<iostream>
using namespace std;

int main(){
	int baris,kolom,matriksA[2][2], matriksB[2][2],jml=0,hasil[2][2];
	cout<<"Masukkan Jumlah Baris	:";cin>>baris;
	cout<<"Masukkan Jumlah Kolom	:";cin>>kolom;
	
	if(baris==kolom)
	cout<<"Matriks A"<<endl;
	{
		for(int i=0;i<baris;i++)
		{
			for(int j=0;j<kolom;j++)
			{
				cout<<"Masukkan Elemen Baris ke"<<i<<"Kolom ke"<<j<<":";cin>>matriksA[i][j];
			}
		}
	} 
	cout<<endl;
	cout<<"Elemen Matriks A"<<endl;
	for(int i=0;i<baris;i++)
	{
		for(int j=0;j<kolom;j++)
		{
			cout<<matriksA[i][j];
		}
	cout<<endl;
	}
	cout<<"Matriks B"<<endl;
	for(int i=0;i<baris;i++)
	{
		for(int j=0;j<kolom;j++)
		{
			cout<<"Masukkan Elemen Baris ke"<<i<<"Kolom ke"<<j<<":";cin>>matriksB[i][j];
		}
	}
	cout<<"Elemen Matriks B"<<endl;
	for(int i=0;i<baris;i++)
	{
		for(int j=0;j<kolom;j++)
		{
			cout<<matriksA[i][j];
		}
	cout<<endl;
	}
	for(int i=0;i<baris;i++)
	{
		for(int j=0;j<kolom;j++)
		{
			jml=0;
			for(int k=0;k<baris;k++)
			{
				jml=jml+matriksA[i][j]*matriksB[i][j];
			}
			hasil[i][j]=jml;
		}
	}
	cout<<endl;
	cout<<"Hasil Perkalian dari Matriks A dan B adalah :"<<endl;
	for(int i=0;i<baris;i++)
	{
		for(int j=0;j<kolom;j++)
		{
			cout<<" "<<hasil[i][j];
		}
	}
	
	return 0;
}
