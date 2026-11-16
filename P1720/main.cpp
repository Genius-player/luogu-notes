#include <iostream>
#include <cmath> //sart pow
#include <iomanip> //有效/小数点后几位数字
using namespace std;
	int main(){ 
		int n;
		cin>>n;
		double a = (1 + sqrt(5)) / 2;
		double b = (1 - sqrt(5)) / 2;
		double result = (pow(a,n) - pow(b,n)) / sqrt(5); //pow(a,b)表示a的b次方
		cout<<fixed<<setprecision(2)<<result; 
		//保留小数点后两位数字 不加fixed就是保留两位有效数字
	return 0;
}
