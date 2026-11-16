#include <iostream>
#include <cmath>
using namespace std;
bool isPalindrome(int x){ //判断是否为回文数
	int tem = x;
	int rev = 0;
	while(tem > 0){
		rev = rev * 10 + tem %10;
		tem /= 10;
	}
	return rev == x;
}
bool isPrime(int x) { //判断是否为质数
	if(x < 2)  return false;
	for(int i = 2;i <= sqrt(x);i++){
		if(x % i == 0) 
			return false;
	}
	return true;
}
int getLen(int x){ //求位数
	int cnt = 0;
	while(x > 0){
		cnt++;
		x /= 10;
	}
	return cnt;
}
int main(){
	int a,b;
	cin>>a>>b;
	for(int i = a;i <= b;i++){
		int len = getLen(i);
		if(len % 2 == 0 && i != 11) 
			continue; //直接去掉位数是偶数的回文数且不等于11的
		//原理是位数是二位及以上的回文数一定是11的倍数 但大于11一定不是回文数
		if(isPalindrome(i) && isPrime(i)){
			cout<<i<<endl;
		}
	}
	return 0;
}
