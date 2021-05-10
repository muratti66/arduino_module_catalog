#include <virtuabotixRTC.h>

#define RTC_ONE """PIN Number is HERE"""
#define RTC_TWO """PIN Number is HERE"""
#define RTC_THREE """PIN Number is HERE"""

virtuabotixRTC RTC(RTC_ONE, RTC_TWO, RTC_THREE);

void setup() {
    
    // Set the current date, and time in the following format:
    // seconds, minutes, hours, day of the week, day of the month, month, year
    // RTC.setDS1302Time(00, 19, 12, 6, 07, 5, 2021); // one shot time set
}

void loop() {
    
    RTC.updateTime();
    // Receive date time objects with the following codes : 
    // RTC.seconds RTC.minutes, RTC.hours, RTC.dayofweek, RTC.dayofmonth, RTC.month, RTC.year
}