#include <iostream>
#include <string>
using namespace std;
int main(){
	string isbn;
	cin>>isbn;
	int a = 0;
	int sum = 0;
	for(int i = 0;i < isbn.size();i++){
		if(isbn[i] == '-')
			continue;
		if(a < 9){
			int num = isbn[i] - '0';
			sum += num * (a + 1);
			a++;
		}
	}
	int mod = sum % 11;
	char check;
	if(mod == 10)
		check = 'X';
	else 
		check = mod + '0';
	char last = isbn.back();
	if(last == check)
		cout<<"Right"<<endl;
	else{
		string prefix = isbn.substr(0,isbn.size() - 1);
		cout<<prefix<<check<<endl;
	}
	return 0;
}
