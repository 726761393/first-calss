#include<iostream>
#include "circle.h"
using namespace std;
int main(){
	int r;
	cin>>r;
	circle a(r);
	cout<<a.getarea()<<endl;
}