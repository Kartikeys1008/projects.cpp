#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std; 

int main()
{
    END:
    srand(time(0));
    int com = (rand() % 2);
    int num;
    string user;
    
    cout<<"\n\n\nSELECT(SNAKE|WATER|GUN): "<<endl;
    cin>> user ;
    if (user == "SNAKE")
    {
        num = 0;
    }
    else if (user == "WATER")
    {
        num = 1;
    }
    else if (user == "GUN")
    {
        num = 2;
    }
    else
    {
        cout<<"INVALID INPUT!!!";
    }
    
    if (com == 0)
    {
        cout<<"COMPUTER have selected SNAKE!!\n";
    }
    else if (com == 1)
    {
        cout<<"COMPUTER have selected WATER!!\n";
    }
    else
    {
        cout<<"COMPUTER have selected GUN!!\n";
    }
    if (num == com)
    {
        cout<<"YOUR GAME IS DRAW";
    }
    else if (num == 0 && com == 1 || num == 1 && com == 2 || num == 2 && com == 0)
    {
        cout<<"YEAAA YOU WON!!";
    }
    else if (num == 1 && com == 0 || num == 2 && com == 1 || num == 0 && com == 2)
    {
        cout<<"AWWWW YOU LOSE!!";
    }
    else
    {
        cout<<"SOMETHING WENT WRONG";
    }
    goto END;

    return 0;
}