#include "SpriteMaker.h"

void* spriteMaker15(struct BadgeState *b_state)
{return 0;
//    static unsigned char x = 20, y = 20;
//    static unsigned char leds = 0b00011000;
//    static unsigned char xor = 0x00;
//
//    char putPix = 0;
//    b_state->slide_handler(&b_state->slide_states);
//
//    //set_leds(b_state->slide_states.front.lower_loc);
//    char lr_swipe = b_state->slide_states.front.lr_swipe;
//    char bt_swipe = b_state->slide_states.front.bt_swipe;
//
//    if(lr_swipe > 0)
//    {
//        struct pix_buff buff;
//        buff.height = 4;
//        buff.width = 4;
//        unsigned char pix[4] = {0x00, 0x00, 0x00, 0x00};
//        buff.pixels = pix;
//
//        struct coord loc;
//        loc.x = 0;
//        loc.y = 0;
//
//        //draw_square(&buff, loc, 4, 4);
//
//        if(leds != 0x03)
//        {
//            leds >>= 1;
//            b_state->counter_1 = 0;
//        }
//
////        if(xor)
////            blitBuff(&buff, x, y);
//        //    putPixel(x,y,0);
//        x += 1;
//
//        putPix = 1;
//    }
//    else if (lr_swipe < 0)
//    {
//        if(leds != 0xC0)
//        {
//            leds <<= 1;
//
//            b_state->counter_1 = 0;
//        }
//        if(xor)
//            putPixel(x,y,0);
//        x -= 1;
//        putPix = 1;
//    }
//
//    if(bt_swipe > 0)
//    {
//        if(leds != 0x03)
//        {
//            leds >>= 1;
//            b_state->counter_1 = 0;
//        }
//        if(xor)
//            putPixel(x,y,0);
//        y -= 1;
//        putPix = 1;
//    }
//    else if (bt_swipe < 0)
//    {
//        if(leds != 0xC0)
//        {
//            leds <<= 1;
//
//            b_state->counter_1 = 0;
//        }
//        if(xor)
//            putPixel(x,y,0);
//        y += 1;
//        putPix = 1;
//    }
//
//    if(putPix)
//        putPixel(x, y, 1);
//
//    else if ( button_pressed == 250 )
//    {
//        LCDClear();
////        start_state.next_state = &start_state;
////        b_state->next_state = &start_state;
////        b_state->counter_2 = 0;
//    }
//
//    if(b_state->slide_states.bottom_hold_count > DEBOUNCE)
//    {
//        xor = ~xor;
//        b_state->slide_states.bottom_hold_count = 0;
//    }
//
//    set_leds(leds ^ xor);
//    return 0;
}

void* spriteMaker15_onEnter(struct BadgeState *b_state)
{
    LCDClear();
    LCDInit();
}


void* spriteMaker15_onExit(struct BadgeState *b_state)
{

    
}