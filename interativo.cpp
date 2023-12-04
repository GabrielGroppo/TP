#include <iostream>
#include <string>
#include "src/FlightManager.h"
#include "src/Flight.h"
#include "src/User.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

// Função para exibir o menu
void displayMenu() {
  
    cout << "  Aproveite nossas ofertas de passagens aéreas e programe toda a sua viagem com a X. Aqui você vai encontrar diversas opções de voos para diversos lugares e com as melhores companhias aéreas nacionais e internacionais. Consulte todas as disponibilidades e realize sua compra de maneira fácil, rápida e sem precisar sair de casa, 100% online. Além das melhores tarifas, na X você encontra dicas para deixar sua viagem ainda mais completa. Não perca tempo, reserve agora mesmo sua passagem e embarque nessa nova aventura. Reserve suas passagens no maior e melhor sistema de reservas de passagens! Planejar sua próxima viagem nunca foi tão fácil!" << endl << endl;
  
    cout << "-> 1. Visualizar voos disponíveis" << endl;
    cout << "-> 2. Login/Cadastro" << endl;
    cout << "-> 0. Sair" << endl;
    cout << "Escolha uma opção: ";
}

void displayProfileMenu() {
  
    cout << "  Entre/Altere seu perfil.Acompanhe preços, organize planos de viagem e acesse ofertas e experiências exclusivas com sua conta. Assim fica muito mais fácil!" << endl << endl;
  
    cout << "-> 1. Adicionar nome" << endl;
    cout << "-> 2. Alterar nome" << endl;
    cout << "-> 3. Adicionar CPF" << endl;
    cout << "-> 4. Adicionar e-mail" << endl;
    cout << "-> 5. Alterar e-mail" << endl;
    cout << "-> 6. Adicionar senha" << endl;
    cout << "-> 7. Alterar senha" << endl;
    cout << "-> 8. Adicionar número de cartão de crédito" << endl;
    cout << "-> 9. Visualizar tickets" << endl;
    cout << "-> 10. Cancelar ticket" << endl;
    cout << "-> 11. Visualizar seu perfil" << endl;
    cout << "-> 0. Voltar ao menu principal" << endl;
    cout << "Escolha uma opção: ";
}

int main() {
    FlightManager Sistema;
    user usuario;

    int choice = -1; // Inicializando com um valor diferente de 0
    while (choice != 0) {
        displayMenu();
        cin >> choice;
        cout << endl;
        int profileChoice = -1;

        switch (choice) {
            case 1:
                Sistema.showFlights();
                break;

                case 2: {
                    bool login_choice = 0;
                    cin >> login_choice;
                        if(login_choice == 1){   //LOGIN
                            
                        }
                        else{   //CADASTRO

                        }
                while (profileChoice != 0) {
                    displayProfileMenu();
                    cin >> profileChoice;
                    cout << endl;

                    switch (profileChoice) {
                        case 1: {
                            string name;
                            cout << "Digite o nome: ";
                            cin >> name;
                            usuario.addName(name);
                       
                            break;
                        }
                        case 2: {
                            string name;
                            cout << "Digite um novo nome: ";
                            cin >> name;
                            usuario.changeName(name);
                            break;
                        }
                        case 3: {
                            long int cpf;
                            cout << "Adicione o CPF: ";
                            cin >> cpf;
                            usuario.addCpf(cpf);
                            break;
                        }
                        case 4: {
                            string email;
                            cout << "Digite o e-mail: ";
                            cin >> email;
                            usuario.addEmail(email);
                            break;
                        }
                        case 5:{
                            string email;
                            cout << "Digite um novo e-mail: ";
                            cin >> email;
                            usuario.addEmail(email);
                            break;
                        }
                        case 6:{
                            string password;
                            cout << "Digite sua senha: ";
                            cin >> password;
                            usuario.addPassword(password);
                            break;
                        }
                        case 7:{
                            string new_password;
                            string old_password;
                            cout << "Digite sua antiga senha: ";
                            cin >> old_password;
                            cout << "Digite a nova senha: ";
                            cin >> new_password;
                            usuario.changePassword(old_password , new_password);
                            break;
                        }
                        case 8:{
                            int cc;
                            cout << "Digite o número do cartão de crétido: ";
                            usuario.addCredit_Card(cc);
                            break;
                        } 
                        case 9:{
                            usuario.checkTickets();
                            break;
                        }
                        
                       //case 10:{
                        //}

                        case 11:{
                            usuario.perfil();
                            break;
                        }
                        case 0:
                            cout << "Voltando ao menu principal." << endl;
                            break;
                        default:
                            cout << "Opção inválida. Tente novamente." << endl;
                    }
                }
                break;
            }
        case 0:{
                cout << "Saindo do programa. Obrigado!" << endl;
                return 0;
                }
        default:{
                cout << "Opção inválida. Tente novamente." << endl;
          }
        }
      }
        return 0;
    }
    

