#include "ZeroKaata.h"
#include "Hangman.cpp"
#include<bits/stdc++.h>
using namespace std;
class play
{
   public :
   int game1()
   {
       hangman();
       return 0;
   }
   int game2()
   {
       ZeroKaata();
       return 0;
   }

};
int main()
{
    play p;
    int x;
    char ch;
    do
    {
    cout<<"Welcome! \n 1) Hangman \n 2) ZeroKaata \n Choose which game you want to play!\n";
    cin>>x;
    switch(x)
    {
        case 1: p.game1();
                   break;
        case 2: p.game2();
                    break;
        default : cout<<"Wrong choice! Try again!"<<endl;
                      break;            
    }
    cout<<"Do you want to go again?(Y/N)"<<endl;
    cin>>ch;
    } while(ch=='y' || ch=='Y');  
   cout<<"Thanks for playing, hoping to see you again!\n";
   return 0;
}