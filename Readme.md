 TP: Sistema de Passagens aéreas
 • Descrição:
	A criação de um site de reserva de passagens aéreas é um projeto que visa abordar uma necessidade crítica no setor de viagens e turismo. Com a crescente demanda por viagens aéreas em todo o mundo, a conveniência e a eficiência na reserva de passagens tornaram-se essenciais para viajantes e companhias aéreas. Este projeto busca resolver a complexidade e a inconveniência muitas vezes associadas ao processo de reserva de passagens aéreas. Assim sendo, X é um sistema de reserva de passagens aéreas que permite oferecer aos usuários a capacidade de pesquisar, selecionar e reservar voos para destinos diversos. Além disso, ele também possui funcionalidade de cadastro, login e edição do perfil dos usuários, o que promove facilidade para utilizações futuras. Seu principal objetivo é permitir que a execução de todas essas tarefas seja feita de forma eficaz e intuitiva. Por fim, a criação de um projeto de reserva de passagens aéreas é uma iniciativa que busca melhorar a experiência de viagem para os passageiros e fornecer um serviço eficiente e valioso, tendo o potencial de simplificar e aprimorar o processo de reserva de voos, tornando-o mais acessível e conveniente para todos os envolvidos.

 •Requisitos do Projeto:
	
    - Perfil:
        O Sistema deve ser capaz de realizar o cadastro dos usuários e armazená-los dentro do sistema para poderem serem reutilizados pelos próprios usuários, além disso deve permitir a edição de informações pessoais caso seja necessário. A criação de um perfil é vista como um requisito fundamental para o desenvolver do projeto, visto que proporciona agilidade nas reservas das passagens, onde as informações pessoais já estão salvas e podem ser utilizadas repetidas vezes, além de criar uma experiência mais agradável e simplificada aos clientes;
    - Reserva:
	O sistema de reservas deve possibilitar ao usuário selecionar voos, realizar a reserva de passagens e efetuar cancelamentos; 
    - Pagamento:
	    Permite ao usuário escolher a forma de pagamento desejável e realizar a operação.

 •Levantamento de Requisitos:
    - Requisitos Funcionais:
    
       * O sistema tem que ser capaz de cadastrar o usuário com os seguintes dados: nome, cpf, email, senha de login, cartão de crédito/débito
       * Acessar e alterar os dados pessoais do usuário caso ele deseje
       * Selecionar os voos, classe e assento das passagens.
       * Poder alterar as passagens

   - Requisitos Não Funcionais:
      *  Ter muitas opções de voos
      *  Ter interface intuitiva e ser fácil de usar
      *  O código deve ser bem organizado e seguir boas práticas de programação.
      *  Efetuar/reembolsar pagamentos

•Modelagem do Sistema:

Nesse projeto, vamos representar um sistema de reservas de passagens aéreas e seus atributos. Criaremos uma classe base chamada User, e em seguida, uma classe derivada Flight para lidar com diferentes tipos de passagens. Essa etapa é crucial, pois a classe User será fundamental para a gestão dos passageiros e suas informações pessoais, enquanto a classe Flight será responsável por armazenar informações sobre os voos disponíveis, bem como gerenciar as reservas de assentos. Agora, vejamos em detalhes como essas classes são estruturadas e por que são importantes no contexto do programa.

•Classe User:
A classe User é essencial para a representação e gerenciamento dos passageiros que utilizam o sistema de reservas de passagens aéreas. Além do mais, é importante porque armazena suas informações pessoais e permite que eles comprem, gerenciem e cancelem passagens aéreas. Ela é fundamental para garantir uma experiência de reserva de passagens eficiente e segura para os usuários.


•Atributos:

	-Name (string): Armazena o nome do passageiro.
	-Cpf (Long int): Guarda o número do Cadastro de Pessoa Física (CPF) do passageiro.
	-email (string): Mantém o endereço de e-mail do passageiro.
	-password (string): Armazena a senha do passageiro para autenticação.
	-flight tickets (Flight): Esta é uma associação com a classe Flight, permitindo que o usuário tenha informações sobre os voos em que comprou passagens.
	-CreditCard (long int): Armazena o número do cartão de crédito do passageiro, que é essencial para efetuar compras de passagens.
 
• Métodos:

	-User():Este é o construtor da classe user. Ele inicializa as variáveis de membro da classe, com valores padrão.
	-addName (string):  Permite que o usuário adicione um nome de usuário, desde que o nome atual esteja vazio. Se já existir um nome, exibe uma mensagem de erro.
 	-changeName (string): Permite que o usuário altere seu nome de usuário, desde que o nome atual não esteja vazio. Se não houver um nome de usuário definido, exibe uma mensagem de erro.
	-addCpf (long int): Permite que o usuário adicione um número de CPF, desde que o CPF atual ainda nãoesteja definido . Se já existir um CPF, exibe uma mensagem de erro.
	-addEmail(string):  Permite que o usuário adicione um endereço de e-mail, desde que o endereço de e-mail atual esteja vazio. Se já houver um endereço de e-mail, exibe uma mensagem de erro.
 	changeEmail( string): permite que o usuário altere seu endereço de e-mail, desde que o endereço de e-mail atual não esteja vazio. Se não houver um endereço de e-mail definido, exibe uma mensagem de erro.
	-addPassword (string): Esta função permite que o usuário adicione uma senha, desde que a senha atual esteja vazia. Se já existir uma senha, exibe uma mensagem de erro.
	-changePassword (string), string): Permite que o usuário altere sua senha, desde que haja uma senha definida. Ela verifica se a senha atual coincide com a senha fornecida e, se coincidir, atualiza a senha. Caso contrário, exibe uma mensagem de erro.
	-add CreditCard (long int): Permite que o usuário adicione um número de cartão de crédito, desde que o número de cartão de crédito atual aida não esteja definido. Se já houver um número de cartão de crédito, exibe uma mensagem de erro.
	-checkTickets():Exibe informações sobre cada bilhete disponível, como código do voo, origem, destino, horário, assento e preço.
	-cancelTicket (string flight, int hour, int minutes, int seat): Permite que um usuário cancele um bilhete para um voo. Verifica se o assento especificado está reservado pelo usuário e, se for o caso, remove o bilhete da lista de bilhetes do usuário. Caso contrário retorna "assento ocupado".
	-buyTicket (string origin, string destination, int hour, int min, int seat): Permite que um usuário compre um bilhete para um voo. Ele verifica se o assento desejado está disponível no voo especificado e, se estiver disponível, adiciona o bilhete à lista de bilhetes do usuário.Caso contrário retorna "assento ocupado".
	-return_ticket (int codigo_voo) : Retorna um ticket de um voo para auxiliar no cancelamento das passagens para o usuário.
	-verificar_ticket(int codigo_voo): verifica se um usuario possui a passagem no momento de cancelar passagens.

•Classe Flight:
A classe Flight é crucial para o gerenciamento de informações relacionadas aos voos disponíveis e às reservas de passagens. A classe é importante porque também representa a situação de cada voo detalhadamente. Ela desempenha um papel central no sistema de reservas, permitindo que os usuários visualizem voos disponíveis, reservem assentos e efetuem compras. Isso torna a classe Flight essencial para o funcionamento do programa de reservas de passagens aéreas.


•Atributos:

	-Origin (location): Representa a localização de origem do voo, com atributos city (cidade) e country (país).
	-Destination (location): Representa a localização de destino do voo, com atributos city (cidade) e country (país).
	-Hour (time): Representa o horário de partida do voo, com atributos hour (hora) e minutes (minutos).
	-Price (double): Armazena o preço da passagem para o voo.
	-Seats (int q): Armazena o número total de assentos disponíveis no voo.
	-Seat (vector<bool>): Mantém um vetor que rastreia a disponibilidade de cada assento no voo.
 
•Métodos:

	-flight() (Construtor 1): Este é o construtor da classe Flight que inicializa todas as variáveis de membro com valores padrão
	-flight() (Construtor 2): Este é um construtor sobrecarregado que permite criar um objeto Flight com valores específicos para todas as variáveis de membro. Ele inicializa os membros da classe com os valores fornecidos.
	-addOriginCity (string ): Permite adicionar uma cidade de origem ao objeto Flight, desde que a cidade de origem atual esteja vazia.
 	-addOriginCountry (string): Permite adicionar um país de origem ao objeto Flight, desde que o país de origem atual esteja vazio.
	-origin(): Retorna as informações de origem do voo.
	-addDestinationCity (string ):Permite adicionar uma cidade de destino ao objeto Flight, desde que a cidade de destino atual esteja vazia.
	-addDestinationCountry(string): Permite adicionar um país de destino ao objeto Flight, desde que a cidade de destino atual esteja vazia.
	-addTimeHour (int ): Permite definir o horário de partida do voo.
 	-addTimeMinute (int): Permite definir os minutos de partida do voo, desde que não estejam já definidos.
	-time(): Retorna o horário de partida do voo, desde que não estejam já definidos.
	-addPrice (double): Define o preço da passagem para o voo, desde que o preço atual esteja 0.
	-addSeat (int q): Adiciona um assento específico em relação ao usuário, desde que a quantidade atual de assentos seja 0. Também inicializa um vetor de assentos com os valores padrão.
	-seatCheck(int n, std::string name): Verifica se um assento específico está ocupado por um usuário com o nome especificado.
        -flightCheck(int codigo): Verifica se o código do voo corresponde ao código especificado.
	-returnPrice(): Retorna o preço do voo.
	-getSeat(int n, string): Permite a um usuário reservar um assento, desde que o assento esteja disponível.
	-cancelSeat(int n, string): Permite a um usuário cancelar a reserva de um assento, desde que o assento esteja ocupado pelo usuário especificado.
	-printseats():Retorna um vetor de inteiros que representa os assentos disponíveis no voo.
 
•Classe Flights: 

•Atributos:

	-flights_ (vector<Flight>): Armazena um vetor de objetos Flight para representar uma coleção de voos.
 
•Métodos:

	-RetornaVoo(int codigo): Essa função aceita um código de voo como argumento e procura na lista de voos representada por flights_. Ela procura na lista de voos, verificando se o código do voo corresponde ao código fornecido.Se encontrar um voo com o código correspondente,retorna esse voo.
