#include "chipmunk/chipmunk.h" 

#include "chipmunk/chipmunk_structs.h"

int main()
{
    cpSpace * space = cpSpaceNew();

    int size = sizeof(struct cpBody);

    cpBody * body1 = cpBodyNew(1, 1);

    cpSpaceAddBody(space, body1);

    cpSpaceAddShape(space, cpCircleShapeNew(body1, 5, cpv(0, 0)));

    cpBody * body2 = cpBodyNew(1, 1);

    cpSpaceAddBody(space, body2);

    cpSpaceAddShape(space, cpCircleShapeNew(body2, 5, cpv(0, 0)));

    cpSpaceStep(space, 0.1);

    cpSpaceRemoveBody(space, body2);
    cpBodyFree(body2);

    cpSpaceRemoveBody(space, body1);
    cpBodyFree(body1);


    cpSpaceFree(space);
    return 0;
}