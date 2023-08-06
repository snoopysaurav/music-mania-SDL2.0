#ifndef PIANO_H_INCLUDED
#define PIANO_H_INCLUDED

#include<iostream>
#include<SDL.h>
#include<SDL_mixer.h>

class  Piano
{
private:
    //Mix_Music Decelaration
    Mix_Music* k1;
    Mix_Music* k2;
    Mix_Music* k3;
    Mix_Music* k4;
    Mix_Music* k5;
    Mix_Music* k6;
    Mix_Music* k7;
    Mix_Music* k8;
    Mix_Music* k9;
    Mix_Music* k0;

    Mix_Music* a;
    Mix_Music* b;
    Mix_Music* c;
    Mix_Music* d;
    Mix_Music* e;
    Mix_Music* f;
    Mix_Music* g;
    Mix_Music* h;
    Mix_Music* i;
    Mix_Music* j;
    Mix_Music* k;
    Mix_Music* l;
    Mix_Music* m;
    Mix_Music* n;
    Mix_Music* o;
    Mix_Music* p;
    Mix_Music* q;
    Mix_Music* r;
    Mix_Music* s;
    Mix_Music* t;
    Mix_Music* u;
    Mix_Music* v;
    Mix_Music* w;
    Mix_Music* x;
    Mix_Music* y;
    Mix_Music* z;

public:
    Piano();
    ~Piano();
    void playPiano(Mix_Music *music);
    void pianoController(SDL_Event event);
    void pianoKeyController();

};


#endif // PIANO_H_INCLUDED
