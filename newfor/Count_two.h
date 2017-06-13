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
//交互类
class Formula;
class Mycount;
class Interaction{
public:
    void scan();//该函数用于与用户交互，获取输入数据
    void readFile(char *);//读取用户要求的题目数量
    void judgeanswer(double answer);//用于判断用户答题是否正确
    void writeFile(char *);//将最终结果写入文件，写入内容包括：用户输入的题目数，每个生成的表达式、正确答案、用户输入的答案，保存到命令行中第二个参数指定的路径。
    void print();//将统计结果输出给用户
	int getqnum();
	friend class Formula;
	Interaction();
    string out;
    double rightanser;int rightnum;
private:
    int questionnum,si,language;
    string url,s[50];//in_url,outfile;
};
//算式类
class Formula{
public:
    void randomNumber();//用于随机生成数字
    void randomOperation();//用于随机生成运算符
	bool generateExpression(Interaction &,Mycount &);//用于生成运算式
	char sign(int);//转换运算符
private:
    double random1,random2,random3,random4;//随机数字
    int sign1,sign2,sign3;//随机运算符
	double rightresult;
};
//计算类
class Mycount{
public:
    double qcount(double,double,int);//用于二则运算
    double calculateResult(double,double,double,double,int,int,int);//用于计算生成的运算式的结果
private:
    double answer;
};
#endif
