#include <stdio.h>
#include <stdbool.h>

#include "SDL2/SDL.h"

#include "Render.h"
#include "Entity.h"
#include "Texture.h"


int main(void)
{

    if ( !init() )
        printf( "Failed to initialize! \n");
    else
        game();

    return 0;
}