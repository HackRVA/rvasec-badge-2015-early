#include "SpriteMaker.h"

//void* construct_spriteMaker15(struct BadgeState *b_state)
CONSTRUCT_PROTO(spriteMaker)
{
    // Zero out and set other defaults
    initBadgeState(b_state);
    
    b_state->state_handler = spriteMaker15;

    b_state->onEnter       = spriteMaker15_onEnter;
    b_state->onExit        = spriteMaker15_onExit;
    
    return 0;
}

HANDLER_PROTO(spriteMaker)
//void* spriteMaker15(struct BadgeState *b_state)
{
    return 0;
}

ON_ENTER_PROTO(spriteMaker)
//void* spriteMaker15_onEnter(struct BadgeState *b_state)
{
    LCDClear();
    return 0;
}


ON_EXIT_PROTO(spriteMaker)
//void* spriteMaker15_onExit(struct BadgeState *b_state)
{

    return 0;
}