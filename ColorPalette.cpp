#include "ImageConverter.h"

void ImageConverter::fillArrays()
{
	grayScale[0] = { 0,0,0 };
	grayScale[1] = { 4,4,4 };
	grayScale[2] = { 8,8,8 };
	grayScale[3] = { 12,12,12 };
	grayScale[4] = { 16,16,16 };
	grayScale[5] = { 20,20,20 };
	grayScale[6] = { 24,24,24 };
	grayScale[7] = { 28,28,28 };
	grayScale[8] = { 32,32,32 };
	grayScale[9] = { 36,36,36 };
	grayScale[10] = { 40,40,40 };
	grayScale[11] = { 45,45,45 };
	grayScale[12] = { 49,49,49 };
	grayScale[13] = { 53,53,53 };
	grayScale[14] = { 57,57,57 };
	grayScale[15] = { 61,61,61 };
	grayScale[16] = { 65,65,65 };
	grayScale[17] = { 69,69,69 };
	grayScale[18] = { 73,73,73 };
	grayScale[19] = { 77,77,77 };
	grayScale[20] = { 81,81,81 };
	grayScale[21] = { 85,85,85 };
	grayScale[22] = { 89,89,89 };
	grayScale[23] = { 93,93,93 };
	grayScale[24] = { 97,97,97 };
	grayScale[25] = { 101,101,101 };
	grayScale[26] = { 105,105,105 };
	grayScale[27] = { 109,109,109 };
	grayScale[28] = { 113,113,113 };
	grayScale[29] = { 117,117,117 };
	grayScale[30] = { 121,121,121 };
	grayScale[31] = { 125,125,125 };
	grayScale[32] = { 130,130,130 };
	grayScale[33] = { 134,134,134 };
	grayScale[34] = { 138,138,138 };
	grayScale[35] = { 142,142,142 };
	grayScale[36] = { 146,146,146 };
	grayScale[37] = { 150,150,150 };
	grayScale[38] = { 154,154,154 };
	grayScale[39] = { 158,158,158 };
	grayScale[40] = { 162,162,162 };
	grayScale[41] = { 166,166,166 };
	grayScale[42] = { 170,170,170 };
	grayScale[43] = { 174,174,174 };
	grayScale[44] = { 178,178,178 };
	grayScale[45] = { 182,182,182 };
	grayScale[46] = { 186,186,186 };
	grayScale[47] = { 190,190,190 };
	grayScale[48] = { 194,194,194 };
	grayScale[49] = { 198,198,198 };
	grayScale[50] = { 202,202,202 };
	grayScale[51] = { 206,206,206 };
	grayScale[52] = { 210,210,210 };
	grayScale[53] = { 215,215,215 };
	grayScale[54] = { 219,219,219 };
	grayScale[55] = { 223,223,223 };
	grayScale[56] = { 227,227,227 };
	grayScale[57] = { 231,231,231 };
	grayScale[58] = { 235,235,235 };
	grayScale[59] = { 239,239,239 };
	grayScale[60] = { 243,243,243 };
	grayScale[61] = { 247,247,247 };
	grayScale[62] = { 251,251,251 };
	grayScale[63] = { 255,255,255 };

	predefined[0] = { 0,0,0 };
	predefined[1] = { 0,0,84 };
	predefined[2] = { 0,0,168 };
	predefined[3] = { 0,0,252 };
	predefined[4] = { 0,84,0 };
	predefined[5] = { 0,84,84 };
	predefined[6] = { 0,84,168 };
	predefined[7] = { 0,84,252 };
	predefined[8] = { 0,168,0 };
	predefined[9] = { 0,168,84 };
	predefined[10] = { 0,168,168 };
	predefined[11] = { 0,168,252 };
	predefined[12] = { 0,252,0 };
	predefined[13] = { 0,252,84 };
	predefined[14] = { 0,252,168 };
	predefined[15] = { 0,252,252 };
	predefined[16] = { 84,0,0 };
	predefined[17] = { 84,0,84 };
	predefined[18] = { 84,0,168 };
	predefined[19] = { 84,0,252 };
	predefined[20] = { 84,84,0 };
	predefined[21] = { 84,84,84 };
	predefined[22] = { 84,84,168 };
	predefined[23] = { 84,84,252 };
	predefined[24] = { 84,168,0 };
	predefined[25] = { 84,168,84 };
	predefined[26] = { 84,168,168 };
	predefined[27] = { 84,168,252 };
	predefined[28] = { 84,252,0 };
	predefined[29] = { 84,252,84 };
	predefined[30] = { 84,252,168 };
	predefined[31] = { 84,252,252 };
	predefined[32] = { 168,0,0 };
	predefined[33] = { 168,0,84 };
	predefined[34] = { 168,0,168 };
	predefined[35] = { 168,0,252 };
	predefined[36] = { 168,84,0 };
	predefined[37] = { 168,84,84 };
	predefined[38] = { 168,84,168 };
	predefined[39] = { 168,84,252 };
	predefined[40] = { 168,168,0 };
	predefined[41] = { 168,168,84 };
	predefined[42] = { 168,168,168 };
	predefined[43] = { 168,168,252 };
	predefined[44] = { 168,252,0 };
	predefined[45] = { 168,252,84 };
	predefined[46] = { 168,252,168 };
	predefined[47] = { 168,252,252 };
	predefined[48] = { 252,0,0 };
	predefined[49] = { 252,0,84 };
	predefined[50] = { 252,0,168 };
	predefined[51] = { 252,0,252 };
	predefined[52] = { 252,84,0 };
	predefined[53] = { 252,84,84 };
	predefined[54] = { 252,84,168 };
	predefined[55] = { 252,84,252 };
	predefined[56] = { 252,168,0 };
	predefined[57] = { 252,168,84 };
	predefined[58] = { 252,168,168 };
	predefined[59] = { 252,168,252 };
	predefined[60] = { 252,252,0 };
	predefined[61] = { 252,252,84 };
	predefined[62] = { 252,252,168 };
	predefined[63] = { 252,252,252 };

	fillDedicatedColors();
}

void ImageConverter::fillDedicatedColors()
{
	//////////////////////tu ta funkcja z do�u od G�d�by
	//changePalette(SDL_Color** pixelMap);
}
struct Pixel24 {
	char R;
	char G;
	char B;
};

struct Pixel24List {
	Pixel24 pixel;
	Pixel24List* next;
};
Pixel24 rgbmin;
Pixel24 rgbmax;
int lsize;

Pixel24List* PList = NULL;

Pixel24List* getListElement(int index) {
	int i = 0;
	Pixel24List* toReturn = PList;
	while (i < index) {
		i++;
		toReturn = toReturn->next;
	}
	return toReturn;
}

void ImageConverter::changePalette(SDL_Color** pixelMap) {
	// Sort
	char r = rgbmax.R - rgbmin.R;
	char g = rgbmax.G - rgbmin.G;
	char b = rgbmax.B - rgbmin.B;
	Pixel24List* now = PList;
	Pixel24List* prev = NULL;

	for (int i = 0; i < imageHeight; i++) {
		for (int j = 0; j < imageWidth; j++) {
			if (r >= g && r >= b) { // R
				Pixel24List* n = (Pixel24List*)malloc(sizeof(Pixel24List));
				n->pixel.R = pixelMap[i][j].r;
				n->pixel.G = pixelMap[i][j].g;
				n->pixel.B = pixelMap[i][j].b;
				n->next = NULL;
				if (PList == NULL) {
					PList = n;
				}
				else {
					prev = NULL;
					now = PList;
					while (now->next != NULL) {
						if (now->pixel.R < n->pixel.R) {
							prev = now;
							now = now->next;
						}
						else
							break;
					}
					n->next = now;
					if (prev != NULL)
						prev->next = n;
					else
						PList = n;
				}
				lsize++;
			}
			else if (g >= r && g >= b) { // G
				Pixel24List* n = (Pixel24List*)malloc(sizeof(Pixel24List));
				n->pixel.R = pixelMap[i][j].r;
				n->pixel.G = pixelMap[i][j].g;
				n->pixel.B = pixelMap[i][j].b;
				n->next = NULL;
				if (PList == NULL) {
					PList = n;
				}
				else {
					prev = NULL;
					now = PList;
					while (now->next != NULL) {
						if (now->pixel.G < n->pixel.G) {
							prev = now;
							now = now->next;
						}
						else
							break;
					}
					n->next = now;
					if (prev != NULL)
						prev->next = n;
					else
						PList = n;
				}
				lsize++;
			}
			else { // B
				Pixel24List* n = (Pixel24List*)malloc(sizeof(Pixel24List));
				n->pixel.R = pixelMap[i][j].r;
				n->pixel.G = pixelMap[i][j].g;
				n->pixel.B = pixelMap[i][j].b;
				n->next = NULL;
				if (PList == NULL) {
					PList = n;
				}
				else {
					prev = NULL;
					now = PList;
					while (now->next != NULL) {
						if (now->pixel.B < n->pixel.B) {
							prev = now;
							now = now->next;
						}
						else
							break;
					}
					n->next = now;
					if (prev != NULL)
						prev->next = n;
					else
						PList = n;
				}
				lsize++;
			}
		}
	}
	// Change palette
	int jump = lsize / 8;
	for (int i = 0; i < 8; i++) {
		Pixel24List* tmp = getListElement(i*jump + jump / 2);
		dedicated[i] = {(Uint8)(tmp->pixel.R - '0') , (Uint8)(tmp->pixel.G - '0'), (Uint8)(tmp->pixel.B - '0') };
	}
}