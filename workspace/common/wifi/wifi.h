#include "esp_wifi_types.h"

#define EXAMPLE_ESP_WIFI_SSID "quantumnet-g"
#define EXAMPLE_ESP_WIFI_PASS "55ccfd431ac9a"
#define EXAMPLE_ESP_MAXIMUM_RETRY 3
#define ESP_WIFI_SCAN_AUTH_MODE_THRESHOLD WIFI_AUTH_WPA2_PSK

#define WIFI_CONNECTED_BIT BIT0
#define WIFI_FAIL_BIT BIT1

// #define STATIC_IP
#ifdef STATIC_IP
#define NETIF_IPADDR "192.168.11.107"
#define NETIF_NETMASK "255.255.255.0"
#define NETIF_GW "192.168.11.1"
#endif
void init_wifi(void);