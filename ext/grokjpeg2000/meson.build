grokjpeg2000_sources = [
  'gstgrokjpeg2000.c',
  'gstgrokjpeg2000dec.c',
  'gstgrokjpeg2000enc.c',
]

grokjpeg2000_cargs = []

# Check for 2.1, then 2.0
grokjpeg2000_dep = dependency('libopenjp2', version : '>=2.1', required : false)
if grokjpeg2000_dep.found()
  grokjpeg2000_cargs += ['-DHAVE_GROK_2_1']
else
  grokjpeg2000_dep = dependency('libopenjp2', required : false)
endif

if grokjpeg2000_dep.found()
  gstgrokjpeg2000 = library('gstgrokjpeg2000',
    grokjpeg2000_sources,
    c_args : gst_plugins_bad_args + grokjpeg2000_cargs,
    link_args : noseh_link_args,
    include_directories : [configinc],
    dependencies : [gst_dep, gstvideo_dep, grokjpeg2000_dep,
		    gstcodecparsers_dep],
    install : true,
    install_dir : plugins_install_dir,
  )
endif
