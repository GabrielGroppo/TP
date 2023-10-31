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
	-User(): O construtor da classe para criar um novo usuário.
	-addName (string): Permite adicionar  o nome do passageiro.
	-addCpf (long int): Permite adicionar o número do CPF do passageiro.
	-addEmail(string): Permite adicionar o e-mail do passageiro.
	-addPassword (string): Permite adicionar asenha do passageiro.
	-add CreditCard (long int): Permite adicionar o número do cartão de crédito do passageiro.
	-checkTickets(): Retorna informações sobre as passagens adquiridas pelo usuário.
	-cancelTicket (string flight, int hour, int minutes, int seat): Permite ao usuário cancelar uma passagem com base nas informações fornecidas.
	-buyTicket (string origin, string destination, int hour, int min, int seat): Permite ao usuário comprar uma passagem para um voo específico.


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
	-flight() (Construtor 1): Constrói um objeto Flight sem atribuir valores iniciais.
	-flight() (Construtor 2): Constrói um objeto Flight com informações de origem, destino, horário, preço e número de assentos.
	-addOrigin (string city, string country): Permite adicionar informações de origem ao voo.
	-origin(): Retorna as informações de origem do voo.
	-addDestination (string city, string country): Permite adicionar informações de destino ao voo.
	-destination(): Retorna as informações de destino do voo.
	-addTime (int hour, int minutes): Permite definir o horário de partida do voo.
	-time(): Retorna o horário de partida do voo.
	-addPrice (double): Define o preço da passagem para o voo.
	-price(): Retorna o preço da passagem.
	-addSeat (int q): Adiciona um assento específico em relação ao usuário
	-getSeat (int n): Obtém informações sobre um assento específico com base em seu número.
	-cancelSeat (int n): Marca um assento como cancelado no voo, distribuindo do usuário
	-seats(): Retorna o número total de assentos e a disponibilidade deles no voo.
 
•Classe Flights: 

•Atributos:
	-flights_ (vector<Flight>): Armazena um vetor de objetos Flight para representar uma coleção de voos.
 
•Métodos:
addFlight (Flight): Permite adicionar um objeto Flight à coleção de voos Flights.
