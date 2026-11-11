#include <iostream>
using namespace std;
int main(){
	int k;
	cin>>k;
	double sum = 0;
	int cnt = 0;
	//无限for循环 无需条件 但别忘';'
	for(int i = 1;;i++){
		sum += 1.0 / i;
		cnt++;
		//满足条件自动跳出
		if(sum > k){
			break;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
