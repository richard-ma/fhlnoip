#include <cstdio>
#include <cstring>
#include <assert.h>
using namespace std;

int main() {
	freopen("letter.in", "r", stdin);
	freopen("letter.out", "w", stdout);
	int n;
	char ch[1000];
	scanf("%d", &n);
	assert(n > 0 && n <= 10);
	for(int i = 0;i < n; ++i) {
		scanf("%s", ch);
		int len = strlen(ch);
		assert(len <= 100);
		for(int j = 0;j < len; ++j) {
			assert(ch[j] >= 'a' && ch[j] <= 'z');
			if(ch[j] == 'a') putchar('z');
			else printf("%c", ch[j] - 1);
		}
		printf("\n");
	}
	return 0;
}