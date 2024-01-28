--- platforms/unix/plugins/SerialPlugin/sqUnixSerial.c.orig	2024-01-08 05:10:52 UTC
+++ platforms/unix/plugins/SerialPlugin/sqUnixSerial.c
@@ -95,10 +95,10 @@ static drDecode dataRateDecode[] = {
 #endif
 #if defined(B500000)		/* missing on GNU/Linux prior to 2.2 */
   { 500000, B500000 },
-  { 576000, B576000 },
+/*  { 576000, B576000 }, */
   { 921600, B921600 },
   { 1000000, B1000000 },
-  { 1152000, B1152000 },
+/*  { 1152000, B1152000 }, */
   { 1500000, B1500000 },
   { 2000000, B2000000 },
 #endif
