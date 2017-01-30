
// Enable debug prints to serial monitor
#define MY_DEBUG

// Enable and select radio type attached
#define MY_RADIO_NRF24
//#define MY_RADIO_RFM69

// Enable repeater functionality for this node
//#define MY_REPEATER_FEATURE

#include <MySensors.h>


void before()
{
}

void setup()
{

}

void presentation()
{
    // Send the sketch version information to the gateway and Controller
    sendSketchInfo("RepeaterOnly", "11.0");

}


void loop()
{

}


