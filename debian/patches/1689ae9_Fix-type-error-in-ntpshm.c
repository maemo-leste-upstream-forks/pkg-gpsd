From 1689ae9d80e3f11ae6508e5008ae5b6797eef23a Mon Sep 17 00:00:00 2001
From: "Gary E. Miller" <gem@rellim.com>
Date: Wed, 9 May 2012 14:43:05 -0700
Subject: [PATCH] Fix type error in ntpshm.c Found by: Beat Bolli
 <bbolli@ewanet.ch>

---
 ntpshm.c |    2 +-
 1 file changed, 1 insertion(+), 1 deletion(-)

diff --git a/ntpshm.c b/ntpshm.c
index 6a6f741..d52c18f 100644
--- a/ntpshm.c
+++ b/ntpshm.c
@@ -451,7 +451,7 @@ static int init_kernel_pps(struct gps_device_t *session) {
     int ldisc = 18;   /* the PPS line discipline */
     pps_params_t pp;
     glob_t globbuf;
-    int i;
+    size_t i;             /* to match type of globbuf.gl_pathc */
     char pps_num = 0;     /* /dev/pps[pps_num] is our device */
     char path[GPS_PATH_MAX] = "";
 
-- 
1.7.10

