#pragma once


#include "settings.h"
#include <Timer.h>
#include <PubSubClient.h>
#include <avdweb_VirtualDelay.h>
#include "wifi_utils.h"
#include "periphery.h"


void vMqttLoop(void);

static void _vServerConnect(void);
