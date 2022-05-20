#include<bits/stdc++.h>
using namespace std;
bool row(char grid[3][3])
{
	for (int i = 0; i < 3; i++) 
    {
		if (grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2])
			return true;
	}
	return false;
}
bool col(char grid[3][3])
{
	for (int i = 0; i < 3; i++) 
    {
		if (grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i])
			return true;
	}
	return false;
}
bool diagonal(char grid[3][3])
{
	if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2])
		return true;

	if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0])
		return true;

	return false;
}
bool IsOver(char grid[3][3])
{
	return (row(grid) || col(grid) || diagonal(grid));
}
bool IsDraw(char grid[3][3])
{
    for(int i = 0; i<3 ; i++)
    {
        for(int j = 0; j<3 ; j++)
        {
            if((grid[i][j] != 'O' && grid[i][j] != 'X')  && !IsOver(grid)) return false;
        }
        
    }
    return true;
}
int ZeroKaata()
{
    
     char grid[3][3] = {{'a', 'b' ,'c' },{ 'd','e','f'},{'g','h','i'}};
      char ch;
      int p = 2,flag = 0;
     cout<<"Player 1 : X \n Player 2: O \n Player 1 goes first\n";
     do
     {
          cout<<"\t\t\t"<<grid[0][0]<< " | "<<grid[0][1]<<" | "<<grid[0][2]<<endl;
	cout<<"\t\t\t------------\n";
	cout<<"\t\t\t"<<grid[1][0]<< " | "<<grid[1][1]<<" | "<<grid[1][2]<<endl;
	cout<<"\t\t\t------------\n";
	cout<<"\t\t\t"<<grid[2][0]<< " | "<<grid[2][1]<<" | "<<grid[2][2]<<endl;
        if(flag==0)
        {    
            if(p==2) p=1;
             else  p = 2;
        }
        else flag = 0;
        cout<<"\nPlease choose the cell you want to occupy, player "<<p<<endl;
        cin>>ch;     
        switch(ch)
        {
            case 'a':  if(grid[0][0] == 'O' || grid[0][0] == 'X') 
                           {
                               cout<<"\nCell is already occupied! Try Again!\n";
                               flag=1;
                           }
                           else
                           {
                           if(p==1) grid[0][0] = 'X';
                           else grid[0][0] = 'O';
                           }
                           break;

            case 'b': if(grid[0][1] == 'O' || grid[0][1] == 'X') 
                           {
                               cout<<"\nCell is already occupied! Try Again!\n";
                               flag=1;
                           }
                           else
                           {
                               if(p==1) grid[0][1] = 'X';
                               else grid[0][1] = 'O';
                           }
                           break;
            case 'c': if(grid[0][2] == 'O' || grid[0][2] == 'X') 
                           {
                               cout<<"\nCell is already occupied! Try Again!\n";
                               flag=1;    
                           }
                           else
                           {
                           if(p==1) grid[0][2] = 'X';
                           else grid[0][2] = 'O';
                           }
                           break;
            case 'd': if(grid[1][0] == 'O' || grid[1][0] == 'X') 
                           {
                               cout<<"\nCell is already occupied! Try Again!\n";
                              flag=1;    
                           }
                           else
                           {
                           if(p==1) grid[1][0] = 'X';
                           else grid[1][0] = 'O';
                           }
                           break;
            case 'e': if(grid[1][1] == 'O' || grid[1][1] == 'X') 
                           {
                               cout<<"\nCell is already occupied! Try Again!\n";
                               flag=1;   
                           }
                           else
                           {
                           if(p==1) grid[1][1] = 'X';
                           else grid[1][1] = 'O';
                           }
                           break;
            case 'f': if(grid[1][2] == 'O' || grid[1][2] == 'X') 
                           {
                               cout<<"\nCell is already occupied! Try Again!\n";
                               flag = 1;   
                           }
                           else
                           {
                           if(p==1) grid[1][2] = 'X';
                           else grid[1][2] = 'O';
                           }
                           break;
            case 'g': if(grid[2][0] == 'O' || grid[2][0] == 'X') 
                           {
                               cout<<"\nCell is already occupied! Try Again!\n";
                              flag=1;   
                           }
                           else
                           {
                           if(p==1) grid[2][0] = 'X';
                           else grid[2][0] = 'O';
                           }
                           break;
            case 'h': if(grid[2][1] == 'O' || grid[2][1] == 'X') 
                           {
                               cout<<"\nCell is already occupied! Try Again!\n";
                               flag=1;   
                           }
                           else
                           {
                           if(p==1) grid[2][1] = 'X';
                           else grid[2][1] = 'O';
                           }
                           break;
            case 'i': if(grid[2][2] == 'O' || grid[2][2] == 'X') 
                           {
                               cout<<"\nCell is already occupied! Try Again!\n";
                               flag=1;   
                           }
                           else
                           {
                           if(p==1) grid[2][2] = 'X';
                           else grid[2][2] = 'O';
                           }
                           break;

             default: cout<<"Wrong choice! Try again\n";
                            flag=1;
                           break;
        }
     
     
     }while(!IsOver(grid) && !IsDraw(grid));     

     if(IsOver(grid)) cout<<"Congrats Player "<<p<<endl;
     else cout<<"Draw!"<<endl;  
    return 0;
}