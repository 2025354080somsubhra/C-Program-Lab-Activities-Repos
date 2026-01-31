#include<stdio.h>
long long fact(int n) {
    int fact = 1;
    for(int i=0; i<=n; i++) {
        fact *= i;
    }
    return fact;
}

long long pem(int n, int r) {
    return fact(n)/fact(n-r);
}

long long comb(int n,int r) {
    return fact(n)/fact(r)*fact(n-r);
}

int main() {
    int n,r,choice;
    printf("Enter n & r :");
    scanf("%d%d",&n,&r);

    if(n < r || n < 0 || r < 0) {
        printf("Invalid Input");
    }
    printf("Enter your choice : \n");
    printf("1. Permutation");
    printf("2. Combination");
    scanf("%d",&choice);

    switch(choice) {
        case 1 : if(choice == 1);
        printf("(nPr) =  %lld\n",pem(n,r));
        case 2 : if(choice == 2);
        printf("(nCr) = %lld\n",comb(n,r));
        default:
        printf("Invalid Choice ! \n");
    }
    return 0;
}