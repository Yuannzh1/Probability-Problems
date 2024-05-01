#include <bits/stdc++.h>
using namespace std;

double winrate(int times){
	double countwin = 0;
	
	int position1 = 0, position2 = 0;
	for(int i = 0; i<times; i++){
		//初始位置
		int position1 = 0, position2 = 0;
		while (true) {
            // 骰子1-6
            int temp1 = rand() % 6 + 1;
            // player志明 位置
            position1 = (position1 + temp1) % 7;
            // 骰子1-6
            int temp2 = rand() % 6 + 1;
            // player春嬌 位置
            position2 = (position2 + temp2) % 7;

            // 檢查結束條件
            if (position1 == 0 || position2 == 0) {
                if (position1 == 0) {
                    countwin++;
                }
                break;
            }
        }
    }
	return countwin / times;
}


int main(){
	srand(time(0));
	cout << fixed << setprecision(2) << winrate(1000) << endl;
	cout << fixed << setprecision(2) << winrate(10000)<< endl;
	cout << fixed << setprecision(2) << winrate(100000)<< endl;
	cout << fixed << setprecision(2) << winrate(1000000);
	return 0;
}
