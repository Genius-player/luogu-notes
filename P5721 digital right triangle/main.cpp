#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n;
	cin>>n;
	int num = 1;
	for(int i = 0;i<n;i++){
		int count = n - i + 1;
		for(int i = 1;i < count;i++){
			cout << setw(2) << setfill('0')<<num;
			num++;
		}
		cout<<endl;
	}
	return 0;
}
