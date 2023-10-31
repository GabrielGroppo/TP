#include "flight.h"
#include "flightS.h"


Flight Flights::RetornaVoo(int codigo){
    auto it=flights_.begin();
    for(;it!=flights_.end();it++){
        if((*it).flightCheck(codigo)){
            break;
        }
    }
    return *it;
}