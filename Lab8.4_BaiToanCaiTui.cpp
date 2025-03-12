//Bài toán cái túi.
//Trong siêu thị có n gói hàng (n < 100), gói hàng thứ i có trọng lượng là Wj < 100
//và trị giá Vi < 100. Một tên trộm đột nhập vào siêu thị, tên trộm mang theo một cái
//túi có thể mang được tối đa trọng lượng M (M < 100 ). Hỏi tên trộm sẽ lấy đi những 
//gói hàng nào để được tổng giá trị lớn nhất
#include<iostream>
using namespace std;
int main(){
	int n, M;
	cout<<"Nhap so goi hang (n < 100): "; cin>>n;
	cout<<"Nhap trong luong toi da cua tui (M < 100): "; cin>>M;
	int w[n + 1], v[n + 1];
	cout<<"Trong luong do vat"<<endl;
	for(int i = 1; i <= n ; i++){
		cin>>w[i];
	}
	cout<<"Nhap gia tri do vat"<<endl;
	for(int i = 1; i <= n ; i++){
		cin>>v[i];
	}
	int dp[n + 1][M + 1];
	memset(dp, 0, sizeof(dp));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= M; j++){
			dp[i][j] = dp[i - 1][j];
			if(j >= w[i]){
				dp[i][j]=max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
			}
		}
	}
    for (int i = n; i > 0 && dp[i][M] > 0; i--) {
        if (dp[i][M] != dp[i - 1][M]) {
            cout << "Mon hang thu " << i << " duoc lay." << endl;
            M -= w[i];
        }
    }
//	cout<<dp[n][M];
}