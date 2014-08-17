#ifndef __TIGR_INTERNAL_H__
#define __TIGR_INTERNAL_H__

#define _CRT_SECURE_NO_WARNINGS FUCK_YOU

// Creates a new bitmap, with extra payload bytes.
Tigr *tigrBitmap2(int w, int h, int extra);

// Calculates the biggest scale that a bitmap can fit into an area at.
int tigrCalcScale(int bmpW, int bmpH, int areaW, int areaH);

// Calculates the correct position for a bitmap to fit into a window.
void tigrPosition(Tigr *bmp, int scale, int windowW, int windowH, int out[4]);

#endif // __TIGR_INTERNAL_H__