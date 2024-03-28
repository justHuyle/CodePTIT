#include <stdio.h>
#include <stdlib.h>

typedef struct Guest {
  int arrivalTime;
  int checkInTime;
} Guest;

int compareGuest(const void *a, const void *b) {
  const Guest *guest1 = (const Guest *)a;
  const Guest *guest2 = (const Guest *)b;
  return guest1->arrivalTime - guest2->arrivalTime;
}

int main() {
  int n;
  scanf("%d", &n);

  Guest guests[n];
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &guests[i].arrivalTime, &guests[i].checkInTime);
  }

  qsort(guests, n, sizeof(Guest), compareGuest);
  int startTime = guests[0].arrivalTime;

  
  int endTime = startTime + guests[0].checkInTime;

  // Duy?t qua t?ng v? khách
  for (int i = 1; i < n; i++) {
    int currentTime = guests[i].arrivalTime;

    if (currentTime <= endTime) {
      endTime += guests[i].checkInTime;
    } else {
      startTime = currentTime;
      endTime = currentTime + guests[i].checkInTime;
    }
  }

  // In ra ðáp án
  printf("%d\n", endTime);

  return 0;
}
