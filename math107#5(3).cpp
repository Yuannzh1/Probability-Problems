#include <bits/stdc++.h>
using namespace std;
double averagesteps(int n) {
    double totaltimes = 0;
    srand(time(0));
    int temp2 = 0;
    for (int i = 0; i < n; i++) {
        vector<bool> a(7, false);
        int count = 0;
        while (true) {
            int temp = rand() % 7;
            while(temp == temp2){
                temp = rand() % 7;
            }
            temp2 = temp; 
            totaltimes++;
            if (!a[temp]) {
                a[temp] = true;
                count++;
            }
            if (count == 7) {
                break;
            }
        }
    }
    return totaltimes / n;
}
int main() {
    srand(time(0)); // 只需要呼叫一次
    cout << fixed << setprecision(2) << averagesteps(500) << endl;
    cout << fixed << setprecision(2) << averagesteps(1000) << endl;
    cout << fixed << setprecision(2) << averagesteps(10000) << endl;
    cout << fixed << setprecision(2) << averagesteps(1000000);
    return 0;
}