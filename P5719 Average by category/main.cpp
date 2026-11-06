#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n,k;
	int sum1 = 0,sum2 = 0;
	int ans1 = 0,ans2 = 0;
	cin>>n>>k;
	for(int i = 1;i <= n;i++){
		if(i % k == 0){
			sum1 += i;
			ans1++;
		}
		else{
			sum2 += i;
			ans2++;
		}
	}
	double avr1 = 1.0 * sum1 / ans1;
	double avr2 = 1.0 * sum2 / ans2;
	cout<<fixed<<setprecision(1)<<avr1<<" "<<avr2<<endl;
	return 0;
}
