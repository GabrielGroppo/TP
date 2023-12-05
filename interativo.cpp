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
    cout << "-> 2. Perfil do usuário" << endl;
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
    cout << "-> 10. Comprar ticket" << endl;
    cout << "-> 11. Cancelar ticket" << endl;
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
try{
        switch (choice) {
                case 1:{
                    Sistema.showFlights();
                    break;
                }
                case 2: {
                    
                    while (profileChoice != 0) {
                        displayProfileMenu();
                        cin >> profileChoice;
                        cout << endl;
try{
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
                                cin >> cc;
                                usuario.addCredit_Card(cc);
                                break;
                            } 
                            case 9:{
                                usuario.checkTickets();
                                break;
                            }
                            
                            case 10:{
                                int code;
                                cout << "Digite o código do vôo desejado: ";
                                cin >> code;
                                    if(code < 1 || code > 50)throw 1;
                                    else{
                                        Flight aux = Sistema.returnFlight(code);
                                            aux.printseats();
                                                cout << "Escolha seu assento: ";
                                                int seat;
                                                cin >> seat;
                                                    usuario.buyTicket(code, seat, Sistema);
                                                cout << "Compra realizada com sucesso!" << endl;    
                                    }
                                break;
                            }
                            case 11:{
                                int code;
                                cout << "Digite o código do vôo que deseje cancelar: ";
                                cin >> code;
                                    if(usuario.verificar_Ticket(code) == 1){
                                        ticket aux = usuario.return_ticket(code);
                                        usuario.cancelTicket(code, aux.seat, Sistema);
                                        cout << "Passagem cancelada" << endl;
                                    } 
                                    if(usuario.verificar_Ticket(code) != 1)throw 2;
                                break;
                            }
                            case 0:
                                cout << "Voltando ao menu principal." << endl;
                                break;
                            default:
                                throw 3;
                        }
                    }
                    catch ( int e){
     if (e == 1) {
         cout << "Esse vôo não existe!" << endl;
}
    else if (e == 2 ){
cout << "Você não possui passagens para esse vôo!" << endl;
    }
    else if( e == 3){
        cout << "Opção inválida. Tente novamente." << endl;
    }
}
                    }
                    break;
                }
                case 0:{
                        cout << "Saindo do programa. Obrigado!" << endl;
                        return 0;
                }
                default:{
                       throw 3;
                }
        }
}

catch ( int e){
if( e == 3){
        cout << "Opção inválida. Tente novamente." << endl;
        }
    }
}

    return 0;
}

    

