#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    scanf("%d", &N);
    vector <int> recipe;
    for(int i = 0; i < N; i++)
    {
        int T;
        scanf("%d", &T);
        recipe.push_back(T);
    }
    int w = 0;
    for(int i = 0; i < N; i++)
    {
        int D;
        scanf("%d", &D);
        if(D < recipe[i]) w++;
    }
    printf("%d", w);
    return 0;
}
