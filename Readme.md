 TP: Sistema de Passagens aéreas



 
 • Descrição:
	X é um sistema de reserva de passagens aéreas que permite oferecer aos usuários a capacidade de pesquisar, selecionar e reservar voos para destinos diversos. Além disso, ele também possui funcionalidade de cadastro, login e edição do perfil dos usuários, o que promove facilidade para utilizações futuras. Seu principal objetivo é permitir que a execução de todas essas tarefas seja feita de forma eficaz e intuitiva.

 •Requisitos do Projeto:
    - Perfil:
        O Sistema deve ser capaz de realizar o cadastro dos usuários e armazená-los dentro do sistema para poderem serem reutilizados pelos próprios usuários, além disso deve permitir a edição de informações pessoais caso seja necessário
    - Reserva:
	    O usuário deve ser capaz de selecionar voos, realizar a reserva de passagens, efetuar cancelamentos, alterar assento/classe 
    - Pagamento:
	    Permite ao usuário escolher a forma de pagamento desejável e realizar a operação.

 •Levantamento de Requisitos:
    - Requisitos Funcionais:
       * O sistema tem que ser capaz de cadastrar o usuário com os seguintes dados: nome, cpf, data de nascimento, número de telefone, email, nome de login, senha de login, endereço, nacionalidade, gênero.
       * Acessar e alterar os dados pessoais do usuário caso ele deseje
       * Selecionar os voos, classe e assento das passagens.
       * Poder alterar as passagens

   - Requisitos Não Funcionais:
      *  Ter muitas opções de voos
      *  Ter interface intuitiva e ser fácil de usar
      *  O código deve ser bem organizado e seguir boas práticas de programação.
      *  Efetuar/reembolsar pagamentos

 •Modelagem do Sistema:

Class User {
    • Atributos:
        - Name (string)
        - CPF   (Long int)
        - email (string)
        - password (string)
        - flight tickets (Flight)
        - CreditCard (long int)

    • Métodos:
        - User()
        - addName (string)
        - addCpf (long int)
        - addEmail(string)
        - addPassword (string)
        - checkTickets ()
        - cancelTicket (string flight, int hour, int minutes, int chair)
        - buyTicket (string origin, string destination, int hour, int min, int seat)
}

Class Flight{
    • Atributos:
        - Origin (string)
        - Destination (string)
        - Hour (int)
        - Minutes (int)
        - Price (double)
        - Seat (vector<int>)

    • Métodos:
        - addOrigin (string)
        - addDestination (string)
        - addTime (int hour, int minutes)
        - addPrice (double)
        - addSeat (Seat)
        - selectTicket (Seat seat)
        - buyTicket (User.Name, User.password, Seat seat, User.CreditCard)

}
