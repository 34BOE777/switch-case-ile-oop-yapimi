#include<iostream>
#include"kup.h"
using namespace std;

kup::kup(){}
kup::kup(float uzunluk){
	this->uzunluk=uzunluk;
}
void kup::setuzunluk(float uzunluk){
	this->uzunluk=uzunluk;
}
float kup::getuzunluk(){
	return uzunluk;
}
float kup::hacim(){
	return uzunluk*uzunluk*uzunluk;
}
void kup::nesneolustur(){
	float a;
	cout<<"Uzunluk girin: "<<endl;
	cin>>a;
	setuzunluk(a);
}
void kup::nesneyazdir(){
cout<<"Kupun kenar uzunlugu "<<getuzunluk()<<"'dir."<<endl;
cout<<"Girmis oldugunuz seklin hacmi "<<hacim()<<"'dir"<<endl;
}