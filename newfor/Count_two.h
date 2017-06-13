#ifndef COUNT_H
#define COUNT_H
using namespace std;
#include<iostream>
#include<ctime>
#include<stdio.h>
#include<stdlib.h>
#include <sstream>
#include<fstream>
#include<string>
//������
class Formula;
class Mycount;
class Interaction{
public:
    void scan();//�ú����������û���������ȡ��������
    void readFile(char *);//��ȡ�û�Ҫ�����Ŀ����
    void judgeanswer(double answer);//�����ж��û������Ƿ���ȷ
    void writeFile(char *);//�����ս��д���ļ���д�����ݰ������û��������Ŀ����ÿ�����ɵı��ʽ����ȷ�𰸡��û�����Ĵ𰸣����浽�������еڶ�������ָ����·����
    void print();//��ͳ�ƽ��������û�
	int getqnum();
	friend class Formula;
	Interaction();
    string out;
    double rightanser;int rightnum;
private:
    int questionnum,si,language;
    string url,s[50];//in_url,outfile;
};
//��ʽ��
class Formula{
public:
    void randomNumber();//���������������
    void randomOperation();//����������������
	bool generateExpression(Interaction &,Mycount &);//������������ʽ
	char sign(int);//ת�������
private:
    double random1,random2,random3,random4;//�������
    int sign1,sign2,sign3;//��������
	double rightresult;
};
//������
class Mycount{
public:
    double qcount(double,double,int);//���ڶ�������
    double calculateResult(double,double,double,double,int,int,int);//���ڼ������ɵ�����ʽ�Ľ��
private:
    double answer;
};
#endif
