#include<iostream>

using namespace std;

class Devices{
	private: 
		char Brand[10];
		string power;
	
	public:
		void get(){
			cout<<endl;
			cout<<"Enter the the Device Brand: "; cin>>Brand;
			cout<<"Enter the Power: "; cin>>power;
			
		}
		
		void display(){
			cout<<endl<<"The Device Name: "<<Brand<<endl;
			cout<<"The power is: "<<power;
		}
};

int main(){
	Devices s;
	Devices l;
	cout<<"Enter the Details of Smartphone: "<<endl;
	s.get();
	cout<<"Enter the Details of Laptop: "<<endl;
	l.get();
	cout<<"Printing the Details of Smartphone: "<<endl;
	s.display();
	cout<<"Printing the Details of Laptop: "<<endl;
	l.display();
	return 0;
}
