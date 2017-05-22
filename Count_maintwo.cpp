#include"Count_two.h"
int main(int argc, char *argv[]){
	int i=0;
	double answer;
	srand(time(0));
	Interaction jawell;
	Formula formula;
	Mycount mcount;
	jawell.readFile(argv[1]);
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
	jawell.writeFile(argv[2]);
	return 0;
}
