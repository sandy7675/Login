#include<iostream>

using namespace std;
int r;
int c;
char turn='X';
int i=1;
/*
void X()
{
	cout<<"player X choose: "<<endl;
}
void O()
{
	cout<<"player O choose: "<<endl;
}
*/
char view[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int choice;
void display()
{
	system("cls");
		cout<<"\t X AND 0 GAME"<<endl;
	cout<<"PLAYER X"<<endl;
	cout<<"PLAYER O"<<endl;
	
	cout<<"\t\t\t" << view[0][0] <<"    |    "<<view[0][1]<<"    |    "<<view[0][2]<<endl; 
    cout<<"\t\t\t-----------------------\n"; 
    cout<<"\t\t\t" << view[1][0] <<"    |    "<<view[1][1]<<"    |    "<<view[1][2]<<endl; 
    cout<<"\t\t\t-----------------------\n"; 
    cout<<"\t\t\t" << view[2][0] <<"    |    "<<view[2][1]<<"    |    "<<view[2][2]<<endl; 
    
}

int play(int i)
{
cout<<"player "<<i<<" ";
cin>>choice; 
i=i+1;
switch(choice)
{
	case 1:
	 r=0; c=0;
		break;
			case 2:
				r=0; c=1;
		break;
			case 3:
				r=0;c=2;
		break;
			case 4:
				r=1; c=0;
		break;
			case 5:
	        r=1; c=1;
		
		break;
			case 6:
         	r=1; c=2;
		
		break;
			case 7:
				r=2; c=0;
	
		break;
			case 8:
	        r=2; c=1;
	
		break;
			case 9:
		r=2;c=2;
		
		break;
		default:
			cout<<"invalid choice";
			
			return 0;
}

if(turn=='X'&& view[r][c]!='X'&& view[r][c]!='O')
{ 
    
	view[r][c]='X';
	turn='O';
}

else if(turn=='O'&& view[r][c]!='X'&& view[r][c]!='O')
{ 
    
 view[r][c]='O';
	turn='X';
	
}
else
{
	cout<<"poition is already filled"; 
}

}

char xwin()
{
	if(view[0][0]=='X'&&view[0][1]=='X'&&view[0][2]=='X')
	{
		return 'X';
	}
	   
	else if(view[1][0]=='X'&&view[1][1]=='X'&&view[1][2]=='X')
	{
		return 'X';
	}
       
	else if(view[2][0]=='X'&&view[2][1]=='X'&&view[2][2]=='X')
	{
		return 'X';
	}


	else if(view[0][0]=='X'&&view[1][0]=='X'&&view[2][0]=='X')
	{
		return 'X';
	}

	
	else if(view[0][2]=='X'&&view[1][2]=='X'&&view[2][2]=='X')
	{
	  return 'X';	
	}


	else if(view[0][3]=='X'&&view[1][3]=='X'&&view[1][3]=='X')
	{
		return 'X';
	}
	
	
	else if(view[0][0]=='X'&&view[1][2]=='X'&&view[2][2]=='X')
	{
	return'X';
	}

	
	
	else if(view[0][3]=='X'&&view[1][2]=='X'&&view[2][0]=='X')
	{
	return 'X';
	}
	
else
{
	return '@';
}
}

char Owin()
{
	if(view[0][0]=='O'&&view[0][1]=='O'&&view[0][2]=='O')
	{
		return 'O';
	}

	
	else if(view[1][0]=='O'&&view[1][1]=='O'&&view[1][2]=='O')
	{
		return 'O';
	}
	
	
	else if(view[2][0]=='O'&&view[2][1]=='O'&&view[2][2]=='O')
	{
			return 'O';
		
	}
	      
	
	else if(view[0][0]=='O'&&view[1][0]=='O'&&view[2][0]=='O')
	{
			return 'O';
	}
	     

	else if(view[0][2]=='O'&&view[1][2]=='O'&&view[2][2]=='O')
	{
			return 'O';
	}
	       

	else if(view[0][3]=='O'&&view[1][3]=='O'&&view[1][3]=='O')
	{
			return 'O';
	}
            
	else if(view[0][0]=='O'&&view[1][2]=='O'&&view[2][2]=='O')
	{
			return 'O';
	}
            
	else if(view[0][3]=='O'&&view[1][2]=='O'&&view[2][0]=='O')
	{
		
			return 'O';
	}
	        
else
{
return '!';
}

}

main()
{ 

for(r=0;r<=3;r++)
{
for(c=0;c<=3;c++)
	{
	display();
    play(i);
	   if(xwin()=='X')
	   {
	   	cout<<"player X wins";
	   	break;
	   }
	   else if(Owin()=='O')
	   {
	   	cout<<"player O wins";
	   }
	   else
	   {
	   	cout<<"draw";
	   }
	   
	} 

	
}
     
}

