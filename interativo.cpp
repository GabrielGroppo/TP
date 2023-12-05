#include<iostream>
#include "Flight.h"
#include "FlightManager.h"
#include "UserManager.h"
#include "User.h"
#include<vector>
#include<string>
    using std::endl; 
    using std::cout; 
    using std::cin;
    using std::cout;

void displayMenu() {
  
    cout << "  Aproveite nossas ofertas de passagens aéreas e programe toda a sua viagem com a X. Aqui você vai encontrar diversas opções de voos para diversos lugares e com as melhores companhias aéreas nacionais e internacionais. Consulte todas as disponibilidades e realize sua compra de maneira fácil, rápida e sem precisar sair de casa. Além das melhores tarifas, na X você encontra dicas para deixar sua viagem ainda mais completa. Não perca tempo, reserve agora mesmo sua passagem e embarque nessa nova aventura. Reserve suas passagens no maior e melhor sistema de reservas de passagens! Planejar sua próxima viagem nunca foi tão fácil!" << endl << endl;
  
    cout << "-> 1. Visualizar voos disponíveis" << endl;
    cout << "-> 2. Login/Cadastro" << endl;
    cout << "-> 0. Sair" << endl;
    cout << "Escolha uma opção: ";
}

void displayProfileMenuUsing() {
  
    cout << "  Altere seu perfil.Acompanhe preços, organize planos de viagem e acesse ofertas e experiências exclusivas com sua conta. Assim fica muito mais fácil!" << endl << endl;
  
    cout << "-> 1. Alterar nome" << endl;
    cout << "-> 2. Alterar e-mail" << endl;
    cout << "-> 3. Alterar senha" << endl;
    cout << "-> 4. Visualizar tickets" << endl;
    cout << "-> 5. Comprar ticket" << endl;
    cout << "-> 6. Cancelar ticket" << endl;
    cout << "-> 7. Visualizar seu perfil" << endl;
    cout << "-> 0. Voltar ao menu principal" << endl;
    cout << "Escolha uma opção: ";
}


int main() {
    FlightManager Sistema;
    UserManager SistemadeUsuario(Sistema);
    //user *usuario;

    int choice = -1; // Inicializando com um valor diferente de 0
    while (choice != 0) {
        displayMenu();
        cin >> choice;
        cout << endl;
        int profileChoice = -1;
try{
        switch (choice) {
            case 1:
                Sistema.showFlights();
                break;

                case 2: {
                    user starter;
                    user *usuario=&starter;
                    bool login_choice = false;
                    cout << "escolha se quer logar(1) ou cadastrar uma nova conta(0):";
                    cin >> login_choice;
                    cout << endl;
                        if(login_choice){   //LOGIN
                        bool check=true;
                        while(1){
                            string name;
                            cout << "Digite o nome do usuario: ";
                            cin >> name;
                            cout << endl;
                            if(SistemadeUsuario.validName(name)){
                                 cout <<"insira nome valido"<< endl;
                                continue;
                            }
                            string password;
                            cout << "Digite sua senha: ";
                            cin >> password;
                            cout << endl;
                            if(!SistemadeUsuario.validPasword(name,password)){
                                 cout <<"insira senha incorreta"<< endl;
                                continue;
                            }
                            usuario=&SistemadeUsuario.returnUser(name,password);
                            break;
                          }
                        }
                        else{   //CADASTRO
                        cout<< "por favor insira os dados requisitados"<<endl;
                        bool check=true;
                        string name;
                        while(1){
                            cout << "Digite o nome: ";
                            cin >> name;
                            cout << endl;
                            if(SistemadeUsuario.validName(name)){
                               usuario->addName(name);
                               break;
                            }else{
                                cout << "Nome de usuario invalido" << endl;
                            }
                        }
                        /*while(1){
                            long int cpf;
                            cout << "Adicione o CPF: ";
                            cin >> cpf;
                            cout << endl;
                            if(SistemadeUsuario.validCpf(cpf)){
                               usuario->addCpf(cpf);
                               break;
                            }else{
                                cout << "cpf invalido" << endl;
                            }
                        }*/
                            int cpf;
                            cout << "Adicione o CPF: ";
                            cin >> cpf;
                            cout << endl;
                            usuario->addCpf(cpf);
                            string email;
                            cout << "Digite um e-mail: ";
                            cin >> email;
                            cout << endl;
                            usuario->addEmail(email);

                            string password;
                            cout << "Digite sua senha: ";
                            cin >> password;
                            cout << endl;
                            usuario->addPassword(password);


                            int cc;
                            cout << "Digite o numero do cartao de credito: ";
                            cin >> cc;
                            cout << endl;
                            usuario->addCredit_Card(cc);
                        SistemadeUsuario.addUser(*usuario);
                        usuario=&SistemadeUsuario.returnUser(name,password);
                        
                        }
                while (profileChoice != 0) {
                    displayProfileMenuUsing();
                    cin >> profileChoice;
                    cout << endl;
try{
                    switch (profileChoice) {
                        case 1: {
                            string name;
                            cout << "Digite um novo nome: ";
                            cin >> name;
                            usuario->changeName(name);
                            cout<<endl<<endl;
                            break;
                        }
                        case 2:{
                            string email;
                            cout << "Digite um novo e-mail: ";
                            cin >> email;
                            usuario->changeEmail(email);
                            cout<<endl<<endl;
                            break;
                        }
                        case 3:{
                            string new_password;
                            string old_password;
                            cout << "Digite sua antiga senha: ";
                            cin >> old_password;
                            cout << "Digite a nova senha: ";
                            cin >> new_password;
                            usuario->changePassword(old_password , new_password);
                            cout<<endl<<endl;
                            break;
                        }
                        case 4:{
                            usuario->checkTickets();
                            cout<<endl<<endl;
                            break;
                        }
                        case 5:{
                            Sistema.showFlights();
                            int codigo;
                            int assento;
                            cout<<"selecione seu voo pelo codigo:";
                            cin>>codigo;
                            cout<<endl;
                            if(codigo>=1&&codigo<=Sistema.manyFlights()){
                                Flight &flightaux=Sistema.returnFlight(codigo);
                                flightaux.printseats();
                                cout<<"selecione um assento pelo número:";
                                cin>>assento;
                                cout<<endl;
                                if(assento>=1&&codigo<=flightaux.flightSize()&&!flightaux.seatCheck(assento)){
                                    usuario->buyTicket(codigo,assento,Sistema);
                                }else{
                                    throw 1;
                                    
                                }
                               
                            }else{
                                throw 2;
                                
                            }
                            cout<<endl<<endl;
                            break;
                        }                        
                        case 6:{
                            usuario->checkTickets();
                            int codigo;
                            int assento;
                            cout<<"selecione o voo que quer cancelar pelo codigo:";
                            cin>>codigo;
                            cout<<endl;
                            if(codigo>=1&&codigo<=Sistema.manyFlights()){
                                Flight &flightaux=Sistema.returnFlight(codigo);
                                cout<<"selecione um assento pelo número:";
                                cin>>assento;
                                cout<<endl;
                                if(assento>=1&&codigo<=flightaux.flightSize()&&flightaux.seatCheck(assento)){
                                    usuario->cancelTicket(codigo,assento,Sistema);
                                }else{
                                    throw 1;
                                    
                                }
                               
                            }else{
                                throw 2;
                               
                            }
                            cout<<endl<<endl;
                            break;
                        }
                        case 7:{
                            usuario->perfil();
                            cout<<endl<<endl;
                            break;
                        }
                        case 0:
                            cout << "Voltando ao menu principal." << endl;
                            break;
                        default:{
                            throw 3;
                        }
                           
                    }
}

catch ( int e){
    if (e == 1){
cout<<"---insira um assento valido, retornando ao sistema do perfil---"<<endl;
    }
    else if (e == 2){
cout<<"---insira um codigo de voo valido, retornando ao sistema do perfil---"<<endl; 
    }
    else if (e == 3){
 cout << "---Opção inválida. Tente novamente.---" << endl;
    }
}






                }
                break;
            }
        case 0:{
                cout << "Saindo do programa. Obrigado!" << endl;
                break;
                }
        default:{
            throw 3;
                
          }
        }
      }
      catch ( int e){
if( e == 3){
        cout << "---Opção inválida. Tente novamente.---" << endl;
        }
    }
    }
        SistemadeUsuario.UpdatePassenger();
        return 0;
    }

