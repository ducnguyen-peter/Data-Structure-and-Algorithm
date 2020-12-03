// Duong di cua con chuot trong me cung
// D: xuong duoi; R dich phai
#include <bits/stdc++.h>   
#define MAX 10 
using namespace std;  
int dem =0;
string R="";
//void Solution(int maze[MAX][MAX], int x, int y, int sol[MAX][MA], int N);   

// in mot loi giai
void Result(int sol[MAX][MAX], int N) { 
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) 
            cout<<sol[i][j]<<" ";
        cout<<endl;  
    } 
    cout<<endl;
}   
//kiem tra toa do (x,y) co thuoc me cung
bool isSafe(int maze[MAX][MAX], int x, int y, int N) { 
    // neu (x,y) khong thuoc me cung: false 
    if (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1) 
        return true;   
    return false; 
} 
// ham de dui de qua ra mot nghiem cua bai toan
void Solution(int maze[MAX][MAX], int x, int y, int sol[MAX][MAX], int N) { 
    // neu da den dich
    if (x == N - 1 && y == N - 1) { 
        sol[x][y] = 1; 
        //Result(sol, N); dem++;        
        cout<<R<<endl; //R ="";
    }   
    // neu x, y thuoc me cung
    if (isSafe(maze, x, y, N) == true) { 
        // danh dau da den duoc o x, y 
        sol[x][y] = 1; 
        //dich xuong D: down
        if(isSafe(maze, x+1, y, N)) {
        	R = R +'D';Solution(maze, x + 1, y, sol, N);
        	
		}
		if(isSafe(maze, x, y+1, N)) {
        	R = R +'R';Solution(maze, x , y+1, sol, N);        	
		}
        //neu khong co phep nao dich duoc
        sol[x][y] = 0; //tra lai gia tri quay lui
		if(R.length()!=0) //loai phep dich cuoi cung
			R.erase(R.length()-1) ;                
    }       
}   
//  dua ra cac duong di cua con chuot
void solveMaze(int maze[MAX][MAX], int N) { 
	int sol[MAX][MAX];	
	for(int i=0; i<N; i++)
		for(int j=0; j<N; j++)
			sol[i][j]=0;
    Solution(maze, 0, 0, sol, N);          
}   
// Test Solution 
int main() { 
    int maze[MAX][MAX], N ; 
    cout<<"Nhap N="; cin>>N; 
    for(int i=0; i<N; i++)
    	for(int j=0; j<N; j++) 
    		cin>>maze[i][j];
    solveMaze(maze, N); 
    cout<<dem<<endl;
    return 0; 
} 

