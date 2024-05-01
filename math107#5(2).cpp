#include <bits/stdc++.h>
using namespace std;

double steps(int times){
	double countsteps = 0;
	for(int i=0; i<times; i++){
		//初始位置 //結束條件當再次經過0的點a=1;
		int position1=0, a=0;
		while(a != 1){
        	int temp1 = rand() % 6 + 1;
	        // player志明 位置
        	position1 = (position1 + temp1) % 7;
        	// 更新步數
        	countsteps++;
        	if (position1 == 0) {
        		a++;
        	}
        }    
    }
	return countsteps / times;
}
int main(){
	srand(time(0));
	double a = 282;
	cout << fixed << setprecision(4) << steps(10000) << endl;
	cout << fixed << setprecision(4) << steps(100000)<< endl;
	cout << fixed << setprecision(4) << steps(1000000)<< endl;
	cout << fixed << setprecision(4) << steps(10000000)<< endl;
	//理論值
	cout << fixed << setprecision(4) << a / 121;
	return 0;
}