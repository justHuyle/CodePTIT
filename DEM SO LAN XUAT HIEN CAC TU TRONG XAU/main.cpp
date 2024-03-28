#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 1000

int main() {
	char s[MAX];
	gets(s);
	int len = strlen(s);
	
	
	for (int i = 0; i < len; i++) s[i] = tolower(s[i]);
	
	
	char *S[MAX];
	int size = 0;
	const char delimiters[] = " "; 
  
    // Tokenize the string 
    char* token = strtok(s, delimiters); 
    while (token != NULL) { 
		S[size] = token;
		size++;
        token = strtok(NULL, delimiters); 
    } 
    int ok[size]; //mang check
    
    
    for (int i = 0; i < size; i++) ok[i] = 0;
    
    for (int i = 0; i < size; i++) {
    	if (ok[i] == 0) {
    		int cnt = 1;
    		for (int j = i+1; j < size; j++) {
    			if (strcmp(S[i], S[j]) == 0) {
    				cnt++;
    				ok[j] = 1;
				}
			}
			printf("%s %d\n", S[i], cnt);
		}

	}


	
	return 0;
}
