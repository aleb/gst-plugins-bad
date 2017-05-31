plugin_LTLIBRARIES = libgstimagesequencesrc.la

libgstimagesequencesrc_la_SOURCES = \
	gstimagesequencesrc.c \
	plugin.c
libgstimagesequencesrc_la_CFLAGS = $(GST_PLUGINS_BASE_CFLAGS) $(GST_BASE_CFLAGS) $(GST_CFLAGS) $(GIO_CFLAGS)
libgstimagesequencesrc_la_LIBADD = $(GST_PLUGINS_BASE_LIBS) -lgstvideo-@GST_API_VERSION@ $(GST_BASE_LIBS) $(GST_LIBS) $(GIO_LIBS)
libgstimagesequencesrc_la_LDFLAGS = $(GST_PLUGIN_LDFLAGS)
libgstimagesequencesrc_la_LIBTOOLFLAGS = $(GST_PLUGIN_LIBTOOLFLAGS)

noinst_HEADERS = gstimagesequencesrc.h
