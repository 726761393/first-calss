#include<iostream>
#include "circle.h"
using namespace std;
int main(){
	int r;
	cin>>r;
	circle a(r);//����뾶r��Բ
	cout<<a.getarea()<<endl;
}