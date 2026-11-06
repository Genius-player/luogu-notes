//1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i = 0;i < n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	cout<<a[0];
	return 0;
}

//2
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, min_val;
    cin >> min_val;
    for(int i = 1; i < n; i++)
    {
        cin >> x;
        if(x < min_val)
        {
            min_val = x;
        }
    }
    cout << min_val;
    return 0;
}
