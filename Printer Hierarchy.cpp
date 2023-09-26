#include<iostream>
using namespace std;
//	Design a hierarchy of computer printers. Use multiple inheritance in your hierarchy. 
//	Also use friend functions and classes in your program.

class Printer{
	int pages;
	int price;
	
	public:
		Printer()
		{
			cout<<"Printer has started.."<<endl;	
		}
		Printer(int pricedata, int pagedata) : price(pricedata), pages(pagedata){
		cout<<"total price for "<<pages<<" is "<<price<<endl;		
		}
};

class LaserjetPrinter : public Printer{
	int speed, cost;
	public:
		LaserjetPrinter(){	
		}
		LaserjetPrinter(int speedData, int costData) : speed(speedData), cost(costData){
			cout<<"The speed and cost with Laser is: "<<speed<<" "<<cost<<endl;
		}
};

class InkjetPrinter : public Printer {
	int time, tanksize;
	public: 
		InkjetPrinter(){
		}
		InkjetPrinter(int timedata, int sizedata) :  time(timedata), tanksize(sizedata)  {
			cout<<"The time taken and ink required was: "<<time<<" "<<tanksize<<endl;
		}
	
};


int main()
{
	InkjetPrinter obj1(4,7);
	
}


