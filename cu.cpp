#include<iostream>
#include"kup.h"
#include"prizma.h"
#include"silindir.h"
#include"koni.h"
#include"kure.h"
using namespace std;
int main()
{
	int a;
	cin>>a;
	kup k1;
	prizma p1;
	silindir s1;
	koni k2;
	kure k3;
	switch(a){
		case 1:
		{
			k1.nesneolustur();
			k1.nesneyazdir();
		}
		case 2:
		{
			p1.nesneolustur();
			p1.nesneyazdir();

		}
		case 3:{
			s1.nesneolustur();
			s1.nesneyazdir();
		} 
		case 4:
		{
			k2.nesneolustur();
			k2.nesneyazdir();
		}
		case 5:
		{
			k3.nesneolustur();
			k3.nesneyazdir();
		}

	}


	return 0;
}
