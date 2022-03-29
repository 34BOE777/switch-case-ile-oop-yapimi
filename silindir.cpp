#include<iostream>
#include"silindir.h"
#define pi 3.14
using namespace std;

silindir::silindir(){}
silindir::silindir(float r,float h){
	this->r=r;
	this->h=h;
}
void silindir::setr(float r){
	this->r=r;
}
float silindir::getr(){
	return r;
}

void silindir::seth(float h){
	this->h=h;
}
float silindir::geth(){
	return h;
}




float silindir::hacim(){
	return pi*r*r*h;
}
void silindir::nesneolustur(){
float a,b;
cout<<"Yarıçap girin:"<<endl;
cin>>a;
setr(a);
cout<<"Boy girin:"<<endl;
cin>>b;
seth(b);
}
void silindir::nesneyazdir(){
	cout<<"Silindirin yaricapi "<<getr()<<" eni "<<geth()<<"'dir"<<endl;
	cout<<"Girmis oldugunuz seklin hacmi "<<hacim()<<"'dir"<<endl;
	
}