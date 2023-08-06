#ifndef XYLOPHONE_H_INCLUDED
#define XYLOPHONE_H_INCLUDED

#include<iostream>
#include<SDL.h>
#include<SDL_mixer.h>

class Xylo
{
private:
    //Mix_Music Decelaration
    Mix_Music* a;
    Mix_Music* b;
    Mix_Music* c;
    Mix_Music* d;
    Mix_Music* e;
    Mix_Music* f;
    Mix_Music* g;


public:
    Xylo();
    ~Xylo();
    void playXylo(Mix_Music *music);
    void xyloController(SDL_Event event);
};


#endif // XYLOPHONE_H_INCLUDED
