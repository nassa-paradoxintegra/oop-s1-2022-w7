#ifndef MUSICIAN_H
#define MUSICIAN_H
using namespace std;

class Musician {
    public:
        Musician();
        Musician(string pexperience, string pinstrument);
        int experience;
        string instrument;

    void get_instrument(int seatNum);
    void get_experience(int seatNum);

        ~Musician();
}