/*
#include"Count_two.h"
int main(){
	int i=0;
	char a[10]="in.txt";

	double answer;
	srand(time(0));
	Interaction jawell;
	Formula formula;
	Mycount mcount;
	jawell.readFile(a);
	jawell.scan();
	while(i<jawell.getqnum())
	{
		formula.randomNumber();
		formula.randomOperation();
		while(!formula.generateExpression(jawell,mcount)){
			formula.randomNumber();
		    formula.randomOperation();
		}
		cin>>answer;
		jawell.judgeanswer(answer);
		i++;
	}
	jawell.print();
	jawell.writeFile("out.txt");
	return 0;
}
*/
