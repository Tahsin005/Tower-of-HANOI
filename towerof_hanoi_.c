#include<stdio.h>
// Tower of HANOI
void hanoi(int n, char s, char h, char d){
    if(n==0) return;
    hanoi(n-1,s,d,h);
    printf("%c to %c\n", s,d);
    hanoi(n-1,h,s,d);
    return;
}
int main(){
    int n;
    printf("Enter number of disks :");
    scanf("%d", &n);
    hanoi(n,'A','B','c');
    return 0;
}