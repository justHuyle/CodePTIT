#include<stdio.h>
#include<math.h>
int dem(long long a){
	int dem=0;
	while(a>0){
		a/=10; ++dem;
	}
	return dem;
}
long long thuannghich(long long a){
	long long dao = 0, n = a;
	while(a > 0){
		dao = dao*10 + a%10;
		a/=10;
	}
	return dao == n;
}
int dau(long long a){
		while(a>=10){
		a/=10; 
	}
	return a;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long a;
		scanf("%lld", &a);
		int c = a%10, b = dau(a);
		long long giua = (a-dau(a)*pow(10,dem(a)-1)-c)/10;
		if ((b == 2*c || c == b*2) && thuannghich(giua)) printf("YES\n");
		else printf("NO\n");
		
	}
return 0;
	
}
