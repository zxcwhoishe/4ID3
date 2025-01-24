//Libraries
#include <Arduino.h>
#include <Wire.h>
#include "BluetoothSerial.h"
#include "MCP23017.h"

//Device information
String group_name = "Group4";
String device_name = "Device4";

BluetoothSerial bluetooth_serial;

#define MCP23017_ADDR 0x20
MCP23017 mcp = MCP23017(MCP23017_ADDR);
