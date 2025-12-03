/*
 * File:   main.c
 * Author: Admin
 *
 * Created on 25 June, 2025, 10:59 PM
 */


#include <xc.h>
#include "clcd.h"
#pragma config WDTE = OFF

static void int_config(void) {
    init_clcd();
}

void main(void) {
    init_config():
    
    while (1){
        clcd_putch('a', LINE1(3));
        clcd_print("Hello",LINE4(5));
    }
    return;
}
