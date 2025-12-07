#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    // Lưu danh sách sếp (dùng chỉ số 1-based cho dễ)
    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }

    int max_depth = 0;

    // Duyệt qua từng nhân viên để đo "độ cao ghế ngồi"
    for (int i = 1; i <= n; i++) {
        int current_depth = 1;
        int manager = p[i];

        // Leo lên đến khi nào gặp Sếp tổng (-1) thì thôi
        while (manager != -1) {
            current_depth++;
            manager = p[manager]; // Nhảy lên sếp của sếp
        }

        // Cập nhật kỷ lục độ sâu
        if (current_depth > max_depth) {
            max_depth = current_depth;
        }
    }

    cout << max_depth << endl;

    return 0;
}
