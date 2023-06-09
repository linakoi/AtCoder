#include <iostream>
using namespace std;

// 多倍長テンプレ
/* ---------------------- ここから ---------------------- */
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
// 任意長整数型
using Bint = mp::cpp_int;
// 仮数部が10進数で1024桁の浮動小数点数型(TLEしたら小さくする)
using Real = mp::number<mp::cpp_dec_float<1024>>;
/* ---------------------- ここまで ---------------------- */

int main() {
  // 整数
    Bint res("0");

    vector<int> A(64);
    for (int i = 0; i < 64; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < 64; ++i) {
        res += (Bint)A[i] * (Bint)pow(2, i);
    }

    cout << res << endl;

    return 0;
}