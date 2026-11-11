#include <iostream>
using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	int cnt = 0;
	for(int i = 1;i <= n;i++){
		int temp = i;
		while(temp > 0){
			int digit = temp % 10;//取出个位
			if(digit == x)
				cnt++;
			temp = temp / 10;//去掉个位
		}
	}
	cout<<cnt<<endl;
	return 0;
}
