#include <iostream>
using namespace std;

class Humidity;
class Temp {
    int t;
public:
    Temp(int val) : t(val) {}
    friend void checkWeather(Temp, Humidity);
};

class Humidity {
    int h;
public:
    Humidity(int val) : h(val) {}
    friend void checkWeather(Temp, Humidity);
};

void checkWeather(Temp t1, Humidity h1) {
    if(t1.t > 30 && h1.h > 80) cout << "Weather is uncomfortable";
    else cout << "Weather is fine";
}

int main() {
    Temp t(35); Humidity h(85);
    checkWeather(t, h);
    return 0;
}