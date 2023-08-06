#include"drum.h"

Drum::Drum()
{
    Mix_Init(MIX_INIT_MP3);
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);

    //Load Music
    q = Mix_LoadMUS("drum.wav/q.wav");
    w = Mix_LoadMUS("drum.wav/w.wav");
    e = Mix_LoadMUS("drum.wav/e.wav");
    r = Mix_LoadMUS("drum.wav/r.wav");
    t = Mix_LoadMUS("drum.wav/t.wav");
    y = Mix_LoadMUS("drum.wav/y.wav");

    a = Mix_LoadMUS("drum.wav/a.wav");
    s = Mix_LoadMUS("drum.wav/s.wav");
    d = Mix_LoadMUS("drum.wav/d.wav");
    f = Mix_LoadMUS("drum.wav/f.wav");
    k = Mix_LoadMUS("drum.wav/k.wav");
    g = Mix_LoadMUS("drum.wav/g.wav");
    h = Mix_LoadMUS("drum.wav/h.wav");

}

void Drum::playDrum(Mix_Music* music)
{
    Mix_PlayMusic(music,0);
    SDL_Delay(300);
}

void Drum::drumController(SDL_Event event)
{
    switch(event.key.keysym.sym)
    {
        case(SDLK_q):
            playDrum(q);
            break;
        case(SDLK_w):
            playDrum(w);
            break;
        case(SDLK_e):
            playDrum(e);
            break;
        case(SDLK_r):
            playDrum(r);
            break;
        case(SDLK_t):
            playDrum(t);
            break;
        case(SDLK_y):
            playDrum(y);
            break;
        case(SDLK_a):
            playDrum(a);
            break;
        case(SDLK_s):
            playDrum(s);
            break;
        case(SDLK_d):
            playDrum(d);
            break;
        case(SDLK_f):
            playDrum(f);
            break;
        case(SDLK_g):
            playDrum(g);
            break;
        case(SDLK_h):
            playDrum(h);
            break;
        case(SDLK_k):
            playDrum(k);
            break;
    }
}

Drum::~Drum()
{
    Mix_FreeMusic(q);
    Mix_FreeMusic(w);
    Mix_FreeMusic(e);
    Mix_FreeMusic(r);
    Mix_FreeMusic(t);
    Mix_FreeMusic(y);

    Mix_FreeMusic(a);
    Mix_FreeMusic(s);
    Mix_FreeMusic(d);
    Mix_FreeMusic(f);
    Mix_FreeMusic(g);
    Mix_FreeMusic(h);
    Mix_FreeMusic(k);

    Mix_CloseAudio();
    Mix_Quit();
}

