#ifndef SETTINGS_H
#define SETTINGS_H

/* A comma-separated list of eight unsigned bytes. This is the device EUI of the transceiver board
 * which is either provided by the manufacturer or generated by The Things Network.
 */
#define SETTINGS_DEVICE_EUI \
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

/* A comma-separated list of sixteen unsigned bytes. This is the encryption key which can be
 * generated by and copied from The Things Network.
 */
#define SETTINGS_APP_KEY \
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

/* An unsigned integer. It specifies how many seconds are spent in deep sleep mode after each
 * measurement cycle to save energy.
 */
#define SETTINGS_SLEEP_TIME 10800

/* A signed integer. If this value is zero, no debugging output will be printed to the
 * console. Any other value will print debugging messages to the serial monitor.
 */
#define SETTINGS_DEBUG_MODE 0

#endif