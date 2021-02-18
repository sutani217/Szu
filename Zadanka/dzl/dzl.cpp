#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, M;
    scanf("%u %u", &N, &M);
    unsigned w = 0;
    for(unsigned i = 0; i < N; i++)
    {
        unsigned num;
        scanf("%u", &num);
        unsigned divisors = 0;
        for(unsigned j = 2; j < num; j++) if(num % j == 0) divisors++;
        if(divisors == M) w++;
    }
    printf("%u", w);
    return 0;
}