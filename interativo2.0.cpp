#include<iostream>
#include<string>
#include"src/Flight.h"
#include"src/FlightManager.h"
#include"src/User.h"
    using std::cin, std::cout, std::endl, std::string;



void displayInicial(){
    cout << "Escolha uma opção: " << endl
         << " -> 1: Login" << endl
         << " -> 2: Cadastro" << endl
         << " -> 0; Sair" << endl
         << "Digite aqui: ";          
}

    // Função para exibir o menu
void displayMenu() {
  
    cout << "  Aproveite nossas ofertas de passagens aéreas e programe toda a sua viagem com a X. Aqui você vai encontrar diversas opções de voos para diversos lugares e com as melhores companhias aéreas nacionais e internacionais. Consulte todas as disponibilidades e realize sua compra de maneira fácil, rápida e sem precisar sair de casa, 100% online. Além das melhores tarifas, na X você encontra dicas para deixar sua viagem ainda mais completa. Não perca tempo, reserve agora mesmo sua passagem e embarque nessa nova aventura. Reserve suas passagens no maior e melhor sistema de reservas de passagens! Planejar sua próxima viagem nunca foi tão fácil!" << endl << endl;
    cout << "-> 1. Visualizar voos disponíveis" << endl;
    cout << "-> 2. Login/Cadastro" << endl;
    cout << "-> 0. Sair" << endl;
    cout << "Escolha uma opção: "; 
}

void displayProfileMenu() {
    cout << "Olá," << endl;
    cout << " Altere seu perfil.Acompanhe preços, organize planos de viagem e acesse ofertas e experiências exclusivas com sua conta. Assim fica muito mais fácil!" << endl << endl;
    cout << "-> 1 Alterar nome" << endl;
    cout << "-> 2. Alterar e-mail" << endl;
    cout << "-> 3. Alterar senha" << endl;
    cout << "-> 4. Adicionar número de cartão de crédito" << endl;
    cout << "-> 5. Visualizar tickets" << endl;
    cout << "-> 6. Cancelar ticket" << endl;
    cout << "-> 7. Visualizar seu perfil" << endl;
    cout << "-> 0. Voltar ao menu principal" << endl;
    cout << "Escolha uma opção: ";
}

int main(){
    FlightManager sistema;
    user usuario;
    bool aux_inicial = 0;
    int opcao_inicial = -1;  //Qualquer inicialização diferente de 0, 1 ou 2
        while(opcao_inicial != 0){
            try{
                displayInicial();
                cin >> opcao_inicial;
                    if(opcao_inicial == 1){     //Login
                        string aux_login;
                            cout << "Digite seu email: ";
                            cin >> aux_login;
                            
                    }
                    else if(opcao_inicial == 2){
                        if(aux_inicial == 0){   //Cadastro

                        }
                        else{ //aux_inicial == 1 -> Já cadastrou

                        }
                    }
                    else{
                        throw opcao_inicial;
                    }
            }catch(int& x){
                cout << "Opção invalida" << endl;
            }
        }    










        return 0;
}