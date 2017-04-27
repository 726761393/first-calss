#include<iostream>
#include "circle.h"
#define PI 3.1415926
using namespace std;
circle::circle()
{
	circle::r=1;
	circle::area=PI;
}
circle::circle(int r)
{
	circle::r=r;
	circle::area=PI*r*r;
}
double circle::getarea(){
	return circle::area;
}