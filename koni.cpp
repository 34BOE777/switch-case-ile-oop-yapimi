#include<iostream>
#include"koni.h"
#define pi 3.14
using namespace std;

koni::koni(){}
koni::koni(float r,float h){
	this->r=r;
	this->h=h;
}
void koni::setr(float r){
	this->r=r;
}
float koni::getr(){
	return r;
}

void koni::seth(float h){
	this->h=h;
}
float koni::geth(){
	return h;
}




float koni::hacim(){
	return (1/3)*pi*r*r*h;
}
void koni::nesneolustur(){
	float a,b;
cout<<"Yarıçap girin:"<<endl;
cin>>a;
setr(a);
cout<<"Boy girin:"<<endl;
cin>>b;
seth(b);

}
void koni::nesneyazdir(){
	cout<<"Koninin yaricapi "<<getr()<<" eni "<<geth()<<"'dir"<<endl;
	cout<<"Girmis oldugunuz seklin hacmi "<<hacim()<<"'dir"<<endl;
	
}