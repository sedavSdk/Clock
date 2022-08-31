#include <iostream>
#include "Alarm_clock.h"

using namespace std;

int main(){
    setlocale(LC_ALL, 0);
    Alarm_clock clock(1, 5, 0);
    clock.get_time();
    clock.set_alarm_time(2, 10, 0);
    clock.wind_up(10000);
    clock.get_time();
    clock.wind_up(10000);
    clock.get_time();
    clock.wind_up(10000);
    clock.get_time();
    clock.wind_up(10000);
    clock.get_time();
    clock.wind_up(10000);
    clock.get_time();
    clock.wind_up(10000);
    clock.get_time();
    clock.wind_up(10000);
    clock.get_time();
    clock.wind_up(10000);
    clock.get_time();
    clock.set_alarm_time(0, 0, 1);
    clock.wind_up(10000);
    clock.get_time();
    clock.wind_up(10000);
    clock.get_time();
}

