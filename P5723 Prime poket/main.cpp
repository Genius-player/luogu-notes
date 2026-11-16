#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int x){ //判断质数
		if (x < 2)
			return false;
		for(int i = 2;i <= sqrt(x);i++ ){
			if(x % i == 0)
				return false;
		}
		return true;
	}
int main(){
	int L;
	cin>>L;
	int sum = 0;
	int num = 2;
	int cnt = 0;
	while(true){ //无限循环
		if(isPrime(num)){ //是质数才进入
			if(sum + num > L) break;
			sum += num;
			cnt++;
			cout<<num<<endl;
		}
		num++; //别忘num的值得在此手动递增
	}
	cout<<cnt<<endl;
	return 0;
}
