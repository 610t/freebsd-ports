--- platforms/unix/plugins/JoystickTabletPlugin/sqUnixJoystickTablet.c.orig	2023-12-18 14:41:18 UTC
+++ platforms/unix/plugins/JoystickTabletPlugin/sqUnixJoystickTablet.c
@@ -40,7 +40,7 @@
 #include <errno.h>
 #include <poll.h>
 #if defined(HAVE_LINUX_INPUT_H)
-#include <linux/input.h>
+#include <dev/evdev/input.h>
 #else
 #error Not currently supported
 #endif
