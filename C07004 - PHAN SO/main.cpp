#include <stdio.h>
int ucln(int a,int b){
	while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
	}
	return a;
}
int bcnn(int a,int b){
	return a*b/ucln(a,b);
}
int main() {
    int t;
    scanf("%d",&t);
    for (int k = 1;k<=t;k++){
	    int a,b,c,d; 
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    int x = a,y=c;
	   	a = a/ucln(a,b);
	   	b = b/ucln(x,b);
	   	c = c/ucln(c,d);
	   	d = d/ucln(y,d);
	   	int e = bcnn(b,d);
	   	int f = ucln(a,c);
	   	int g = ucln(b,d);
	  
	   	printf("Case #%d:\n",k);
	    printf("%d/%d %d/%d\n",a*e/b,e,c*e/d,e);
	    printf("%d/%d\n",a*e/b+c*e/d,e);
	    printf("%d/%d\n",(a/f)*(d/g),(c/f)*(b/g));
	}
	return 0;
}