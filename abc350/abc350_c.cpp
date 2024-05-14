#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n + 1);
    vector<int> now(n + 1);
    int con = 0;
    vector<vector<int>> rs(n + 1, vector<int>(2)); // i,j値保管用
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        now.at(x) = i; // vecの値の位置を記録
        vec.at(i) = x;
    }

    int op_count = 0; // 操作回数をカウントする変数を追加

    for (int i = 1; i <= n; i++) {
        if (vec.at(i) != i) {
            int j = now.at(i); // 要素iの現在の位置を取得
            if (vec.at(j) == j) continue; // すでに正しい位置にあればスキップ

            vec.at(j) = vec.at(i); // 要素iを正しい位置に移動
            vec.at(i) = i; // 要素iの位置を更新

            // nowベクターを正しく更新
            now.at(vec.at(j)) = j; // 要素jの現在の位置を更新
            now.at(i) = i; // 要素iの現在の位置を更新

            // 操作履歴を記録
            rs.at(op_count).at(0) = i;
            rs.at(op_count).at(1) = j;
            con++;
            op_count++;
        }
    }

    cout << con << endl;
    for (int i = 0; i < con; i++) {
        cout << rs.at(i).at(0) << " " << rs.at(i).at(1) << endl;
    }
}