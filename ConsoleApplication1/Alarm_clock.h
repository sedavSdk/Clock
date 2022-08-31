#pragma once
class Alarm_clock{
private:
	int now_time, alarm_time, wind_up_time;
	const int T = 86400; //секунд в дне
	void running();
	void alarm();
	int time_to_sec(int hour, int min, int sec);
public:
	Alarm_clock();
	Alarm_clock(int hour, int min, int sec);
	void wind_up(int time);
	void set_alarm_time(int hour, int min, int sec);
	void get_time();
};

