#include<iostream>
#include "circle.h"
using namespace std;
int main(){
	int r;
	cin>>r;
	circle a(r);//¹¹Ôì°ë¾¶rµÄÔ²
	cout<<a.getarea()<<endl;
}