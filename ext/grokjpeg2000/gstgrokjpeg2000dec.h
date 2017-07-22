/*
 * Copyright (C) 2017 Aaron Boxer <boxerab@gmail.com>
 * Copyright (C) 2012 Collabora Ltd.
 *     Author: Sebastian Dröge <sebastian.droege@collabora.co.uk>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 */

#ifndef __GST_GROKJPEG2000_DEC_H__
#define __GST_GROKJPEG2000_DEC_H__

#include <gst/gst.h>
#include <gst/video/video.h>
#include <gst/codecparsers/gstjpeg2000sampling.h>

#include "gstgrokjpeg2000.h"

G_BEGIN_DECLS

#define GST_TYPE_GROKJPEG2000_DEC \
  (gst_grokjpeg2000_dec_get_type())
#define GST_GROKJPEG2000_DEC(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj),GST_TYPE_GROKJPEG2000_DEC,GstGrokJPEG2000Dec))
#define GST_GROKJPEG2000_DEC_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST((klass),GST_TYPE_GROKJPEG2000_DEC,GstGrokJPEG2000DecClass))
#define GST_IS_GROKJPEG2000_DEC(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj),GST_TYPE_GROKJPEG2000_DEC))
#define GST_IS_GROKJPEG2000_DEC_CLASS(obj) \
  (G_TYPE_CHECK_CLASS_TYPE((klass),GST_TYPE_GROKJPEG2000_DEC))

typedef struct _GstGrokJPEG2000Dec GstGrokJPEG2000Dec;
typedef struct _GstGrokJPEG2000DecClass GstGrokJPEG2000DecClass;

struct _GstGrokJPEG2000Dec
{
  GstVideoDecoder parent;

  /* < private > */
  GstVideoCodecState *input_state;
  GstVideoCodecState *output_state;

  OPJ_CODEC_FORMAT codec_format;
  gboolean is_jp2c;
  OPJ_COLOR_SPACE color_space;
  GstJPEG2000Sampling sampling;
  gint ncomps;

  void (*fill_frame) (GstVideoFrame *frame, opj_image_t * image);

  opj_dparameters_t params;
};

struct _GstGrokJPEG2000DecClass
{
  GstVideoDecoderClass parent_class;
};

GType gst_grokjpeg2000_dec_get_type (void);

G_END_DECLS

#endif /* __GST_GROKJPEG2000_DEC_H__ */
