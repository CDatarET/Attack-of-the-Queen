#include <stdio.h>

int min(int a, int b){
    if(a < b){
        return(a);
    }
    return(b);
}

int main() {
	int cases;
	scanf("%d", &cases);
	
	for(int c = 0; c < cases; c++){
	    int n, x, y;
	    scanf("%d %d %d", &n, &x, &y);
	    
	    int sum = 0;
	    sum = sum + ((n - 1) * 2);
	    sum = sum + min(x - 1, y - 1);
	    sum = sum + min(x - 1, n - y);
	    sum = sum + min(n - x, y - 1);
	    sum = sum + min(n - x, n - y);
	    
	    printf("%d\n", sum);
	}

}

