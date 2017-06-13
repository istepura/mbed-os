#include "PeripheralPins.h"

/************RTC***************/
const PinMap PinMap_RTC[] = {
    {NC, OSC32KCLK, 0},
};

/************UART***************/
const PinMap PinMap_UART_TX[] = {
    {PTB1, UART_0, 7},
    {NC  ,  NC    , 0}
};

const PinMap PinMap_UART_RX[] = {
    {PTB0, UART_0, 7},
    {NC  ,  NC    , 0}
};
