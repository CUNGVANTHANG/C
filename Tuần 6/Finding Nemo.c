#include <stdio.h>
#include <string.h>



int main() {
int n;
scanf("%d", &n);
getchar();
char khachMoi[50][100];
for (int i = 0; i < n; i++) {
fgets(khachMoi[i], 100, stdin);
khachMoi[i][strlen(khachMoi[i]) - 1] = '\0';
}
for (int i = 0; i < n; i++) {
// khachMoi[i] == "Nemo"????
if (strcmp(khachMoi[i], "Nemo") == 0) {
if (i == 0)
printf("%s and %s", khachMoi[n-1], khachMoi[1]);
else if (i == n - 1)
printf("%s and %s", khachMoi[n-2], khachMoi[0]);
else
printf("%s and %s", khachMoi[i-1], khachMoi[i+1]);
}
}
}
