#include <iostream>
using namespace std;
	int main(){ 
		long long N;
		cin>>N;
		//后面两个变量最好也用long long ，避免数据溢出
		long long rev = 0;
		long long i = N;
		if(N > 0){
			while(i > 0){ //正数
				rev = rev * 10 + i % 10;
				i /= 10;
		}
				cout<<rev;
	}
		else if (N == 0){  //为零的特殊情况
				cout<<0;
		}
		else{ //负数
				i = i * (-1);
				while(i > 0){
					rev = rev * 10 + i % 10;
					i /= 10;
				
		}
			cout<<'-'<<rev;
		}
	return 0;
}
