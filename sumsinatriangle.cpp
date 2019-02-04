#include <iostream>
#include <cstdio>
using namespace std;

long long int a[105][105]={0};

int main() {
    int n, m;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &m);
        for(int i=0; i<m; i++) for(int j=0; j<=i; j++) scanf("%lld", &a[i][j]);
        for(int i=m-2; i>=0; i--) for(int j=i; j>=0; j--) {
            if(a[i+1][j+1]>a[i+1][j]) a[i][j]+=a[i+1][j+1];
            else a[i][j]+=a[i+1][j];
        }
        printf("%lld\n", a[0][0]);
        for(int i=0; i<105; i++) for(int j=0; j<105; j++) a[i][j]=0;
    }
    return 0;
}