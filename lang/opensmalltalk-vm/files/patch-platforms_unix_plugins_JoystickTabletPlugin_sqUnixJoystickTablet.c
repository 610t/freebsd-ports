--- platforms/unix/plugins/JoystickTabletPlugin/sqUnixJoystickTablet.c.orig	2024-01-08 05:03:07 UTC
+++ platforms/unix/plugins/JoystickTabletPlugin/sqUnixJoystickTablet.c
@@ -42,8 +42,8 @@
 #include <dirent.h>
 #include <errno.h>
 #include <poll.h>
-#include <linux/input-event-codes.h>
-#include <linux/input.h>
+#include <dev/evdev/input-event-codes.h>
+#include <dev/evdev/input.h>
 #include "JoystickTabletPlugin.h"
 
 #define DEVICE_DIR 	"/dev/input/by-id/"
