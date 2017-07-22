plugin_LTLIBRARIES = libgstgrokjpeg2000.la

libgstgrokjpeg2000_la_SOURCES = gstgrokjpeg2000dec.c gstgrokjpeg2000enc.c gstgrokjpeg2000.c
libgstgrokjpeg2000_la_CFLAGS = $(GST_PLUGINS_BAD_CFLAGS) \
	$(GST_PLUGINS_BASE_CFLAGS) $(GST_CFLAGS) $(OPENJPEG_CFLAGS)
libgstgrokjpeg2000_la_LIBADD = \
	$(top_builddir)/gst-libs/gst/codecparsers/libgstcodecparsers-$(GST_API_VERSION).la \
	$(GST_PLUGINS_BASE_LIBS) -lgstvideo-$(GST_API_VERSION) \
	$(GST_LIBS) $(OPENJPEG_LIBS)
libgstgrokjpeg2000_la_LDFLAGS = $(GST_PLUGIN_LDFLAGS)

noinst_HEADERS = \
	gstgrokjpeg2000dec.h \
	gstgrokjpeg2000enc.h \
	gstgrokjpeg2000.h
