#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 200


int count(char s[]){
    int dem = 0, n = strlen(s);
    for(int i = 0; i < n; i++){
        //��y l� 1 t? m?i
        if(s[i] != ' '){
            ++dem; 
            //B? qua t? ��
            while(i < n && s[i] != ' '){
                ++i;
            }
        }
    }
    return dem;
}


int main()
{
	int t;
	scanf("%d\n", &t);
	for (int i = 0; i < t; i++) {
		char s[MAX];
		gets(s);
		printf("%d\n", count(s));		
	}
}
