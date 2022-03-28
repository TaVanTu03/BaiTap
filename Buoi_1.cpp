#include <iostream>
using namespace std;

void Th(int c){
	cout<<"Chuong trinh In ra thu muon biet trong english"<<endl;
	again:
	cout<<"\nPhease entrer: "; cin>>c;
	switch(c)
	{
		case 1: cout<<" Monday"<<endl; break;
		
		case 2: cout<<" Tuesday"<<endl; break;
		
		case 3: cout<<" Wednesday"<<endl; break;
		
		case 4: cout<<" Thursday"<<endl; break;
		
		case 5: cout<<" Friday"<<endl; break;
		
		case 6: cout<<" Saturday"<<endl; break;
		
		case 7: cout<<" Sunday"<<endl; break;
		
		default: cout<<"\nLam j co thu nao nhu the!!!"<<endl;
                     cout<<"Nhap lai de!!!!!!!!!!!!!!!!!"<<endl;
                     goto again;
	}
}

void  electric(int n){
	cout<<"Chuong trinh tinh tien dien"<<endl;
	again:
	int money = 0;
	cout<<"\nplease enter: "; cin>>n;
	if(n>300) money = (n-300)*3500 + 100*3000 + 100*2500 + 100*2000;
	else if(n>200) money = (n-200)*3000 + 100*2500 + 100*2000;
	else if(n>100) money = (n-100)*2500 + 100*2000;
	else if(n>=0) money = n*2000;
	else goto again;
	cout<<"Tien dien phai tra la: "<<money<<" (Dong)"<<endl;
}

void P(int n){
	int s=1;
	cout<<"Chuong trinh tinh tich S=2*...2*n"<<endl;
	cout<<"\nMoi nhap gioi han: "; cin>>n;
	for(int i=1; i<=n; i++){
		s*=2*i;
	}
	cout<<"Ket qua tinh duoc la: "<<s<<endl;
}

void tam(int n){
	cout<<"Chuong trinh thiet lap tam giac co chieu cao n"<<endl;
	again:
	cout<<"\nMoi nhap chieu cao: "; cin>>n;
	if(n<=0) goto again;
	for(int i=0; i<=n; i++){
		for(int j=i; j<=n; j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}	
}

int main()
{
	int n, c;
	again:
	system("color A");
	system("cls");
	cout<<".1...........Bang lua chon..........."<<endl;
	cout<<".1.In ra thu muon biet trong english."<<endl;
	cout<<".2.Tinh tien dien                   ."<<endl;
	cout<<".3.Tich tich S= 2*......2*n         ."<<endl;
	cout<<".4.Thiet lap tam giac co chieu cao n."<<endl;
	cout<<"....................................."<<endl;
	cout<<"\nplease choose: "; cin>>c;
	switch(c)
	{
		case 1: Th(n); break;
		
		case 2: electric(n); break;
		
		case 3: P(n); break;
		
		case 4: tam(n); break;
		
		default: goto again;
	}
	char k;
	cout<<"Ban co muon nhap lai khong? (Y|N): "; cin>>k;
	if(k=='y'||k=='Y') goto again;
	return 0;
}