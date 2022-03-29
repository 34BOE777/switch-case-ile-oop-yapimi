#include<iostream>
#include"prizma.h"
using namespace std;

prizma::prizma(){}
prizma::prizma(float en,float boy, float uzunluk){
	this->uzunluk=uzunluk;
	this->en=en;
	this->boy=boy;
}
void prizma::setuzunluk(float uzunluk){
	this->uzunluk=uzunluk;
}
float prizma::getuzunluk(){
	return uzunluk;
}

void prizma::seten(float en){
	this->en=en;
}
float prizma::getboy(){
	return boy;
}



void prizma::setboy(float boy){
	this->boy=boy;
}
float prizma::geten(){
	return en;
}

float prizma::hacim(){
	return uzunluk*en*boy;
}
void prizma::nesneolustur(){
	float a,b,c;
	cout<<"Uzunluk girin:"<<endl;
	cin>>a;
	cout<<"En girin:"<<endl;
	cin>>b;
	cout<<"Boy girin:"<<endl;
	cin>>c;
	setuzunluk(a);
	seten(b);
	setboy(c);

}
void prizma::nesneyazdir(){
	cout<<"Girmis oldugunuz seklin hacmi "<<hacim()<<"'dir"<<endl;
}