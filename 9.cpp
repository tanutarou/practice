#include <cstdio>

int main(void){
	for(int i=1; i<1000; i++){
		for(int j=i; j<1000; j++){
			for(int k=j+1; k<1000; k++){
				if(i + j + k == 1000 && i*i + j*j == k*k){
					printf("%d\n", i*j*k);
					goto END;
				}
			}
		}
	}
END:

	return 0;
}
