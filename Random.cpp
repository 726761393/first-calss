#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
class Random{
public:
	virtual void random()=0;
	virtual void display()=0;
	virtual ~Random();
};
class RandomNumber:public Random{
public:
	void random(){
		srand(time(0));
        random1=rand()%10;
        random2=rand()%10;
        random3=rand()%10;
        random4=rand()%10;
	}
	void display(){
		cout<<"random1="<<random1<<endl<<"random2="<<random2<<endl<<"random3="<<random3<<endl<<"random4="<<random4<<endl;
	}
private:
	double random1,random2,random3,random4;
};
class RandomOperation:public Random{
public:
	char s(int a){
		if(a==0)return '+';
		if(a==1)return '-';
		if(a==2)return '*';
		if(a==3)return '/';
		return 0;
	}
	void random(){
		srand(time(0));
        sign1=rand()%4;
        sign2=rand()%4;
        sign3=rand()%4;
	}
	void display(){
		cout<<"sign1="<<s(sign1)<<endl<<"sign2="<<s(sign2)<<endl<<"sign3="<<s(sign3)<<endl;
	}
private:
	int sign1,sign2,sign3;
};
class creatRandom{
public:
	static Random *factory(string ID)
	{
		if(ID=="Number")return new RandomNumber();
        if(ID=="Operation")return new RandomOperation();
        return 0;
	}
};
int main(){
    creatRandom *fy=new creatRandom;
    Random *rn=fy->factory("Number");
    Random *ro=fy->factory("Operation");
    rn->random();
    rn->display();
    ro->random();
    ro->display();
}
