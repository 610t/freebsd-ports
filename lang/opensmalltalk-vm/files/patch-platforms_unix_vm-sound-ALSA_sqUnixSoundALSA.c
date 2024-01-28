--- platforms/unix/vm-sound-ALSA/sqUnixSoundALSA.c.orig	2024-01-08 06:25:53 UTC
+++ platforms/unix/vm-sound-ALSA/sqUnixSoundALSA.c
@@ -948,7 +948,7 @@ numDevicesOfType(int stream_type)
 
 /* in the libasound source include/sound/asound.h defines the max len as 80 */
 #define MAX_NAME_LEN 128
-static char devname[MAX_NAME_LEN];
+static char sq_devname[MAX_NAME_LEN];
 
 static char *
 nameOfNthDeviceOfType(int n, int stream_type)
@@ -997,13 +997,13 @@ nameOfNthDeviceOfType(int n, int stream_type)
 				}
 			}
 			if (n == count) {
-				strncpy(devname,snd_ctl_card_info_get_name(info),MAX_NAME_LEN);
+				strncpy(sq_devname,snd_ctl_card_info_get_name(info),MAX_NAME_LEN);
 #if 0
 				printf("snd_name '%s' -> dev_name '%s'\n",
 						snd_ctl_card_info_get_name(info),
-						devname);
+						sq_devname);
 #endif
-				return devname;
+				return sq_devname;
 			}
 			count += 1;
 		}
