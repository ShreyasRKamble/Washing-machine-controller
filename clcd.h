/*
 * File:   clcd.h
 * Author: Admin
 *
 * Created on 25 June, 2025, 11:18 PM
 */

#ifndef CLCD_H
#define CLCD_H

#define _XTAL_FREQ             20000000

#define CLCD_DATA_PORT_DDR     TRISD
#define CLCD_RS_DDR            TRISE2
#define CLCD_EN_DDR            TRISE1

#define CLCD_DATA_PORT         PORTD
#define CLCD_RS                RE2
#define CLCD_EN                RE1

#define INST_MODE              0
#define DATA_MODE              1



#include <xc.h>

void main(void) {
    return;
}
