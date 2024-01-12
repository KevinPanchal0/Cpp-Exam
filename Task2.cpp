#include<iostream>

using namespace std;

class Car{
	private: 
		char model[20];
		int year;
		string speed;
	
	public:
		void get(){
			cout<<"Entering All the deatils: "<<endl<<endl;
			cout<<"Enter the Model of Car: "; cin>>model;
			cout<<"Enter the Car Year: "; cin>>year;
			cout<<"Enter the Speed of Car: "; cin>>speed;
			
		}
		
		void display(){
			cout<<endl<<endl<<"Printing All the deatils: "<<endl;
			cout<<"the Model of Car "<<model<<endl;
			cout<<"the Car Year: "<<year<<endl;
			cout<<"The speed of Car: "<<speed<<endl;
		}
};

int main(){
	Car c;
	
	c.get();
	c.display();
	return 0;
}
