#include <iostream>
using namespace std;
main (){
	int data[8]={8,10,6,2,11,7,1,100};
	int cari;
	int tanda=0;
	cout<<"masukkan data yang ingin dicari=";
	cin>>cari;
	for(int i=0;i<8;i++){
		if(data[i]==cari)tanda=1;
	}
	if(tanda==1)cout<<"Data ada!\n";
	else cout<<"Data tidak ada!\n";
}
