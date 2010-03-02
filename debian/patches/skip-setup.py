--- a/setup.py
+++ b/setup.py
@@ -7,6 +7,10 @@ from distutils.core import setup, Extens
 import os
 import sys
 
+# workaround to skip building Python related stuff
+if os.environ.get('SKIP_SETUP_PY'):
+    sys.exit(0)
+
 # For VPATH builds, this script must be run from $(srcdir) with the
 # abs_builddir environment variable set to the location of the build
 # directory.  This is necessary because Python's distutils package
