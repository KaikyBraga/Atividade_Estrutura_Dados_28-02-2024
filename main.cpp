#include <iostream>

using std::cout;
using std::endl;
using std::string;

void imc(float massa, float altura){
    // Mostra o valor do IMC e sua classificação.

    float I = massa/(altura*altura);
    string classificacao;

    if (I < 17){ 
        classificacao = "Muito abaixo do peso";
    }

    else if (I >= 17 && I <= 18.5){ 
        classificacao = "Abaixo do peso";
    }

    else if (I > 18.5 && I <= 25){ 
        classificacao = "Peso normal";
    }

    else if (I > 25 && I <= 30){ 
        classificacao = "Acima do peso";
    }

    else if (I > 30 && I <= 35){ 
        classificacao = "Obesidade";
    }

    else if (I > 35 && I <= 40){ 
        classificacao = "Obesidade severa";
    }

    else if (I > 40){ 
        classificacao = "Obesidade morbida";
    }

    cout << "IMC = " << I << ", " << classificacao << endl;
}


void ano_bissexto(int ano){
    // Mostra se um ano é ou não bissexto.
    
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        cout << "O ano " << ano << " eh bissexto!" << endl;
    }

    else
        cout << "O ano " << ano << " nao eh bissexto!" << endl;
}


int main(){
    // Testes
    imc(60,2);
    imc(89.0,1.79);
    imc(150,1.9);

    ano_bissexto(2000);
    ano_bissexto(1900);
    ano_bissexto(2024);

    return 0;
}