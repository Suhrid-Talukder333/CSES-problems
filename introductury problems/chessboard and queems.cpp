
#include<iostream>
using namespace std;
int cnt=0;

bool canPlace(char board[][100],int row,int col,int n){

	if(board[row][col]=='*')
	{
		return false;
	}
    for(int i=0;i<n;i++){
        if(board[row][i]=='Q'){
            return false;
        }
    }
    for(int i=0;i<n;i++){
        if(board[i][col]=='Q'){
            return false;
        }
    }
    int i=row,j=col;
    while(i>=0&&j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i--;
        j--;
    }
    i=row,j=col;
    while(i>=0 && j<n){
        if(board[i][j]=='Q'){
            return false;
        }
        i--;
        j++;
    }

    return true;
}



bool solveNQueen(char board[][100],int n,int row){
    if(row==n){
			
			 cnt++;
        
        return false;
    }

   

    for(int pos=0;pos<n;pos++){

            if(canPlace(board,row,pos,n)){
                    board[row][pos]='Q';

                    bool agliQueenRakhPayeKya = solveNQueen(board,n,row+1);
                    if(agliQueenRakhPayeKya==true){
                        return true;
                    }

                    board[row][pos]='.';
            }

    }
  
    return false;
}

int main(){

    char board[100][100];
    for(int x=0;x<8;x++){
            for(int y=0;y<8;y++){
               cin>>board[x][y];
            }

        }
    solveNQueen(board,8,0);
	cout<<cnt;

return 0;
}


