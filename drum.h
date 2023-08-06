#ifndef DRUM_H_INCLUDED
#define DRUM_H_INCLUDED

#include<iostream>
#include<SDL.h>
#include<SDL_mixer.h>

class  Drum
{
private:
    //Mix_Music Decelaration
    Mix_Music* q;
    Mix_Music* w;
    Mix_Music* e;
    Mix_Music* r;
    Mix_Music* t;
    Mix_Music* y;
    Mix_Music* a;
    Mix_Music* s;
    Mix_Music* d;
    Mix_Music* f;
    Mix_Music* k;
    Mix_Music* g;
    Mix_Music* h;


public:
    Drum();
    ~Drum();
    void playDrum(Mix_Music *music);
    void drumController(SDL_Event event);
};



#endif // DRUM_H_INCLUDED
