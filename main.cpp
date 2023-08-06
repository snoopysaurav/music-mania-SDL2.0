#include<iostream>
#include<SDL.h>
#include<SDL_image.h>
#include<SDL_mixer.h>
#include"piano.h"
#include"drum.h"
#include"xylophone.h"

const int SCREEN_WIDTH = 1290;
const int SCREEN_HEIGHT = 500;

Piano piano;
Drum drum;
Xylo xylo;

int main(int argc, char* argv[]) {
    // Initialize SDL and SDL Mixer
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);

    SDL_Window* window = SDL_CreateWindow("Music Mania", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, 0);

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    SDL_Surface* pianoSurface = IMG_Load("assets/Background-Piano.png");
    SDL_Surface* drumSurface = IMG_Load("assets/Background-Drum.png");
    SDL_Surface* xylophoneSurface = IMG_Load("assets/Background-Xylophone.png");
    SDL_Surface* backgroundSurface = IMG_Load("assets/Background.png");

    SDL_Texture* pianoTexture = SDL_CreateTextureFromSurface(renderer,pianoSurface);
    SDL_Texture* drumTexture = SDL_CreateTextureFromSurface(renderer,drumSurface);
    SDL_Texture* xylophoneTexture = SDL_CreateTextureFromSurface(renderer,xylophoneSurface);
    SDL_Texture* backgroundTexture = SDL_CreateTextureFromSurface(renderer,backgroundSurface);

    SDL_FreeSurface(pianoSurface);
    SDL_FreeSurface(drumSurface);
    SDL_FreeSurface(xylophoneSurface);
    SDL_FreeSurface(backgroundSurface);

    SDL_RenderCopy(renderer,backgroundTexture,0,0);
    // Event loop
    SDL_Event event; // event for main window & mouse controller
    bool quit = false;
    bool pianoActive = false;
    bool drumActive = false;
    bool xyloActive = false;
    bool backgroundActive = true;

    // --------- Window 1 -------
    while (!quit) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = true;
                SDL_Quit();
            }
            else if(event.type == SDL_MOUSEBUTTONDOWN)
            {
                if(event.button.button == SDL_BUTTON_LEFT)
                {
                    if(event.motion.x > 30 && event.motion.x < 180 && event.motion.y > 30 && event.motion.y < 180)
                    {
                        pianoActive = true;
                        drumActive = false;
                        xyloActive = false;
                        backgroundActive = false;
                        SDL_RenderCopy(renderer,pianoTexture,0,0);
                    }
                    else if(event.motion.x > 200 && event.motion.x < 350 && event.motion.y > 30 && event.motion.y < 180)
                    {
                        pianoActive= false;
                        drumActive = true;
                        xyloActive = false;
                        backgroundActive = false;
                        SDL_RenderCopy(renderer,drumTexture,0,0);
                    }
                    else if(event.motion.x > 380 && event.motion.x < 520 && event.motion.y > 30 && event.motion.y < 180)
                    {
                        pianoActive = false;
                        drumActive = false;
                        xyloActive = true;
                        backgroundActive = false;
                        SDL_RenderCopy(renderer,xylophoneTexture,0,0);
                    }
                    else if(event.motion.x > 550 && event.motion.x < 700 && event.motion.y>30 && event.motion.y < 180)
                    {
                        pianoActive = false;
                        drumActive=false;
                        xyloActive = false;
                        backgroundActive = true;
                        SDL_RenderCopy(renderer,backgroundTexture,0,0);
                    }
                }
            }
                else if(event.type == SDL_KEYDOWN && pianoActive)
                {
                    piano.pianoController(event);
                }
                else if(event.type == SDL_KEYDOWN && drumActive)
                {
                    drum.drumController(event);
                }
                else if(event.type == SDL_KEYDOWN && xyloActive)
                {
                    xylo.xyloController(event);
                }
                else if(event.type == SDL_KEYDOWN && backgroundActive)
                {
                    if(event.key.keysym.sym == SDLK_SPACE)
                    {
                        pianoActive = true;
                        drumActive = false;
                        xyloActive = false;
                        SDL_RenderCopy(renderer,pianoTexture,0,0);

                    }

                }
        }

    SDL_RenderPresent(renderer);
    }


    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}

