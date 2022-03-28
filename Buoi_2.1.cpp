#include <iostream>

using namespace std;

typedef struct{
	int ngay;
	int nam;
	int thang;	
}NS;

class KH{	
private:
	char ht[30];
	NS sn;
	char cmt[10];
	char k[30];
public:
	void nhap(){
		cout<<"\nHo va ten khach hang: "; cin.getline(ht, 30);
		cout<<"\nNgay thang nam sinh"<<endl;
		cout<<"Ngay sinh: ";           cin>>sn.ngay;
		cout<<"Thang sinh: ";		 cin>>sn.thang;
		cout<<"Nam sinh: ";		 cin>>sn.nam;
		cin.ignore();
		cout<<"\nSo chung minh thu: "; cin.getline(cmt, 10);
		cout<<"\nHo khau thuong chu: "; cin.getline(k, 30);
	}
	
	void xuat(){
		cout<<"Ho & Ten: "<<ht<<endl;
		cout<<"Ngay thang nam sinh: "<<sn.ngay<<"/"
		                             <<sn.thang<<"/"
		                             <<sn.nam<<endl;
		cout<<"So chung minh thu: "<<cmt<<endl;
		cout<<"Ho khau thuong chu: "<<k<<endl;   
	}
	char * getht()
	{
		return ht;
	}
	int getsn()
	{
		return sn.thang;
	}
};

int main()
{
	int n;
	cout<<"Moi nhap so luong khach hang: "; cin>>n;
	KH a[n];
	for(int i=0; i<n; i++){
		cout<<"Moi nhap thong tin khach hang thu "<<i+1<<endl;
		cin.ignore();
		a[i].nhap();
		cout<<"------------------------------------------------"<<endl;
	}
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[j].getht()>a[i].getht())
			{
				KH tg;
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
	cout<<"------------------------------------------------"<<endl;
	for(int i=0; i<n; i++){
		cout<<"\nThong tin cua khach hang thu "<<i+1<<endl;
		a[i].xuat();
		cout<<"------------------------------------------------"<<endl;
	}
	cout<<"Thong tin khach hang sinh thang 12"<<endl;
	for(int i=0; i<n; i++){
		if(a[i].getsn()==12) a[i].xuat();
	}
	return 0;
		
}