#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	long long a;
	int day = 1;
	cin>>a;
	while(a > 1){
		a = a / 2;
		day++;
	}
	cout<<day<<endl;
	return 0;
}
