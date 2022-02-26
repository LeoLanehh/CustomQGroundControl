/* GStreamer
 * Copyright (C) <2007> Stefan Kost <ensonic@users.sf.net>
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
 */

#ifndef __GST_IIR_EQUALIZER_10BANDS__
#define __GST_IIR_EQUALIZER_10BANDS__

#include "gstiirequalizer.h"

typedef struct _GstIirEqualizer10Bands GstIirEqualizer10Bands;
typedef struct _GstIirEqualizer10BandsClass GstIirEqualizer10BandsClass;

#define GST_TYPE_IIR_EQUALIZER_10BANDS \
  (gst_iir_equalizer_10bands_get_type())
#define GST_IIR_EQUALIZER_10BANDS(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj),GST_TYPE_IIR_EQUALIZER_10BANDS,GstIirEqualizer10Bands))
#define GST_IIR_EQUALIZER_10BANDS_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST((klass),GST_TYPE_IIR_EQUALIZER_10BANDS,GstIirEqualizer10BandsClass))
#define GST_IS_IIR_EQUALIZER_10BANDS(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj),GST_TYPE_IIR_EQUALIZER_10BANDS))
#define GST_IS_IIR_EQUALIZER_10BANDS_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE((klass),GST_TYPE_IIR_EQUALIZER_10BANDS))

struct _GstIirEqualizer10Bands
{
  GstIirEqualizer equalizer;
};

struct _GstIirEqualizer10BandsClass
{
  GstIirEqualizerClass equalizer_class;
};

extern GType gst_iir_equalizer_10bands_get_type(void);

#endif /* __GST_IIR_EQUALIZER_10BANDS__ */
