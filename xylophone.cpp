#include"xylophone.h"

Xylo::Xylo()
{
    Mix_Init(MIX_INIT_MP3);
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);

    //Load Music

    a = Mix_LoadMUS("xylo.wav/a.wav");
    b = Mix_LoadMUS("xylo.wav/b.wav");
    c = Mix_LoadMUS("xylo.wav/c.wav");
    d = Mix_LoadMUS("xylo.wav/d.wav");
    e = Mix_LoadMUS("xylo.wav/e.wav");
    f = Mix_LoadMUS("xylo.wav/f.wav");
    g = Mix_LoadMUS("xylo.wav/g.wav");

}

void Xylo::playXylo(Mix_Music* music)
{
    Mix_PlayMusic(music,0);
    SDL_Delay(300);
}

void Xylo::xyloController(SDL_Event event)
{
    switch(event.key.keysym.sym)
    {
        case(SDLK_a):
            playXylo(a);
            break;
        case(SDLK_b):
            playXylo(b);
            break;
        case(SDLK_c):
            playXylo(c);
            break;
        case(SDLK_d):
            playXylo(d);
            break;
        case(SDLK_e):
            playXylo(e);
            break;
        case(SDLK_f):
            playXylo(f);
            break;
        case(SDLK_g):
            playXylo(g);
            break;
    }
}

Xylo::~Xylo()
{

    Mix_FreeMusic(a);
    Mix_FreeMusic(b);
    Mix_FreeMusic(c);
    Mix_FreeMusic(d);
    Mix_FreeMusic(e);
    Mix_FreeMusic(f);
    Mix_FreeMusic(g);

    Mix_CloseAudio();
    Mix_Quit();
}
