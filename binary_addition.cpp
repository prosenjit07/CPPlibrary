#include <bits/stdc++.h>
using namespace std;
//bin to dec
int bintoDec(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        // y=last digit
        int y = n % 10; // y=0,1,0,1,10,10
        ans += x * y;   // ans=0,2,2,10
        x *= 2;         // x=2,4,8,16
        // n=previous all digit of y
        n /= 10; // 101,10,1,0(break)
    }
    return ans;
}
//dec to bin
int dec2bin(int num){
    int ar[20]; 
    int i;
     for(i = 0; num > 0;  i++) {
        ar[i] = num % 2; // Storing remainder in array
        num = num / 2;   // reducing number by 2
    }
  
    for(i=i-1;i>=0;i--){
        cout<<ar[i];
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    int bin_sum = bintoDec(a) + bintoDec(b);
    dec2bin(bin_sum);
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int bin_addition(int bn1, int bn2)
{
	int i = 0, r = 0;
	int sum[20];
	while (bn1 != 0 || bn2 != 0)
	{
		sum[i] = (int)((bn1 % 10 + bn2 % 10 + r) % 2);
		r = (int)((bn1 % 10 + bn2 % 10 + r) / 2);
		bn1 = bn1 / 10;
		bn2 = bn2 / 10;
		i++;
	}
	if (r != 0)
	{
		sum[i++] = r;
	}
	--i;
	while (i >= 0)
	{
		cout << (sum[i--]);
	}
	cout <<" "<<endl;
}
int main()
{
	long bn1, bn2;
	cin >> bn1;
	cin >> bn2;
	bin_addition(bn1,bn2);
}
*/