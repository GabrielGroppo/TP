ALL: COMPILAR

EXECUTAR: 
	./main

COMPILAR: USER FLIGHTS FLIGHT INTERATIVO
	g++ Flight.o FlightManager.o User.o interativo.o -o main -g

INTERATIVO: interativo.cpp USER
	g++ -c interativo.cpp -I src	

USER: build/User.cpp src/User.h FLIGHTS
	g++ -c build/User.cpp -I src

FLIGHTS: build/FlightManager.cpp src/FlightManager.h FLIGHT
	g++ -c build/FlightManager.cpp -I src

FLIGHT: build/Flight.cpp src/Flight.h
	g++ -c build/Flight.cpp -I src

CLEAN:
	rm *.o
	rm main



