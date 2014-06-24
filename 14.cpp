#include <iostream>
using namespace std;

const int N=1000000;

long long memo[N];

int main(void){
	int ans = -1;
	int ma = 0;

	//memoの初期化
	for(int i=0; i<N; i++){
		memo[i] = -1;
	}

	for(int i=2; i<N; i++){
		long long n = i;
		int cnt = 0;

		while(n != 1){
			if(n < N && memo[n] != -1){
				cnt += memo[n];
				break;
			}
			if(n%2 == 0){
				n = n/2;
			}else{
				n = 3*n + 1;
			}
			cnt++;
		}
		//最後の1の分
		//memoを使うときは最後の1は既にmemoに含まれているので足さない
		if(n == 1)cnt++;
		memo[i] = cnt;

		if(cnt > ma) {
			ma = cnt;
			ans = i;
		}
	}

	cout << ans << endl;

	return 0;
}
