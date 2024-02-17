#include <iostream> 

using namespace std;

int main() {
    

    // Declare uma variável para armazenar o número fornecido pelo usuário.
    int n;

    // Leia um número inteiro n do utilizador.
    cout << "Digite um número inteiro: ";
    cin >> n;

    // Utilize um loop for para calcular e exibir a tabuada de n (de 1 a 10).
    cout << "Tabuada de " << n << ":\n";
    for (int i = 1; i <= 10; ++i) {
        cout << n << " x " << i << " = " << (n * i) << "\n";
    }

    return 0;
}
