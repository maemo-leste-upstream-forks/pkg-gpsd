/* This code is generated.  Do not hand-hack it! */
#include <stdio.h>
#include <string.h>

#include "gpsd.h"

const char *gpsd_maskdump(gps_mask_t set)
{
    static char buf[177];
    const struct {
	gps_mask_t      mask;
	const char      *name;
    } *sp, names[] = {
	{ONLINE_IS,	"ONLINE"},
	{TIME_IS,	"TIME"},
	{TIMERR_IS,	"TIMERR"},
	{LATLON_IS,	"LATLON"},
	{ALTITUDE_IS,	"ALTITUDE"},
	{SPEED_IS,	"SPEED"},
	{TRACK_IS,	"TRACK"},
	{CLIMB_IS,	"CLIMB"},
	{STATUS_IS,	"STATUS"},
	{MODE_IS,	"MODE"},
	{DOP_IS,	"DOP"},
	{HERR_IS,	"HERR"},
	{VERR_IS,	"VERR"},
	{PERR_IS,	"PERR"},
	{SATELLITE_IS,	"SATELLITE"},
	{RAW_IS,	"RAW"},
	{USED_IS,	"USED"},
	{SPEEDERR_IS,	"SPEEDERR"},
	{DEVICE_IS,	"DEVICE"},
	{DEVICEID_IS,	"DEVICEID"},
	{ERROR_IS,	"ERROR"},
	{RTCM2_IS,	"RTCM2"},
	{RTCM3_IS,	"RTCM3"},
	{AIS_IS,	"AIS"},
	{ATT_IS,	"ATT"},
	{PACKET_IS,	"PACKET"},
	{CLEAR_IS,	"CLEAR"},
	{REPORT_IS,	"REPORT"},
    };

    memset(buf, '\0', sizeof(buf));
    buf[0] = '{';
    for (sp = names; sp < names + sizeof(names)/sizeof(names[0]); sp++)
	if ((set & sp->mask)!=0) {
	    (void)strlcat(buf, sp->name, sizeof(buf));
	    (void)strlcat(buf, "|", sizeof(buf));
	}
    if (buf[1] != '\0')
	buf[strlen(buf)-1] = '\0';
    (void)strlcat(buf, "}", sizeof(buf));
    return buf;
}

