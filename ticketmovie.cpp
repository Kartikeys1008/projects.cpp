#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	int seatnum;
	char seattype;
	string name,movie,time;
	cout<<"*****WELCOME TO OHM CINEMA*****"<<endl;
	cout<<"Enter your name :"<<endl;
    getline(cin,name);
	cout<<"Enter your movie name[3 IDIOT | TARE ZAMEEN PAR | SHOLEY] :"<<endl; 
	getline(cin,movie);
	cout<<"Select your time[9am-12pm/12pm-3pm/3pm-6pm/6pm-9pm/9pm-12am]"<<endl;
	getline(cin,time);
	cout<<"Select your seat type[A|B|C]: "<<endl;
	cin>>seattype;
	if(seattype=='A')
	{
	cout<<"price->Rs.100"<<endl;
	cout<<"Select your seat no. out of the following"<<endl;
	cout<<"  01 02 03 04   05 06 07 08 09 10 11 12 13 14   15 16 17 18  "<<endl;
	cout<<"  19 20 21 22   23 24 25 26 27 28 29 30 31 32   33 34 35 36  "<<endl;
	cout<<"  37 38 39 40   41 42 43 44 45 46 47 48 49 50   51 52 53 54  "<<endl;
	cout<<"  55 56 57 58   59 60 61 62 63 64 65 66 67 68   69 70 71 72  "<<endl;
	cout<<"  73 74 75 76   77 78 79 80 81 82 83 84 85 86   87 88 89 90  "<<endl;
    }
    else if(seattype=='B')
    {
    	cout<<"price->200"<<endl;	
	cout<<"Select your seat no. out of the following"<<endl;
	cout<<"  01 02 03 04   05 06 07 08 09 10 11 12 13 14   15 16 17 18  "<<endl;
	cout<<"  19 20 21 22   23 24 25 26 27 28 29 30 31 32   33 34 35 36  "<<endl;
	cout<<"  37 38 39 40   41 42 43 44 45 46 47 48 49 50   51 52 53 54  "<<endl;
	}
	else if(seattype=='C')
	{
		cout<<"price->300"<<endl;	
	cout<<"Select your seat no. out of the following"<<endl;
	cout<<"  01 02 03 04   05 06 07 08 09 10 11 12 13 14   15 16 17 18  "<<endl;
	cout<<"  19 20 21 22   23 24 25 26 27 28 29 30 31 32   33 34 35 36  "<<endl;	
	}
	else
	{
		cout<<"ERROR"<<endl;
	};
	cout<<"SEAT NUMBER--> ";
	cin>>seatnum;
	cout<<"****ticket is booked****";
	ofstream myfile("ticket.txt");
	myfile<<"  welcome in OHM cinema    "<<endl;
	myfile<<"  PERSON NAME:- "<<name<<endl;
	myfile<<"  MOVIE NAME:- "<<movie<<endl;
	myfile<<"  MOVIE TIME:- "<<time<<endl;
	myfile<<"  SEAT TYPE:- "<<seattype<<endl;
	myfile<<"  SEAT NUMBER:- "<<seatnum<<endl;
	myfile.close();
	string text;
	ifstream readfile("ticket.txt");
	while(getline(readfile,text)){
		cout<<text;
	}
	readfile.close();
}
