2867071cd2aba0cdd4722eb5a86647eebad8c517
diff --git a/libQgpsmm_global.h b/libQgpsmm_global.h
deleted file mode 100644
index 450db5a..0000000
--- a/libQgpsmm_global.h
+++ /dev/null
@@ -1,12 +0,0 @@
-#ifndef LIBQGPSMM_GLOBAL_H
-#define LIBQGPSMM_GLOBAL_H
-
-#include <QtCore/qglobal.h>
-
-#if defined(LIBQGPSMM_LIBRARY)
-#  define LIBQGPSMMSHARED_EXPORT Q_DECL_EXPORT
-#else
-#  define LIBQGPSMMSHARED_EXPORT Q_DECL_IMPORT
-#endif
-
-#endif // LIBQGPSMM_GLOBAL_H
diff --git a/libgpsmm.h b/libgpsmm.h
index 16ceac9..8f2e605 100644
--- a/libgpsmm.h
+++ b/libgpsmm.h
@@ -14,7 +14,15 @@
 #ifndef USE_QT
 class gpsmm {
 #else
-#include "libQgpsmm_global.h"
+
+#include <QtCore/qglobal.h>
+
+#if defined(LIBQGPSMM_LIBRARY)
+#  define LIBQGPSMMSHARED_EXPORT Q_DECL_EXPORT
+#else
+#  define LIBQGPSMMSHARED_EXPORT Q_DECL_IMPORT
+#endif
+
 class LIBQGPSMMSHARED_EXPORT gpsmm {
 #endif
 	public:
