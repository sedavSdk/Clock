#include "Alarm_clock.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Alarm_clock::running() {
	if (alarm_time <= now_time) {
		now_time += wind_up_time;
		if (now_time >= T) now_time -= T;
		if (now_time >= alarm_time) {
			alarm();
			alarm_time = T + 1;
		}
	}
	else {
		now_time += wind_up_time;
		if (now_time > alarm_time and alarm_time < T) {
			alarm();
			alarm_time = T + 1;
		}
		if (now_time >= T) now_time -= T;
	}
};

int Alarm_clock::time_to_sec(int hour, int min, int sec) {
	return hour * 60 * 60 + min * 60 + sec;
};

void Alarm_clock::alarm() {
	cout << setfill('0') << setw(2) << alarm_time / 3600 << ':' << setfill('0') << setw(2) << alarm_time % 3600 / 60 << ':' << setfill('0') << setw(2) << alarm_time % 60 << " alarm" << '\n';
};

Alarm_clock::Alarm_clock() {
	now_time = 0;
	alarm_time = T + 1;
	wind_up_time = 0;
};

Alarm_clock::Alarm_clock(int hour, int min, int sec) {
	this->now_time = time_to_sec(hour, min, sec);
	alarm_time = T + 1;
	wind_up_time = 0;
};

void Alarm_clock::wind_up(int time) {
	wind_up_time = time;
	if(wind_up_time != 0) running();
};

void Alarm_clock::set_alarm_time(int hour, int min, int sec) {
	this->alarm_time = time_to_sec(hour, min, sec);
};

void Alarm_clock::get_time() {
	cout << setfill('0') << setw(2) << now_time / 3600 << ':' << setfill('0') << setw(2) << now_time % 3600 / 60 << ':' << setfill('0') << setw(2) << now_time % 60 << " now" << '\n';
};