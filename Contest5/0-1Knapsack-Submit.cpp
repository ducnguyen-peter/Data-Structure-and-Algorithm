// 0-1 Knapsack problem
#include <bits/stdc++.h> 
#define MAX 1001
using namespace std; 
//Solution 1: Submit Fail
int Solution1(int W, int wt[], int val[], int n) {  
	//W: trong luong tui; n: so luong do vat
	//wt[], val[]: vector trong luong va gia tri su dung cac do vat; 	
	// Bai toan co so: 
	if (n == 0 || W == 0)  
    	return 0;    
	//neu trong luong do vat thu n lon hon trong luong tui
	if (wt[n-1] > W)  
		//do vat thu n khong duoc dua vao tui
    	return Solution1(W, wt, val, n-1);    
	// Giai bai toan theo hai truong hop: 
	// (1) dua duoc do vat thu n vao tui 
	// (2) khong dua duoc do vat thu n vao tui 
	else return max( val[n-1] + Solution1(W-wt[n-1], wt, val, n-1),  
                    Solution1(W, wt, val, n-1) );  
}     
//Solution2: qui hoach dong (fail)
int Solution2(int W, int wt[], int val[], int n) { 
   	int i, w; int **K;
   	K = new int*[n+1]; //cap phat mien nho cho n+1 con tro int 
   	// cap phat  mien nho cho n+1 con tro
    for (i = 0; i <=n; i++)  
        K[i] = new int[W + 1];          	
	//Buoc co so: giai bai toan voi so luong do vat la 0
	for(w=0; w<=W; i++)  //dien hang dau tien la so 0
		K[0][w]=0;   
   	//Buoc truy hoi: xay dung bang phuong an cua bai toan
   for (i = 1; i <= n; i++) { //duyet tren tap do vat
       for (w = 0; w <= W; w++) { //duyet tren tap trong luong do vat
           if (i==0 || w==0) //neu so 
               K[i][w] = 0; 
           else if (wt[i-1] <= w) //neu chon duoc do vat thu i
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]); 
           else //neu khong chon duoc do vat thu i
                 K[i][w] = K[i-1][w]; 
       } 
   }   
   delete K;
   return K[n][W]; 
} 
//Solution 3: OK
int Solution3(int W, int wt[], int val[], int i, int** dp) { 
    // bai toan co so
    if (i < 0) 
        return 0; 
    if (dp[i][W] != -1) 
        return dp[i][W];   
    if (wt[i] > W) {   
        // tinh dp[i][w] truoc khi return
        dp[i][W] = Solution3(W, wt, val, i - 1, dp); 
        return dp[i][W]; 
    } 
    else {   
        // tinh dp[i][w] truoc khi return 
        dp[i][W] = max(val[i] + Solution3(W - wt[i], wt, val, i - 1, dp), 
                       Solution3(W, wt, val, i - 1, dp));           
        return dp[i][W]; 
    } 
}   
int knapSack(int W, int wt[], int val[], int n) { 
    int** dp; // su dung con tro tro den con tro
    dp = new int*[n]; //cap phat mien nho cho n con tro  
    // cap phat  mien nho cho n con tro
    for (int i = 0; i < n; i++)  
        dp[i] = new int[W + 1];       
    // Dien vao bang gia tri -1 
    for (int i = 0; i < n; i++)  
        for (int j = 0; j < W + 1; j++)  
            dp[i][j] = -1; 
    return Solution3(W, wt, val, n-1, dp); 
}
int main() { 
	int val[MAX], wt[MAX], n, W, T; cin>>T;
	while(T--) {
		cin>>n>>W;
		for(int i=0; i<n; i++) cin>>val[i];
		for(int i=0; i<n; i++) cin>>wt[i];
		cout<<knapSack(W,wt,val,n)<<endl;
	}
}
