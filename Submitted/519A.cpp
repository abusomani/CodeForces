#include <bits/stdc++.h>
using namespace std;

int main()
{
	char board[8][8],c;
	
	int white = 0 , black = 0;
	
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			cin>>board[i][j];
			c = board[i][j];
			
			if(c >='A' and c <='Z')
			{
				if( c == 'Q') white  += 9;
				else if(c == 'R') white += 5;
				else if(c == 'B') white += 3;
				else if(c == 'N') white += 3;
				else if(c == 'P') white += 1;
			}
			
			else
			{
				if( c == 'q') black  += 9;
				else if(c == 'r') black += 5;
				else if(c == 'b') black += 3;
				else if(c == 'n') black += 3;
				else if(c == 'p') black += 1;
			}
		}	
	}
	
	if(white == black)	cout<<"Draw";
	else if(white > black)cout<<"White";
	else cout<<"Black";
	
}
