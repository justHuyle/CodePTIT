#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num;
    int freq;
    int index;
} Num;

int compare(const void* a, const void* b) {
    Num* n1 = (Num*)a;
    Num* n2 = (Num*)b;
    if (n1->freq != n2->freq)
        return n2->freq - n1->freq;
    return n1->index - n2->index;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        int A[N];
        Num num[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            num[i].num = A[i];
            num[i].freq = 0;
            num[i].index = i;
            for (int j = 0; j <= i; j++) {
                if (A[j] == A[i]) {
                    num[j].freq++;
                    num[i].freq++;
                }
            }
        }
        qsort(num, N, sizeof(Num), compare);
        
        
        for (int i = 0; i < N; i++) {
			if (num[i].index != -1) {
				if(num[i].freq == 1) {
					printf("%lld ", num[i].num);
					num[i].index = -1;
					continue;
				}
				else {
					while (num[i].freq > 1) {
						printf("%lld ", num[i].num);
						num[i].freq -= 1;	
					}	
					for (int x = 0; x < N; x++) {
						if (num[i].num == num[x].num) num[x].index = -1;
					}
				}
			}
		}
        
        
//        for (int i = 0; i < N; i++) {
//            printf("%d ", num[i].num);
//        }
        printf("\n");
    }
    return 0;
}
