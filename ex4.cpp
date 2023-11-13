#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
string qp (double raiz){
    string c;
    double num;
    if (raiz >= 0) {
        num = sqrt(raiz);
    }else{
        c="Não existe";
        return c;
    }
    if (fmod(num, 1.0) == 0.0) {
        c = "Quadrado perfeito";
    }else{
        c= "Não é um quadrado perfeito";
    }
    return c;
}
int main() {
    int num;
    cin >> num;
    cout<<qp(num);
    return 0;
}
