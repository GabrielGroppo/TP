ALL: COMPILAR

EXECUTAR: 
	./main

COMPILAR: USER FLIGHTS FLIGHT MAIN USER_MANAGER
	g++ Flight.o FlightManager.o User.o main.o UserManager.o -o main 

MAIN: main.cpp USER USER_MANAGER FLIGHT FLIGHTS
	g++ -c main.cpp -I src

USER_MANAGER: build/UserManager.cpp src/UserManager.h USER
	g++ -c build/UserManager.cpp -I src

USER: build/User.cpp src/User.h FLIGHTS
	g++ -c build/User.cpp -I src

FLIGHTS: build/FlightManager.cpp src/FlightManager.h FLIGHT
	g++ -c build/FlightManager.cpp -I src

FLIGHT: build/Flight.cpp src/Flight.h
	g++ -c build/Flight.cpp -I src

CLEAN:
	rm *.o
	rm main