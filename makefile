ALL: COMPILAR

EXECUTAR: 
	./main

COMPILAR: USER FLIGHTS FLIGHT INTERATIVO
	g++ Flight.o FlightManager.o User.o interativo.o -o main -g

INTERATIVO: interativo.cpp USER
	g++ -c interativo.cpp -I src	

USER: build/User.cpp src/User.h FLIGHTS
	g++ -c buildE/User.cpp -I src

FLIGHTS: build/FlightS.cpp src/FlightManager.h FLIGHT
	g++ -c buildE/FlightManager.cpp -I src

FLIGHT: build/Flight.cpp src/Flight.h
	g++ -c buildE/Flight.cpp -I src

CLEAN:
	rm *.o
	rm main



