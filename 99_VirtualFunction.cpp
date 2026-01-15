#include <iostream>
using namespace std;

class Media {
public:
    virtual void play() { cout << "Playing generic media" << endl; }
};

class MP3 : public Media {
public:
    void play() { cout << "Playing MP3 file" << endl; }
};

int main() {
    Media* m = new MP3();
    m->play();
    delete m;
    return 0;
}