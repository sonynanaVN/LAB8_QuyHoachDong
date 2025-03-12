//Sàn Eratosthenes - Liệt kê các số nguyên tố <= n
#include<iostream>
#include<cmath>
using namespace std;
int prime[10000001];
void SanEratos(){
	for(int i = 0; i <= 10000000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= sqrt(10000000); i++){
		if(prime[i] == 1){
			for(int j = i * i; j <= 10000000; j += i){
				prime[j] = 0;
			}
		}
	}
}
int main(){
	int n;
	cout<<"nhap n: ";cin>>n;
	SanEratos();
	for(int i = 0; i< n; i++){
		if(prime[i] == 1){
			cout<<i<<" ";
		}
	}
//int tong = 0;
//	for(int i = 0; i <= 10;i++){
//		if(prime[i] == 1){
//			tong += i;
//		}
//	}
//	cout<<tong;
	return 0;
}
