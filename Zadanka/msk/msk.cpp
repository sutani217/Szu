#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int dimensions[3];
    scanf("%d %d %d", &dimensions[0], &dimensions[1], &dimensions[2]);
    sort(dimensions, dimensions + 3);
    printf("%d", dimensions[1] / 2);
    return 0;
}