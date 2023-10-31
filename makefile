BUILD:
	./main
COMPILE: FLIGHT FLIGHTS
	g++ teste.cpp Flight.o FlightS.o -o main
FLIGHTS: src/FlightS.h FlightS.cpp src/Flight.h Flight.cpp
	g++ -c src/FlightS.h; g++ -c FlightS.cpp
FLIGHT: src/Flight.h Flight.cpp
	g++ -c src/Flight.h; g++ -c Flight.cpp



