#include <iostream>
using namespace std;
int main(){
	int k;
	cin>>k;
	int n = 1;
	int day = 0;
	long long sum = 0;
	int cnt = 0;//记录一个阶段已过去的天数
	while(day < k){
		sum += n;
		day++;
		cnt++;
		if(cnt == n){ //当前阶段n天已走完 切换下一个阶段
			n++;
			cnt = 0;
		}
	}
	cout<<sum<<endl;
	return 0;
}
