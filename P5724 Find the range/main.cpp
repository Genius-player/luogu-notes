#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
	int main(){ 
		int n;
		cin>>n;
		vector<int> a(n); //动态数组
		for(int i = 0;i < n;i++){
			cin>>a[i]; //用循环输入各个整数 i一定要从0开始
		}
		sort(a.begin(),a.end()); 
		//括号内输入起始地址和结束地址（是最后一个元素的下一位）
		int ans = a[n-1] - a[0];
		cout<<ans<<endl;
	return 0;
}
