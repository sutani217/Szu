#include <iostream>

using namespace std;

int main()
{
    int N, K;
    scanf("%d %d", &N, &K);
    int next = N + 1;
    while(next % K != 0) next++;
    printf("%d", next);
    return 0;
}