#ifndef COUNT_H
#define COUNT_H
using namespace std;
#include<iostream>
#include<ctime>
#include <sstream>
#include<fstream>
#include<string>
class calculate{
public:
	calculate();
	ofstream out;
    double random1,random2,random3,random4,answer;
	double rightresult;
    int sign1,sign2,sign3,temp,rightnum,si;
    string url,in_url,outfile,s[300];
    int language;
    void readFile();//��ȡ�û�Ҫ�����Ŀ����(��ע���������)
    void scan();//�ú����������û���������ȡ��������
    void randomNumber();//���������������
    void randomOperation();//����������������
    bool generateExpression();//������������ʽ
    double calculateResult();//���ڼ������ɵ�����ʽ�Ľ��
	void judgeanswer();//�����ж��û������Ƿ���ȷ
    void writeFile();//�����ս��д���ļ���д�����ݰ������û��������Ŀ����ÿ�����ɵı��ʽ����ȷ�𰸡��û�����Ĵ𰸣����浽�������еڶ�������ָ����·����(��ע���������)
    void print();//��ͳ�ƽ��������û�
	char sign(int a);
    int questionnum;
};
#endif