#include <iostream>
using namespace std;

class GV{
private:
	char ht[30];
	int t;
	char bc[15];
	char cn[20];
	float bl;
public:
	void nhap(){
		cout<<"Ho & ten: "; cin.getline(ht, 30);
		cout<<"Tuoi: "; cin>>t;
		cin.ignore();
		cout<<"Bang cap cao nhat: "; cin.getline(bc, 15);
		cout<<"Chuyen nganh: "; cin.getline(cn, 20);
		cout<<"Bac luong: "; cin>>bl;
	}
	void xuat(){
		cout<<"Ho & ten: "<<ht<<endl;
		cout<<"Tuoi: "<<t<<endl;
		cout<<"Bang cap cao nhat: "<<bc<<endl;
		cout<<"Chuyen nganh: "<<cn<<endl;
		cout<<"Bac luong: "<<bl<<endl;
	}
	float luong(){
		float lcb;
		return lcb = bl*610;
	}
	char * getcn(){
		return cn;
	}	
};

int main()
{
	int n; 
	GV a[100];
	again:
	cout<<"Moi nha so luong gia vien: "; cin>>n;
	if(n<=0) goto again;
	for(int i=0; i<n; i++){
		cout<<"\nMoi nhap thong tin giao vien thu "<<i+1<<endl;
		cin.ignore();
		a[i].nhap();
	}
	cout<<"\n----Giao vien co luong duoi 2000----"<<endl;
	for(int i=0; i<n; i++){
		if(a[i].luong()<2000) a[i].xuat();
	}
	cout<<"\n--------Danh sach theo ngang--------"<<endl;
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[j].getcn()>a[i].getcn())
			{
				GV tg;
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
		a[i].xuat();
	}
}