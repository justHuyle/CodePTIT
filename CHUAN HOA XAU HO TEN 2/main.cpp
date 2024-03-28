#include <stdio.h>
#include <string.h>
#include <ctype.h>


void solve(char s[100], int len) {
	for (int i = 0; i < len; i++) {
		s[i] = tolower(s[i]);
	}
	
	//loai bo khoang trang o dau
	int index = 0; //vi tri bat dau
	for (int i = 0; i < len; i++) {
		if (s[i] != ' ') {
			index = i;
			break;
		}
	}
	

	char s2[len-index]; int size = 0;
	for (int i = index; i < len; i++) {
		s2[size] = s[i];
		size++;
	}
		
	s = s2;	
	
		
	//Capitalize
	for (int i = 0; i < size; i++) {
		if (s[i] != ' ' && s[i-1] == ' ') {
			s[i] = toupper(s[i]);
			s[i-1] = '_';
		}	
	}
	
	
	int indexS = 0; char ho[10];

//	for (int i = 0; i < size; i++) {
//		if (s[i] == ' ') continue;
//		if (s[i] == '_') s[i] = ' ';
//	}
	
	
	//lay ho
	for (int i = 0; i < size; i++) {
		if (s[i] == ' ') {
			indexS = i;
			break;
		}
	}
	
	for (int i = 0; i < indexS; i++) {
		ho[i] = toupper(s[i]);
	}
	ho[indexS] = '\0';
	
	int indexTenDem = 0;
	for (int i = indexS+1; i < size; i++) {
		if (s[i] == '_') {
			indexTenDem = i;
			break;
		}
	}
	
	char Ans[100]; int sizeAns = 0;
	
	s[size] = '1';
	for (int i = indexTenDem+1; i < size; i++) {
		if (s[i] == ' ') continue;
		if (s[i] == '_') s[i] = ' ';
		if (s[i] == '1') s[i] = '2';		
		Ans[sizeAns] = s[i];
		sizeAns++;

	}
	sizeAns++;
	Ans[sizeAns] = ',';
	sizeAns++;
	Ans[sizeAns] = '_';		

	for (int i = 0; i < indexS; i++) {
		Ans[sizeAns] = ho[i];
		sizeAns++;	
	}
	
	
	Ans[sizeAns] = '\0';
	for (int i = 0; i < sizeAns; i++) {
		if(Ans[i] == '2') continue;
		if (Ans[i-1] == ',') printf(" ");
		printf("%c", Ans[i]);
	}
	printf("\n");




	
//	printf(", ");
//	for (int i = 0; i < indexS; i++) {
//		printf("%c", ho[i]);
//	}
//	printf("\n");
}



int main() {
	int t;
	scanf("%d\n", &t);
	while (t--) {
		char s[100];
		fgets(s, 100, stdin);
		int len = strlen(s);
		solve(s, len);
	}
	
	
	return 0;
}
