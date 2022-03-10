#ifndef ennemi_H_INCLUDED
#define ennemi_H_INCLUDED


#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <stdbool.h>
#include <math.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include "perso.h"
typedef enum STATE STATE;
enum STATE{WAITING ,FOLLOWING, ATTACKING};

typedef struct 
{
	SDL_Surface *image[4][4]; 
	int speed;
	int dir;
	int num;
	int attack;
	SDL_Rect pos;
	STATE state; 
	int level;
	int etat_vie;
	int collision;
	int vie;
}ennemi;


void initEnnemi(ennemi *e);
void afficherEnnemi(ennemi e, SDL_Surface *screen);
void deplacerEnnemi(ennemi *e);
void animerEnnemi(ennemi *e);
int collisionBb(Personne p, ennemi e);
int collisionBB(SDL_Rect posp, SDL_Rect pose);
void updateEnnemi(ennemi *e,Personne p);
void deplacerIA(ennemi *e);
void libererennemi(ennemi e);

#endif
