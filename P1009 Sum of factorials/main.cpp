#include <iostream>
using namespace std;

#define MAXN 100
int fac[MAXN] = {0};
int sum[MAXN] = {0};

//高精度乘法，fac = fac * x
void mul(int x)
{
    int carry = 0;
    for(int j = 0; j < MAXN; j++)
    {
        int temp = fac[j] * x + carry;
        fac[j] = temp % 10;
        carry = temp / 10;
    }
}

//高精度加法 sum = sum + fac
void add()
{
    int carry = 0;
    for(int j = 0; j < MAXN; j++)
    {
        int temp = sum[j] + fac[j] + carry;
        sum[j] = temp % 10;
        carry = temp / 10;
    }
}

int main()
{
    int n;
    cin >> n;
    fac[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        mul(i);
        add();
    }
    //定位最高有效位
    int k = MAXN - 1;
    while(k > 0 && sum[k] == 0)
        k--;
    //逆序输出
    for(int i = k; i >= 0; i--)
    {
        cout << sum[i];
    }
    cout << endl;
    return 0;
}
