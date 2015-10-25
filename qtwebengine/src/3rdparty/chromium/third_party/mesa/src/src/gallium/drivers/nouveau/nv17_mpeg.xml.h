#ifndef ___RNNDB_NV17_MPEG_XML
#define ___RNNDB_NV17_MPEG_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
http://0x04.net/cgit/index.cgi/rules-ng-ng
git clone git://0x04.net/rules-ng-ng

The rules-ng-ng source files this header was generated from are:
- ../rnndb/nv17_mpeg.xml  (   6846 bytes, from 2011-08-08 14:21:26)
- ../rnndb/copyright.xml  (   6452 bytes, from 2011-07-15 12:42:43)
- ../rnndb/nvchipsets.xml (   3617 bytes, from 2011-07-22 11:37:48)

Copyright (C) 2006-2011 by the following authors:
- Artur Huillet <arthur.huillet@free.fr> (ahuillet)
- Ben Skeggs (darktama, darktama_)
- B. R. <koala_br@users.sourceforge.net> (koala_br)
- Carlos Martin <carlosmn@users.sf.net> (carlosmn)
- Christoph Bumiller <e0425955@student.tuwien.ac.at> (calim, chrisbmr)
- Dawid Gajownik <gajownik@users.sf.net> (gajownik)
- Dmitry Baryshkov
- Dmitry Eremin-Solenikov <lumag@users.sf.net> (lumag)
- EdB <edb_@users.sf.net> (edb_)
- Erik Waling <erikwailing@users.sf.net> (erikwaling)
- Francisco Jerez <currojerez@riseup.net> (curro)
- imirkin <imirkin@users.sf.net> (imirkin)
- jb17bsome <jb17bsome@bellsouth.net> (jb17bsome)
- Jeremy Kolb <kjeremy@users.sf.net> (kjeremy)
- Laurent Carlier <lordheavym@gmail.com> (lordheavy)
- Luca Barbieri <luca@luca-barbieri.com> (lb, lb1)
- Maarten Maathuis <madman2003@gmail.com> (stillunknown)
- Marcin Kościelnicki <koriakin@0x04.net> (mwk, koriakin)
- Mark Carey <mark.carey@gmail.com> (careym)
- Matthieu Castet <matthieu.castet@parrot.com> (mat-c)
- nvidiaman <nvidiaman@users.sf.net> (nvidiaman)
- Patrice Mandin <patmandin@gmail.com> (pmandin, pmdata)
- Pekka Paalanen <pq@iki.fi> (pq, ppaalanen)
- Peter Popov <ironpeter@users.sf.net> (ironpeter)
- Richard Hughes <hughsient@users.sf.net> (hughsient)
- Rudi Cilibrasi <cilibrar@users.sf.net> (cilibrar)
- Serge Martin
- Simon Raffeiner
- Stephane Loeuillet <leroutier@users.sf.net> (leroutier)
- Stephane Marchesin <stephane.marchesin@gmail.com> (marcheu)
- sturmflut <sturmflut@users.sf.net> (sturmflut)
- Sylvain Munaut <tnt@246tNt.com>
- Victor Stinner <victor.stinner@haypocalc.com> (haypo)
- Wladmir van der Laan <laanwj@gmail.com> (miathan6)
- Younes Manton <younes.m@gmail.com> (ymanton)

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice (including the
next paragraph) shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE COPYRIGHT OWNER(S) AND/OR ITS SUPPLIERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/


#define NV17_MPEG_CMD_NOP_OP__MASK				0xf0000000
#define NV17_MPEG_CMD_NOP_OP__SHIFT				28
#define NV17_MPEG_CMD_NOP_OP_NOP				0x10000000
#define NV17_MPEG_CMD_SURFACE_OFFSET__MASK			0x00ffffff
#define NV17_MPEG_CMD_SURFACE_OFFSET__SHIFT			0
#define NV17_MPEG_CMD_SURFACE_OFFSET__SHR			5
#define NV17_MPEG_CMD_SURFACE_PLANE__MASK			0x01000000
#define NV17_MPEG_CMD_SURFACE_PLANE__SHIFT			24
#define NV17_MPEG_CMD_SURFACE_PLANE_LUMA			0x00000000
#define NV17_MPEG_CMD_SURFACE_PLANE_CHROMA			0x01000000
#define NV17_MPEG_CMD_SURFACE_INDEX__MASK			0x0e000000
#define NV17_MPEG_CMD_SURFACE_INDEX__SHIFT			25
#define NV17_MPEG_CMD_SURFACE_OP__MASK				0xf0000000
#define NV17_MPEG_CMD_SURFACE_OP__SHIFT				28
#define NV17_MPEG_CMD_SURFACE_OP_SURFACE			0x20000000
#define NV17_MPEG_CMD_SIZE_WIDTH__MASK				0x000007ff
#define NV17_MPEG_CMD_SIZE_WIDTH__SHIFT				0
#define NV17_MPEG_CMD_SIZE_HEIGHT__MASK				0x007ff000
#define NV17_MPEG_CMD_SIZE_HEIGHT__SHIFT			12
#define NV17_MPEG_CMD_SIZE_OP__MASK				0xff000000
#define NV17_MPEG_CMD_SIZE_OP__SHIFT				24
#define NV17_MPEG_CMD_SIZE_OP_SIZE				0x30000000
#define NV17_MPEG_CMD_PITCH_PITCH__MASK				0x0000007f
#define NV17_MPEG_CMD_PITCH_PITCH__SHIFT			0
#define NV17_MPEG_CMD_PITCH_OP__MASK				0xff000000
#define NV17_MPEG_CMD_PITCH_OP__SHIFT				24
#define NV17_MPEG_CMD_PITCH_OP_PITCH				0x31000000
#define NV17_MPEG_CMD_MODE_IDCT_ENABLE				0x00000001
#define NV17_MPEG_CMD_MODE_IQ_ENABLE				0x00000010
#define NV17_MPEG_CMD_MODE_OP__MASK				0xff000000
#define NV17_MPEG_CMD_MODE_OP__SHIFT				24
#define NV17_MPEG_CMD_MODE_OP_MODE				0x32000000
#define NV17_MPEG_CMD_IQ_SETUP_QUANT_SCALE__MASK		0x000001fe
#define NV17_MPEG_CMD_IQ_SETUP_QUANT_SCALE__SHIFT		1
#define NV17_MPEG_CMD_IQ_SETUP_INTRA_DC_MULT__MASK		0x00001e00
#define NV17_MPEG_CMD_IQ_SETUP_INTRA_DC_MULT__SHIFT		9
#define NV17_MPEG_CMD_IQ_SETUP_UNK13__MASK			0x00006000
#define NV17_MPEG_CMD_IQ_SETUP_UNK13__SHIFT			13
#define NV17_MPEG_CMD_IQ_SETUP_OP__MASK				0xf0000000
#define NV17_MPEG_CMD_IQ_SETUP_OP__SHIFT			28
#define NV17_MPEG_CMD_IQ_SETUP_OP_IQ_SETUP			0x40000000
#define NV17_MPEG_CMD_IQ_MATRIX_INTRA				0x00000001
#define NV17_MPEG_CMD_IQ_MATRIX_OP__MASK			0xf0000000
#define NV17_MPEG_CMD_IQ_MATRIX_OP__SHIFT			28
#define NV17_MPEG_CMD_IQ_MATRIX_OP_IQ_MATRIX			0x50000000
#define NV17_MPEG_CMD_BLOCK_DATA_INTRA				0x00000001
#define NV17_MPEG_CMD_BLOCK_DATA_OP__MASK			0xf0000000
#define NV17_MPEG_CMD_BLOCK_DATA_OP__SHIFT			28
#define NV17_MPEG_CMD_BLOCK_DATA_OP_BLOCK_DATA			0x60000000
#define NV17_MPEG_BLOCK_DATA_LAST				0x00000001
#define NV17_MPEG_BLOCK_DATA_IDX__MASK				0x0000003e
#define NV17_MPEG_BLOCK_DATA_IDX__SHIFT				1
#define NV17_MPEG_BLOCK_DATA_IDX__SHR				1
#define NV17_MPEG_BLOCK_DATA_COORD1__MASK			0x0003ffc0
#define NV17_MPEG_BLOCK_DATA_COORD1__SHIFT			6
#define NV17_MPEG_BLOCK_DATA_COORD1_FORCE_0			0x00010000
#define NV17_MPEG_BLOCK_DATA_COORD0__MASK			0x7ff80000
#define NV17_MPEG_BLOCK_DATA_COORD0__SHIFT			19
#define NV17_MPEG_BLOCK_DATA_COORD0_FORCE_0			0x80000000
#define NV17_MPEG_CMD_SYNC_INTR					0x00000001
#define NV17_MPEG_CMD_SYNC_OP__MASK				0xff000000
#define NV17_MPEG_CMD_SYNC_OP__SHIFT				24
#define NV17_MPEG_CMD_SYNC_OP_SYNC				0x70000000
#define NV17_MPEG_CMD_SEQUENCE_OP__MASK				0xff000000
#define NV17_MPEG_CMD_SEQUENCE_OP__SHIFT			24
#define NV17_MPEG_CMD_SEQUENCE_OP_SEQUENCE			0x71000000
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_X_COORD__MASK		0x00008000
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_X_COORD__SHIFT		15
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_X_COORD_ODD		0x00000000
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_X_COORD_EVEN		0x00008000
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_RUN__MASK		0x00010000
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_RUN__SHIFT		16
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_RUN_DOUBLE		0x00000000
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_RUN_SINGLE		0x00010000
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_FIELD__MASK		0x00020000
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_FIELD__SHIFT		17
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_FIELD_TOP		0x00000000
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_FIELD_BOTTOM		0x00020000
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_TYPE__MASK		0x00080000
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_TYPE__SHIFT		19
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_TYPE_FIELD		0x00000000
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_TYPE_FRAME		0x00080000
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_SURFACE__MASK		0x00700000
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_SURFACE__SHIFT		20
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_FRAME_DCT_TYPE__MASK	0x00800000
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_FRAME_DCT_TYPE__SHIFT	23
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_FRAME_DCT_TYPE_FRAME	0x00000000
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_FRAME_DCT_TYPE_FIELD	0x00800000
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_CBP__MASK		0x0c000000
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_CBP__SHIFT		26
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_OP__MASK			0xf0000000
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_OP__SHIFT		28
#define NV17_MPEG_CMD_CHROMA_MB_HEADER_OP_CHROMA_MB_HEADER	0x80000000
#define NV17_MPEG_CMD_LUMA_MB_HEADER_X_COORD__MASK		0x00008000
#define NV17_MPEG_CMD_LUMA_MB_HEADER_X_COORD__SHIFT		15
#define NV17_MPEG_CMD_LUMA_MB_HEADER_X_COORD_ODD		0x00000000
#define NV17_MPEG_CMD_LUMA_MB_HEADER_X_COORD_EVEN		0x00008000
#define NV17_MPEG_CMD_LUMA_MB_HEADER_RUN__MASK			0x00010000
#define NV17_MPEG_CMD_LUMA_MB_HEADER_RUN__SHIFT			16
#define NV17_MPEG_CMD_LUMA_MB_HEADER_RUN_DOUBLE			0x00000000
#define NV17_MPEG_CMD_LUMA_MB_HEADER_RUN_SINGLE			0x00010000
#define NV17_MPEG_CMD_LUMA_MB_HEADER_FIELD__MASK		0x00020000
#define NV17_MPEG_CMD_LUMA_MB_HEADER_FIELD__SHIFT		17
#define NV17_MPEG_CMD_LUMA_MB_HEADER_FIELD_TOP			0x00000000
#define NV17_MPEG_CMD_LUMA_MB_HEADER_FIELD_BOTTOM		0x00020000
#define NV17_MPEG_CMD_LUMA_MB_HEADER_TYPE__MASK			0x00080000
#define NV17_MPEG_CMD_LUMA_MB_HEADER_TYPE__SHIFT		19
#define NV17_MPEG_CMD_LUMA_MB_HEADER_TYPE_FIELD			0x00000000
#define NV17_MPEG_CMD_LUMA_MB_HEADER_TYPE_FRAME			0x00080000
#define NV17_MPEG_CMD_LUMA_MB_HEADER_SURFACE__MASK		0x00700000
#define NV17_MPEG_CMD_LUMA_MB_HEADER_SURFACE__SHIFT		20
#define NV17_MPEG_CMD_LUMA_MB_HEADER_FRAME_DCT_TYPE__MASK	0x00800000
#define NV17_MPEG_CMD_LUMA_MB_HEADER_FRAME_DCT_TYPE__SHIFT	23
#define NV17_MPEG_CMD_LUMA_MB_HEADER_FRAME_DCT_TYPE_FRAME	0x00000000
#define NV17_MPEG_CMD_LUMA_MB_HEADER_FRAME_DCT_TYPE_FIELD	0x00800000
#define NV17_MPEG_CMD_LUMA_MB_HEADER_CBP__MASK			0x0f000000
#define NV17_MPEG_CMD_LUMA_MB_HEADER_CBP__SHIFT			24
#define NV17_MPEG_CMD_LUMA_MB_HEADER_OP__MASK			0xf0000000
#define NV17_MPEG_CMD_LUMA_MB_HEADER_OP__SHIFT			28
#define NV17_MPEG_CMD_LUMA_MB_HEADER_OP_LUMA_MB_HEADER		0x90000000
#define NV17_MPEG_CMD_MB_COORDS_X__MASK				0x000007ff
#define NV17_MPEG_CMD_MB_COORDS_X__SHIFT			0
#define NV17_MPEG_CMD_MB_COORDS_Y__MASK				0x007ff000
#define NV17_MPEG_CMD_MB_COORDS_Y__SHIFT			12
#define NV17_MPEG_CMD_MB_COORDS_OP__MASK			0xf0000000
#define NV17_MPEG_CMD_MB_COORDS_OP__SHIFT			28
#define NV17_MPEG_CMD_MB_COORDS_OP_MB_COORDS			0xa0000000
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_COUNT__MASK		0x00010000
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_COUNT__SHIFT		16
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_COUNT_1			0x00000000
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_COUNT_2			0x00010000
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_FIELD__MASK		0x00020000
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_FIELD__SHIFT		17
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_FIELD_TOP		0x00000000
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_FIELD_BOTTOM		0x00020000
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_TYPE__MASK		0x00080000
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_TYPE__SHIFT		19
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_TYPE_FIELD		0x00000000
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_TYPE_FRAME		0x00080000
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_SURFACE__MASK		0x00700000
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_SURFACE__SHIFT		20
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_IDX			0x00800000
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_MV_SPLIT__MASK		0x01000000
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_MV_SPLIT__SHIFT		24
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_MV_SPLIT_FIELD		0x00000000
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_MV_SPLIT_HALF_MB		0x01000000
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_Y_HALF			0x02000000
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_X_HALF			0x04000000
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_DIRECTION__MASK		0x08000000
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_DIRECTION__SHIFT		27
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_DIRECTION_FORWARD	0x00000000
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_DIRECTION_BACKWARD	0x08000000
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_OP__MASK			0xf0000000
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_OP__SHIFT		28
#define NV17_MPEG_CMD_CHROMA_MV_HEADER_OP_CHROMA_MV_HEADER	0xc0000000
#define NV17_MPEG_CMD_LUMA_MV_HEADER_COUNT__MASK		0x00010000
#define NV17_MPEG_CMD_LUMA_MV_HEADER_COUNT__SHIFT		16
#define NV17_MPEG_CMD_LUMA_MV_HEADER_COUNT_1			0x00000000
#define NV17_MPEG_CMD_LUMA_MV_HEADER_COUNT_2			0x00010000
#define NV17_MPEG_CMD_LUMA_MV_HEADER_FIELD__MASK		0x00020000
#define NV17_MPEG_CMD_LUMA_MV_HEADER_FIELD__SHIFT		17
#define NV17_MPEG_CMD_LUMA_MV_HEADER_FIELD_TOP			0x00000000
#define NV17_MPEG_CMD_LUMA_MV_HEADER_FIELD_BOTTOM		0x00020000
#define NV17_MPEG_CMD_LUMA_MV_HEADER_TYPE__MASK			0x00080000
#define NV17_MPEG_CMD_LUMA_MV_HEADER_TYPE__SHIFT		19
#define NV17_MPEG_CMD_LUMA_MV_HEADER_TYPE_FIELD			0x00000000
#define NV17_MPEG_CMD_LUMA_MV_HEADER_TYPE_FRAME			0x00080000
#define NV17_MPEG_CMD_LUMA_MV_HEADER_SURFACE__MASK		0x00700000
#define NV17_MPEG_CMD_LUMA_MV_HEADER_SURFACE__SHIFT		20
#define NV17_MPEG_CMD_LUMA_MV_HEADER_IDX			0x00800000
#define NV17_MPEG_CMD_LUMA_MV_HEADER_MV_SPLIT__MASK		0x01000000
#define NV17_MPEG_CMD_LUMA_MV_HEADER_MV_SPLIT__SHIFT		24
#define NV17_MPEG_CMD_LUMA_MV_HEADER_MV_SPLIT_FIELD		0x00000000
#define NV17_MPEG_CMD_LUMA_MV_HEADER_MV_SPLIT_HALF_MB		0x01000000
#define NV17_MPEG_CMD_LUMA_MV_HEADER_Y_HALF			0x02000000
#define NV17_MPEG_CMD_LUMA_MV_HEADER_X_HALF			0x04000000
#define NV17_MPEG_CMD_LUMA_MV_HEADER_DIRECTION__MASK		0x08000000
#define NV17_MPEG_CMD_LUMA_MV_HEADER_DIRECTION__SHIFT		27
#define NV17_MPEG_CMD_LUMA_MV_HEADER_DIRECTION_FORWARD		0x00000000
#define NV17_MPEG_CMD_LUMA_MV_HEADER_DIRECTION_BACKWARD		0x08000000
#define NV17_MPEG_CMD_LUMA_MV_HEADER_OP__MASK			0xf0000000
#define NV17_MPEG_CMD_LUMA_MV_HEADER_OP__SHIFT			28
#define NV17_MPEG_CMD_LUMA_MV_HEADER_OP_LUMA_MV_HEADER		0xd0000000
#define NV17_MPEG_CMD_MV_COORDS_X__MASK				0x000007ff
#define NV17_MPEG_CMD_MV_COORDS_X__SHIFT			0
#define NV17_MPEG_CMD_MV_COORDS_Y__MASK				0x007ff000
#define NV17_MPEG_CMD_MV_COORDS_Y__SHIFT			12
#define NV17_MPEG_CMD_MV_COORDS_OP__MASK			0xf0000000
#define NV17_MPEG_CMD_MV_COORDS_OP__SHIFT			28
#define NV17_MPEG_CMD_MV_COORDS_OP_MV_COORDS			0xe0000000

#endif /* ___RNNDB_NV17_MPEG_XML */