# tarmrin_3
#include <stdio.h>
#include <windows.h>


int main() {
    printf("enter your age: ");
    int age;
    printf("enter your weight: ");
    int weight;
    scanf("%d",&age);
    scanf("%d",&weight);
    switch (weight) {
        case 20:
            switch (age) {
                case 60:
                    printf("ورزش دوساعت - کوه نوردی هفته ای یکبار- والیبال یا بسکتبال هفته ای دوبار");
                    break;
            }
            break;
        case 25:
            switch (age) {
                case 80:
                    printf("ورزش چهار ساعت - کوه نوردی هفته ای دوبار- تنیس هفته ای 3 ساعت -استخر هفته ای دو بار");
                    break;

            }
            break;
        case 30:
            switch (age) {
                case 60:
                    printf("ورزش روزی 1ساعت نیم - کوه نوردی هفته ای یکبار-استخر هفته ای دو بار -رژیم غدایی سبک");
                    break;
            }
            break;
        case 35:
            switch (age) {
                case 80:
                    printf("ورزش روزی 1ساعت نیم - کوه نوردی هفته ای یکبار-استخر هفته ای دو بار -رژیم غدایی سنگین");
                    break;
            }
            break;
        case 40:
            switch (age) {
                case 60:
                    printf("ورزش روزی 1ساعت  - کوه نوردی هفته ای سه بار-استخر هفته ای سه بار -پیاده روی هفته ای دو بار");
                    break;
            }
            break;
        case 45:
            switch (age) {
                case 80:
                    printf("ورزش روزی 1ساعت  - کوه نوردی هفته ای سه بار-استخر هفته ای سه بار -پیاده روی هروز");
                    break;
            }
            break;
        case 50:
            switch (age) {
                case 60:
                    printf("ورزش روزی 1ساعت  - نرمش هروز 1 ساعت-استخر هفته ای دو بار -پیاده روی هروز- رژیم غذایی متعادل");
                    break;
                case 80:
                    printf("ورزش روزی 1ساعت  - نرمش هروز 1 ساعت-استخر هفته ای دو بار -پیاده روی هروز- رژیم غذایی متعادل");
                    break;
            }
            break;
            default:
                printf("ورزش روزی 1ساعت  - نرمش هروز -استخر هفته ای دو بار -پیاده روی هروز-کوه نوردی هفته ای یکبار -رژیم غذایی متعادل");
                  break;


    }
}
