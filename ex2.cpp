#include <iostream>
#include <string>
using namespace std;

    string niver(int d,int m,int a){
    string x;
    if (d >= 1 && d <= 31 && m >= 1 && m <= 12) {
        string meses[12] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
        cout << d << " de " << meses[m - 1] << " de " << a;
    } else {
        x= "Data inválida. Verifique o dia e o mês informados.";
    }
    return x;
    }
    int main() {
    int d,m,a;
    cin >> d >> m >> a;
    niver(d,m,a);
   
    return 0;
}
