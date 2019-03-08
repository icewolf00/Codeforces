#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;
int main(void){
	double n,m,a;
	cin >> n >> m >> a;
	long long x = ceil(n/a);
	long long y = ceil(m/a);
	cout << x*y;
}