#include <iostream>
using namespace std;

int main (){
    int nilai, f_n, f_1, f_2;
    cin >> nilai;
    
    // f_n = f_1 + f_2
        // anggapan bahwa fibonaci 1 bernilai 1 dan fibonaci 2 bernilai 0
    f_1 = 1;
    f_2 = 0;
    cout << f_n << " ";
    cout << f_1 << " ";
    for (int f = 2; f < nilai; f++){
        f_n = f_1 + f_2;
        f_2 = f_1;
        f_1 = f_n;
        cout << f_n << " ";
    }

    return 0;
}
