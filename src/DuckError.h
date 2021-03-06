#ifndef DUCKERROR_H
#define DUCKERROR_H


/// No Error
#define DUCK_ERR_NONE 0

/// Lora module initialization error
#define DUCKLORA_ERR_BEGIN          -1000

/// Lora module configuration error
#define DUCKLORA_ERR_SETUP          -1001
/// Failure to read data from the Lora module
#define DUCKLORA_ERR_RECEIVE        -1002
/// Lora module timeout error
#define DUCKLORA_ERR_TIMEOUT        -1003
// Failed to send data
#define DUCKLORA_ERR_TRANSMIT       -1004
// Failed to handle data received from the Lora module
#define DUCKLORA_ERR_HANDLE_PACKET  -1050
// Attempted to send a message larger than 256 byrtes
#define DUCKLORA_ERR_MSG_TOO_LARGE  -1051

// Wifi network is not availble
#define DUCKWIFI_ERR_NOT_AVAILABLE  -2000
// Wifi is disconnected
#define DUCKWIFI_ERR_DISCONNECTED   -2001
// DNS initialization failed
#define  DUCKDNS_ERR_STARTING       -3000


#endif