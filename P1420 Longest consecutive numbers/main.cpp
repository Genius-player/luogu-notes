#include <iostream>
#include <vector>
using namespace std;
	int main(){ 
		int n;
		cin>>n;
		vector<int> a(n); //记得定义时是用括号表示数组长度
		for(int i = 0;i < n;i++){
			cin>>a[i];
		}
		int len = 1;
		int max_len = 1;
		for(int i = 1;i < n;i++){
			if(a[i] - a[i - 1] == 1){
				len++;
				if(len > max_len){
					max_len = len;
				}
			}
			else
				len = 1; //不符马上重置子串长度
		}
		cout<<max_len<<endl;
	return 0;
}
