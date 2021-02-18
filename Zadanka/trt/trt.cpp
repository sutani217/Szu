#include <iostream>
#include <vector>

using namespace std;

int main()
{
    unsigned N;
    scanf("%u", &N);
    vector <unsigned> recipe;
    for(unsigned i = 0; i < N; i++)
    {
        unsigned T;
        scanf("%u", &T);
        recipe.push_back(T);
    }
    unsigned w = 0;
    for(unsigned i = 0; i < N; i++)
    {
        unsigned D;
        scanf("%u", &D);
        if(D < recipe[i]) w++;
    }
    printf("%u", w);
    return 0;
}