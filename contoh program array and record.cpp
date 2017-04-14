#include <iostream>
using namespace std;

typedef struct daftar
{
	char nama[30];
	short umur;
	int NIM;
	float IPK;
	}daftar;
	
	main ()
	{
		daftar mahasiswa[100];
		int i,x,N;
		cout<<"masukkan banyaknya data mahasiswa : ";
		cin>>N;
		cout<<endl;
		
		for (i=0;i<N;i++)
		{
			cout<<"nama :";cin>>mahasiswa[i].nama;
			cout<<"umur :";cin>>mahasiswa[i].umur;
			cout<<"NIM :";cin>>mahasiswa[i].NIM;
			cout<<"IPK :";cin>>mahasiswa[i].IPK;
			cout<<endl;
		}
		for (x=0;x<N;x++)
		{
		cout<<"data ke ["<<x+1<<"] "<<"bernama"<<mahasiswa [x].nama<<"berumur"
		<<mahasiswa [x].umur<<"tahun"<<", NIM "
		<<mahasiswa [x].NIM<<"dan IPK-nya adalah "<<mahasiswa [x].IPK;
		cout<<endl;
		}
		system("pause");
		return 0;
	}
