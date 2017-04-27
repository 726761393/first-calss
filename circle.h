#ifndef CIRCLE_H
#define CIRCLE_H
using namespace std;
class circle
{
public:
	circle();//无参构造方法
	circle(int);//有参构造方法
	double getarea();//获取面积值
private:
	int r;//半径
	double area;//面积

};

#endif