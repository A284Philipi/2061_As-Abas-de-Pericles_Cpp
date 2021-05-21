#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int abas, operacoes, cont, r;
    string operacao;
    cin >> abas;
    cin >> operacoes;
    getchar();
    r = abas;
    while (cont < operacoes){
        getline(cin, operacao);
        if (operacao[0] == 'f'){
            r = r + 1;
        }else{
            r = r - 1;
        }
        cont++;
    }
    cout << r <<endl;
    return 0;
}
