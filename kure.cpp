#include<iostream>
#include"kure.h"
#define pi 3.14
using namespace std;

kure::kure(){}
kure::kure(float r){
	this->r=r;
}
void kure::setr(float r){
	this->r=r;
}
float kure::getr(){
	return r;
}

float kure::hacim(){
	return (4/3)*pi*r*r*r;
}
void kure::nesneolustur(){
float a;
	cout<<"Yarıçap girin: "<<endl;
	cin>>a;
	setr(a);
}
void kure::nesneyazdir(){
	cout<<"Kurenin yaricapi "<<getr()<<"'dir."<<endl;
	cout<<"Girmis oldugunuz seklin hacmi "<<hacim()<<"'dir"<<endl;

}