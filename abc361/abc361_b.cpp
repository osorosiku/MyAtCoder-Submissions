#include <iostream>
using namespace std;

bool isOverlapping(int a, int d, int g, int j) {
    // 一方の直方体の最小値が他方の最大値より小さく、かつ一方の直方体の最大値が他方の最小値より大きいかどうかを確認
    return max(a, g) < min(d, j);
}

int main() {
    int a, b, c, d, e, f, g, h, i, j, k, l;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;

    // x軸、y軸、z軸において重なっているかどうかを確認
    if (isOverlapping(a, d, g, j) && isOverlapping(b, e, h, k) && isOverlapping(c, f, i, l)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}