#include <stdio.h>
#include <stdlib.h>

/** Biref Description
 * Description
 * @param 
 * @see 
 * @return 
 */

int lca (int x, int y)
{

    if (x == y) {
        return x;
    } else if (x > y) {
        return lca(x / 2, y);
    } else {
        return lca(x, y / 2);
    }
}

int main (int argc, char const* argv[])
{
    int x, y;

    scanf("%d %d", &x, &y);

    printf("%d\n", lca(x, y));

    return 0;
}
