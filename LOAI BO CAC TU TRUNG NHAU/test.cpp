#include <stdio.h>
#include <string.h>

int main() {
	int size = 1000;
	char s[size];
	gets(s);
	char str[size][size];
	int ok[size];
	for (int i = 0; i < size; i++) ok[i] = 0;
	
	int index = 0;
	
	const char delimiters[] = " "; 
  
    // Tokenize the string 
    char* token = strtok(s, delimiters); 
    while (token != NULL) { 
        strcpy(str[index], token);
        index++;
        token = strtok(NULL, delimiters); 
    } 
	
	for (int i = 0; i < index; i++) {
		for (int j = i+1; j < index; j++) {
			if (strcmp(str[i], str[j]) == 0) {
				ok[j] = 1;
			}
		}
	}

	
		
	for (int i = 0; i < index; i++) {
		if (ok[i] == 0) {
			printf("%s ", str[i]);
		}
	}
	
	return 0;
}
