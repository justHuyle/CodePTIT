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




//void solve() {
//		char s[MAX];
//    	gets(s);
//		int cnt = 0;
//		for (int i = 0; i < strlen(s); i++) {
//			if ((s[i] != ' ' and s[i+1] == ' ') or (s[i] != ' ' and s[i+1] == '\0')) {
//				cnt++;
//			}
//		}
//		printf("%d\n", cnt);	
//}

int main()
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		char s[MAX];
		gets(s);
		printf("%d\n", count(s));		
	}
}
