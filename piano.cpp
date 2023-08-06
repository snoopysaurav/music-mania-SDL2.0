#include"piano.h"

// Constructor
Piano::Piano()
{
    Mix_Init(MIX_INIT_MP3);
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);

    //Load Music
    k1 = Mix_LoadMUS("piano.mp3/A0.mp3");
    k2 = Mix_LoadMUS("piano.mp3/A1.mp3");
    k3 = Mix_LoadMUS("piano.mp3/A2.mp3");
    k4 = Mix_LoadMUS("piano.mp3/A3.mp3");
    k5 = Mix_LoadMUS("piano.mp3/A4.mp3");
    k6 = Mix_LoadMUS("piano.mp3/A5.mp3");
    k7 = Mix_LoadMUS("piano.mp3/A6.mp3");
    k8 = Mix_LoadMUS("piano.mp3/Ab1.mp3");
    k9 = Mix_LoadMUS("piano.mp3/Ab2.mp3");
    k0 = Mix_LoadMUS("piano.mp3/Ab3.mp3");

    q = Mix_LoadMUS("piano.mp3/Ab4.mp3");
    w = Mix_LoadMUS("piano.mp3/Ab5.mp3");
    e = Mix_LoadMUS("piano.mp3/Ab6.mp3");
    r = Mix_LoadMUS("piano.mp3/Ab7.mp3");
    t = Mix_LoadMUS("piano.mp3/B0.mp3");
    y = Mix_LoadMUS("piano.mp3/B1.mp3");
    u = Mix_LoadMUS("piano.mp3/B2.mp3");
    i = Mix_LoadMUS("piano.mp3/B3.mp3");
    o = Mix_LoadMUS("piano.mp3/B4.mp3");
    p = Mix_LoadMUS("piano.mp3/B5.mp3");

    a = Mix_LoadMUS("piano.mp3/B6.mp3");
    s = Mix_LoadMUS("piano.mp3/B7.mp3");
    d = Mix_LoadMUS("piano.mp3/Bb1.mp3");
    f = Mix_LoadMUS("piano.mp3/Bb2.mp3");
    g = Mix_LoadMUS("piano.mp3/Bb3.mp3");
    h = Mix_LoadMUS("piano.mp3/Bb4.mp3");
    j = Mix_LoadMUS("piano.mp3/Bb5.mp3");
    k = Mix_LoadMUS("piano.mp3/Bb6.mp3");
    l = Mix_LoadMUS("piano.mp3/Bb7.mp3");

    z = Mix_LoadMUS("piano.mp3/C1.mp3");
    x = Mix_LoadMUS("piano.mp3/C2.mp3");
    c = Mix_LoadMUS("piano.mp3/C3.mp3");
    v = Mix_LoadMUS("piano.mp3/C4.mp3");
    b = Mix_LoadMUS("piano.mp3/C5.mp3");
    n = Mix_LoadMUS("piano.mp3/C6.mp3");
    m = Mix_LoadMUS("piano.mp3/C7.mp3");

}
void Piano::playPiano(Mix_Music* music)
{
    Mix_PlayMusic(music,0);
    SDL_Delay(300);

}
void Piano::pianoController(SDL_Event event)
{
     //Piano Controllers
            switch(event.key.keysym.sym)
            {
                case(SDLK_1):
                    playPiano(k1);
                    break;
                case(SDLK_2):
                    playPiano(k2);
                    break;
                case(SDLK_3):
                    playPiano(k3);
                    break;
                case(SDLK_4):
                    playPiano(k4);
                    break;
                case(SDLK_5):
                    playPiano(k5);
                    break;
                case(SDLK_6):
                    playPiano(k6);
                    break;
                case(SDLK_7):
                    playPiano(k7);
                    break;
                case(SDLK_8):
                    playPiano(k8);
                    break;
                case(SDLK_9):
                    playPiano(k9);
                    break;
                case(SDLK_0):
                    playPiano(k0);
                    break;
                case(SDLK_q):
                    playPiano(q);
                    break;
                case(SDLK_w):
                    playPiano(w);
                    break;
                case(SDLK_e):
                    playPiano(e);
                    break;
                case(SDLK_r):
                    playPiano(r);
                    break;
                case(SDLK_t):
                    playPiano(t);
                    break;
                case(SDLK_y):
                    playPiano(y);
                    break;
                case(SDLK_u):
                    playPiano(u);
                    break;
                case(SDLK_i):
                    playPiano(i);
                    break;
                case(SDLK_o):
                    playPiano(o);
                    break;
                case(SDLK_p):
                    playPiano(p);
                    break;
                case(SDLK_a):
                    playPiano(a);
                    break;
                case(SDLK_s):
                    playPiano(s);
                    break;
                case(SDLK_d):
                    playPiano(d);
                    break;
                case(SDLK_f):
                    playPiano(f);
                    break;
                case(SDLK_g):
                    playPiano(g);
                    break;
                case(SDLK_h):
                    playPiano(h);
                    break;
                case(SDLK_j):
                    playPiano(j);
                    break;
                case(SDLK_k):
                    playPiano(k);
                    break;
                case(SDLK_l):
                    playPiano(l);
                    break;
                case(SDLK_z):
                    playPiano(z);
                    break;
                case(SDLK_x):
                    playPiano(x);
                    break;
                case(SDLK_c):
                    playPiano(c);
                    break;
                case(SDLK_v):
                    playPiano(v);
                    break;
                case(SDLK_b):
                    playPiano(b);
                    break;
                case(SDLK_n):
                    playPiano(n);
                    break;
                case(SDLK_m):
                    playPiano(m);
                    break;
     }

}
// Destructor
Piano::~Piano()
{
    Mix_FreeMusic(k1);
    Mix_FreeMusic(k2);
    Mix_FreeMusic(k3);
    Mix_FreeMusic(k4);
    Mix_FreeMusic(k5);
    Mix_FreeMusic(k6);
    Mix_FreeMusic(k7);
    Mix_FreeMusic(k8);
    Mix_FreeMusic(k9);
    Mix_FreeMusic(k0);

    Mix_FreeMusic(q);
    Mix_FreeMusic(w);
    Mix_FreeMusic(e);
    Mix_FreeMusic(r);
    Mix_FreeMusic(t);
    Mix_FreeMusic(y);
    Mix_FreeMusic(u);
    Mix_FreeMusic(i);
    Mix_FreeMusic(o);
    Mix_FreeMusic(p);

    Mix_FreeMusic(a);
    Mix_FreeMusic(s);
    Mix_FreeMusic(d);
    Mix_FreeMusic(f);
    Mix_FreeMusic(g);
    Mix_FreeMusic(h);
    Mix_FreeMusic(j);
    Mix_FreeMusic(k);
    Mix_FreeMusic(l);

    Mix_FreeMusic(z);
    Mix_FreeMusic(x);
    Mix_FreeMusic(c);
    Mix_FreeMusic(v);
    Mix_FreeMusic(b);
    Mix_FreeMusic(n);
    Mix_FreeMusic(m);

    Mix_CloseAudio();
    Mix_Quit();
}



