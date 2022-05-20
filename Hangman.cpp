#include<bits/stdc++.h>
using namespace std;
bool compare(string s1, string s2)
{
    if(s1==s2) return true;
    return false;
}
void print(int turns)
{
      switch (turns)
    {  
     case 5:  cout<<"|"<<endl
                         <<"|"<<endl
                         <<"|"<<endl
                         <<"|"<<endl;
                 break;
    case 4: cout<<"| = = ="<<endl
                       <<"|"<<endl
                       <<"|"<<endl
                       <<"|"<<endl;
                 break;
    case 3: cout<<"| = = ="<<endl
                       <<"|     O"<<endl
                       <<"|"<<endl
                       <<"|"<<endl;
                 break;

    case 2: cout<<"| = = ="<<endl
                       <<"|     O"<<endl
                       <<"|     |"<<endl
                       <<"|     |"<<endl;
                 break;
     case 1: cout<<"| = = ="<<endl
                       <<"|     O"<<endl
                       <<"|   / | \\"<<endl
                       <<"|     |"<<endl;
                  break;
    case 0: cout<<"| = = ="<<endl
                       <<"|     O"<<endl
                       <<"|   / | \\"<<endl
                       <<"|     |"<<endl
                       <<"     /  \\ "<<endl;
                    cout<<"YOU HAVE BEEN HANGED\n";
                break;             
      
default:
          break;
      }
}
int hangman()
{
    string guess;
    cout<<"Enter word you want the other player to guess.\n";
    cin>>guess;
   system("CLS");
    string current;
    for(int i = 0; i<guess.length() ; i++) current.push_back('_');
    
     for(int i = 0; i<guess.length() ; i++) cout<<current[i]<<" ";
    
    cout<<endl;
    int turns = 6;
    char ch;
    int big_flag = 0, iflag=0;
    do
    {
        int flag = 0;
        cin>>ch;
        for(int i = 0; guess[i] != '\0' ; i++)
        {
          if(ch == guess[i] || ch-32 == guess[i] || ch+32 == guess[i])
          {
             current[i] = guess[i];
             flag = 1;
          }
        }
        if(flag == 1)
        {
            if(compare(guess,current))
            {
                
                for(int i = 0; i<guess.length() ; i++) cout<<current[i]<<" ";
                cout<<"\n Well done! You have guessed the word "<<guess<<". Congrats!"<<endl;
                big_flag = 1;
                break;
            }
            
            cout<<"Nice, you guessed some correct letters\n";
            for(int i = 0; i<guess.length() ; i++) cout<<current[i]<<" ";

            cout<<"\n";
            
        }
       else
       {
           cout<<"Aww, wrong guess."<<endl;
           turns--;
           print(turns);
       } 
      
    } while (turns!=0 );
    
    if(big_flag == 0) 
    {
        print(turns);
        cout<<"The correct word was "<<guess<<endl;
    }    

    return 0;
}