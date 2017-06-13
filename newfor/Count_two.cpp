#include "Count_two.h"
using namespace std;
Interaction::Interaction(){
	rightnum=0;
	si=0;
	language=0;
	si=0;rightnum=0;
	rightanser=0;questionnum=0;
	url="language.txt";
	//in_url="in.txt";
	//outfile="out.txt";
}
void Interaction::readFile(char *in_url){
	string temp,t;
    ifstream p;
    p.open(in_url);
	getline(p,temp);
	stringstream ss;
	ss<<temp;
	ss>>questionnum;
}
int Interaction::getqnum(){
	return questionnum;
}
void Interaction::scan(){
	int i=0;
	string temp,t;
	char te[10];
    ifstream p;
    p.open(url.c_str());
    while(getline(p,temp))
    {
	    if(i<6)
		{
		    cout<<temp<<endl;
			s[si]=temp;si++;
		}
	    i++;
    }
	cin>>language;
	sprintf(te,"%d",language);t=te;
	s[si]=t;si++;
}

void Formula::randomNumber(){
	random1=rand()%10;
    random2=rand()%10;
    random3=rand()%10;
    random4=rand()%10;
}
void Formula::randomOperation(){
	sign1=rand()%6;
    sign2=rand()%6;
    sign3=rand()%6;
}

bool Formula::generateExpression(Interaction &t,Mycount &c){
	rightresult=c.calculateResult( random1 , random2, random3, random4, sign1, sign2, sign3);
	t.rightanser=rightresult;
	while(rightresult>10000||rightresult<0){
    return false;
	}
    char rm1[10],rm2[10],rm3[10],rm4[10];
	string r1,r2,r3,r4,stemp;
	sprintf(rm1,"%.0lf",random1);sprintf(rm2,"%.0lf",random2);sprintf(rm3,"%.0lf",random3);sprintf(rm4,"%.0lf",random4);
	r1=rm1;r2=rm2;r3=rm3;r4=rm4;
    if(sign1>3&&sign2<=3&&sign3<=3){
		cout<<"("<<random1 <<sign(sign1) <<random2<<")"<<sign(sign2) <<random3 <<sign(sign3)<<random4<<"=?"<<endl;
		stemp="("+r1+sign(sign1)+r2+")"+sign(sign2)+r3+sign(sign3)+r4+"=?";
         t.out=stemp; t.si++;
		}
    else if(sign1>3&&sign2>3&&sign3<=3){
		cout<<"("<<random1 <<sign(sign1) <<random2 <<sign(sign2) <<random3 <<")"<<sign(sign3)<<random4<<"=?"<<endl;
		stemp="("+r1+sign(sign1)+r2+sign(sign2)+r3 +")"+sign(sign3)+r4+"=?";
         t.out=stemp;t.si++;
	}
    else if(sign1>3&&sign2<=3&&sign3>3){
		cout<<"("<<random1 <<sign(sign1) <<random2<<")" <<sign(sign2) <<"("<<random3 <<sign(sign3)<<random4<<")"<<"=?"<<endl;
		stemp="("+r1 +sign(sign1) +r2+")"+sign(sign2)+"("+r3 +sign(sign3)+r4+")"+"=?";
         t.out=stemp;t.si++;
	}
    else if(sign1<=3&&sign2>3&&sign3<=3){
		cout<<random1 <<sign(sign1) <<"("<<random2 <<sign(sign2) <<random3<<")" <<sign(sign3)<<random4<<"=?"<<endl;
		stemp=r1 +sign(sign1) +"("+r2 +sign(sign2) +r3+")" +sign(sign3)+r4+"=?";
         t.out=stemp;t.si++;
	}
    else if(sign1<=3&&sign2>3&&sign3>3){
		cout<<random1 <<sign(sign1) <<"("<<random2 <<sign(sign2) <<random3 <<sign(sign3)<<random4<<")"<<"=?"<<endl;
		stemp=r1 +sign(sign1) +"("+r2 +sign(sign2) +r3 +sign(sign3)+r4+")"+"=?";
         t.out=stemp;t.si++;
	}
    else if(sign1<=3&&sign2<=3&&sign3>3){
		cout<<random1 <<sign(sign1) <<random2 <<sign(sign2) <<"("<<random3 <<sign(sign3)<<random4<<")"<<"=?"<<endl;
		stemp=r1 +sign(sign1) +r2 +sign(sign2) +"("+r3 +sign(sign3)+r4+")"+"=?";
         t.out=stemp;t.si++;
	}
    else{
		cout<<random1 <<sign(sign1) <<random2 <<sign(sign2) <<random3 <<sign(sign3)<<random4<<"=?"<<endl;
		stemp=r1 +sign(sign1) +r2 +sign(sign2) +r3 +sign(sign3)+r4+"=?";
         t.out=stemp;t.si++;
	}
	return true;
}
char Formula::sign(int a){
    char sign;
    if(a==0)
    return sign='+';
    else if(a==1)
    return sign='-';
    else if(a==2)
    return sign='*';
    else if(a==3)
    return sign='/';
    else if(a==4)
    return sign='+';
    else if(a==5)
    return sign='-';
    return 0;
}
double Mycount::calculateResult(double random1,double random2,double random3,double random4,int sign1,int sign2,int sign3){
    double r1[6],r2[6],r[6]={random1,random2,random3,random4};
    int rlen1=0,rlen2=0,s1[5],s2[5],slen1=0,slen2=0,s[5]={sign1,sign2,sign3};
    r1[rlen1++]=r[0];
    for(int i=0;i<3;i++){
        r1[rlen1++]=r[i+1];
        if(s[i]>=4){rlen1-=2;r1[rlen1]=qcount(r1[rlen1],r1[rlen1+1] ,s[i]);rlen1++;}
        else s1[slen1++]=s[i];}
    r2[rlen2++]=r1[0];
    for(int i=0;i<slen1;i++){
        r2[rlen2++]=r1[i+1];
        if(s1[i]>=2){rlen2-=2;r2[rlen2]=qcount(r2[rlen2], r2[rlen2+1], s1[i]);rlen2++;}
        else s2[slen2++]=s1[i];}
    for(int i=0;i<slen2;i++){
        r2[i+1]=qcount(r2[i], r2[i+1], s2[i]);}
    return r2[slen2];
}
double Mycount::qcount(double x,double y,int sign){
switch (sign)
{
case 0:return x+y;
break;
case 1:return x-y;
break;
case 2:return x*y;
break;
case 3:return x/y;
break;
case 4:return x+y;//( + )
break;
case 5:return x-y;//( - )
break;
default:
break;
}
return 0;
}
void Interaction::judgeanswer(double answer){
	int i=1;
	string temp,t;
	char te[10];
	sprintf(te,"%.0lf",answer);
	t=te;
	s[si]=t;si++;
	sprintf(te,"%.3lf",rightanser);
	t=te;
    ifstream p;
    p.open(url.c_str());
	if(answer==rightanser){rightnum++;
	while(getline(p,temp))
    {
	    if(i==9+5*(language-1))
		{
		    cout<<temp<<endl;
			s[si]=temp;si++;
		}
	    i++;
	}
	}else{
		while(getline(p,temp))
    {
	    if(i==10+5*(language-1))
		{
			temp+=t;
		    cout<<temp<<endl;
			s[si]=temp;si++;
		}
	    i++;
	}
	}

}
void Interaction::writeFile(char *outfile){
	int i;
	ofstream out(outfile);
	for(i=0;i<si;i++)
		out<<s[i]<<endl;
}
void Interaction::print(){
	int i=1;
	string temp,t;
	char te[10];
	sprintf(te,"%d",rightnum);t=te;
	ifstream p;
    p.open(url.c_str());
	
	while(getline(p,temp))
    {
	    if(i==11+5*(language-1))
		{
			temp+=t;
		    cout<<temp<<endl;
			s[si]=temp;si++;
		}
	    i++;
	}

}
