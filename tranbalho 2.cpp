#include <iostream>
#include <stdlib.h>

using namespace std;

// TRABALHO 2

int main(){

    int num, x, y;

    cout << "Digite um numero maximo e impar" << endl;
    cin >> num;
    cout << endl;

    if(num % 2 == 0){
        cout << "O numero digitado eh invalido." << endl;

    }else{
        for(x = 0; x <= (num / 2); x++){
            for(y = x + 1; y <= (num - x); y++){
                cout << " " << y;
            }
            cout << endl;
            for(y = 0; y < (x + 1); y++){
                cout << "  ";

            }
        }
    }

    system("pause");

    return 0;
}
