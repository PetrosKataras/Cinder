
namespace cinder { namespace app {

const int sMousePointerWidth  = 24;
const int sMousePointerHeight = 24;
const int sMousePointerPixInc = 4;
const int sMousePointerLength = sMousePointerWidth*sMousePointerHeight*sMousePointerPixInc + 1;

const char sMousePointer[2305] = {
	0xff, 0xff, 0xff, 0x7d, 0xff, 0xff, 0xff, 0xdd, 0xff, 0xff, 0xff, 
	0x5c, 0xff, 0xff, 0xff, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
	0xd7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xef, 0xff, 0xff, 0xff, 0x91, 0xff, 0xff, 0xff, 0x35, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x05, 
	0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x58, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xfb, 
	0xfb, 0xfb, 0xff, 0xfe, 0xfe, 0xfe, 0xf3, 0xff, 0xff, 0xff, 0xc9, 
	0xff, 0xff, 0xff, 0x37, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
	0x03, 0xff, 0xff, 0xff, 0x04, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 
	0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xff, 0xff, 0xff, 0x12, 0xff, 0xff, 0xff, 0xeb, 0xfe, 
	0xfe, 0xfe, 0xff, 0xfa, 0xfa, 0xfa, 0xf3, 0xe2, 0xe2, 0xe2, 0xf7, 
	0xff, 0xff, 0xff, 0xfa, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xd2, 0xff, 0xff, 0xff, 0x46, 0xff, 0xff, 
	0xff, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
	0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 
	0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x8c, 0xfb, 0xfb, 0xfb, 0xff, 
	0xec, 0xec, 0xec, 0xfb, 0x1b, 0x1b, 0x1b, 0xe9, 0x64, 0x64, 0x64, 
	0xf5, 0xca, 0xca, 0xca, 0xf1, 0xff, 0xff, 0xff, 0xf6, 0xff, 0xff, 
	0xff, 0xff, 0xfb, 0xfb, 0xfb, 0xff, 0xfe, 0xfe, 0xfe, 0xd5, 0xff, 
	0xff, 0xff, 0x75, 0xff, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00, 0x00, 
	0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x03, 0xff, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xff, 0xff, 0xff, 0x2f, 0xff, 0xff, 0xff, 0xf2, 0xff, 0xff, 0xff, 
	0xfb, 0x7d, 0x7d, 0x7d, 0xf4, 0x00, 0x00, 0x00, 0xfe, 0x06, 0x06, 
	0x06, 0xfb, 0x33, 0x33, 0x33, 0xf4, 0xc7, 0xc7, 0xc7, 0xeb, 0xff, 
	0xff, 0xff, 0xff, 0xfb, 0xfb, 0xfb, 0xff, 0xfc, 0xfc, 0xfc, 0xff, 
	0xff, 0xff, 0xff, 0xee, 0xff, 0xff, 0xff, 0xa3, 0xff, 0xff, 0xff, 
	0x0e, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x05, 0xff, 0xff, 
	0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 
	0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xfd, 0xdf, 0xdf, 
	0xdf, 0xf2, 0x0b, 0x0b, 0x0b, 0xfb, 0x07, 0x07, 0x07, 0xfe, 0x05, 
	0x05, 0x05, 0xff, 0x00, 0x00, 0x00, 0xff, 0x1f, 0x1f, 0x1f, 0xed, 
	0xbe, 0xbe, 0xbe, 0xf1, 0xf5, 0xf5, 0xf5, 0xfc, 0xff, 0xff, 0xff, 
	0xfa, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 
	0xff, 0xa3, 0xff, 0xff, 0xff, 0x27, 0xff, 0xff, 0xff, 0x03, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x01, 
	0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 
	0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 
	0xff, 0x2e, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x47, 
	0x47, 0x47, 0xf0, 0x04, 0x04, 0x04, 0xff, 0x01, 0x01, 0x01, 0xfe, 
	0x04, 0x04, 0x04, 0xfe, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 
	0xfd, 0x27, 0x27, 0x27, 0xf6, 0x88, 0x88, 0x88, 0xf5, 0xef, 0xef, 
	0xef, 0xf4, 0xff, 0xff, 0xff, 0xfb, 0xfd, 0xfd, 0xfd, 0xff, 0xfc, 
	0xfc, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xb4, 0xff, 0xff, 0xff, 0x57, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
	0x05, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0xff, 
	0xff, 0xff, 0xca, 0xff, 0xff, 0xff, 0xff, 0xe4, 0xe4, 0xe4, 0xee, 
	0x00, 0x00, 0x00, 0xff, 0x05, 0x05, 0x05, 0xff, 0x00, 0x00, 0x00, 
	0xff, 0x00, 0x00, 0x00, 0xff, 0x01, 0x01, 0x01, 0xff, 0x00, 0x00, 
	0x00, 0xff, 0x00, 0x00, 0x00, 0xfe, 0x0d, 0x0d, 0x0d, 0xfb, 0x61, 
	0x61, 0x61, 0xf2, 0xf5, 0xf5, 0xf5, 0xf2, 0xff, 0xff, 0xff, 0xff, 
	0xfc, 0xfc, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xe0, 0xff, 0xff, 0xff, 0x6d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xff, 0xff, 0xff, 0x04, 0xff, 0xff, 0xff, 0x00, 0xff, 
	0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x03, 0xff, 0xff, 0xff, 0x3f, 
	0xfb, 0xfb, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3c, 0x3c, 0x3c, 
	0xed, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 
	0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 
	0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
	0x00, 0x00, 0x00, 0xfd, 0x58, 0x58, 0x58, 0xe7, 0xe3, 0xe3, 0xe3, 
	0xf5, 0xfd, 0xfd, 0xfd, 0xfb, 0xff, 0xff, 0xff, 0xfa, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0x69, 0xff, 
	0xff, 0xff, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xff, 0xff, 0xff, 0x03, 0xff, 0xff, 0xff, 0x09, 0xff, 0xff, 0xff, 
	0xd0, 0xfa, 0xfa, 0xfa, 0xff, 0xce, 0xce, 0xce, 0xf4, 0x00, 0x00, 
	0x00, 0xfc, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 
	0x00, 0x00, 0xff, 0x15, 0x15, 0x15, 0xf3, 0x40, 0x40, 0x40, 0xf4, 
	0x58, 0x58, 0x58, 0xf2, 0x6f, 0x6f, 0x6f, 0xf2, 0x86, 0x86, 0x86, 
	0xf5, 0x8a, 0x8a, 0x8a, 0xf6, 0xa4, 0xa4, 0xa4, 0xea, 0xff, 0xff, 
	0xff, 0xf5, 0xfe, 0xfe, 0xfe, 0xfd, 0xff, 0xff, 0xff, 0xf9, 0xff, 
	0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd0, 
	0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x70, 0xfc, 0xfc, 
	0xfc, 0xff, 0xf9, 0xf9, 0xf9, 0xfb, 0x36, 0x36, 0x36, 0xf4, 0x00, 
	0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x15, 0x15, 0x15, 0xf6, 
	0xe0, 0xe0, 0xe0, 0xf9, 0xf6, 0xf6, 0xf6, 0xfb, 0xff, 0xff, 0xff, 
	0xf8, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 
	0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xff, 0xff, 0xff, 0x14, 0xff, 0xff, 0xff, 0xec, 0xff, 
	0xff, 0xff, 0xfa, 0x95, 0x95, 0x95, 0xf5, 0x00, 0x00, 0x00, 0xfd, 
	0x00, 0x00, 0x00, 0xff, 0x3d, 0x3d, 0x3d, 0xf2, 0xf6, 0xf6, 0xf6, 
	0xfb, 0xfb, 0xfb, 0xfb, 0xfd, 0xfe, 0xfe, 0xfe, 0xf1, 0xff, 0xff, 
	0xff, 0xe8, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xd4, 0xff, 
	0xff, 0xff, 0xb5, 0xff, 0xff, 0xff, 0x95, 0xff, 0xff, 0xff, 0x74, 
	0xff, 0xff, 0xff, 0x51, 0xff, 0xff, 0xff, 0x31, 0xff, 0xff, 0xff, 
	0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x9b, 0xff, 0xff, 0xff, 0xff, 
	0xf8, 0xf8, 0xf8, 0xf6, 0x13, 0x13, 0x13, 0xf9, 0x00, 0x00, 0x00, 
	0xff, 0x54, 0x54, 0x54, 0xf2, 0xff, 0xff, 0xff, 0xf8, 0xfe, 0xfe, 
	0xfe, 0xf1, 0xff, 0xff, 0xff, 0x3a, 0xff, 0xff, 0xff, 0x06, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x02, 0xff, 0xff, 
	0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x02, 
	0xff, 0xff, 0xff, 0x08, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 
	0xfb, 0x71, 0x71, 0x71, 0xf2, 0x00, 0x00, 0x00, 0xff, 0x6c, 0x6c, 
	0x6c, 0xf3, 0xff, 0xff, 0xff, 0xf7, 0xfe, 0xfe, 0xfe, 0xe9, 0xff, 
	0xff, 0xff, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 
	0x01, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 
	0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0xff, 0xff, 0xff, 0x9b, 0xfc, 0xfc, 0xfc, 0xff, 0xff, 0xff, 
	0xff, 0xf3, 0x00, 0x00, 0x00, 0xfc, 0x82, 0x82, 0x82, 0xf6, 0xff, 
	0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xe4, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
	0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x05, 0xff, 0xff, 
	0xff, 0x23, 0xfc, 0xfc, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6a, 
	0x6a, 0x6a, 0xe7, 0x85, 0x85, 0x85, 0xf5, 0xff, 0xff, 0xff, 0xfa, 
	0xff, 0xff, 0xff, 0xd9, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xff, 0xff, 0xff, 0x02, 0xff, 0xff, 0xff, 0x02, 0xff, 
	0xff, 0xff, 0xaf, 0xfc, 0xfc, 0xfc, 0xff, 0xe6, 0xe6, 0xe6, 0xf6, 
	0xa7, 0xa7, 0xa7, 0xe9, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 
	0xbb, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x52, 
	0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfe, 0xfb, 0xff, 0xff, 0xff, 
	0xf6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9b, 0x00, 0x00, 
	0x00, 0x00, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
	0xdd, 0xff, 0xff, 0xff, 0xfa, 0xfe, 0xfe, 0xfe, 0xfd, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0x79, 0x00, 0x00, 0x00, 0x00, 0xff, 
	0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
	0x01, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x65, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0x58, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 
	0xff, 0x05, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xf6, 0xff, 
	0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x38, 
	0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x02, 0xff, 
	0xff, 0xff, 0x01, 0xff, 0xff, 0xff, 0x63, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 
	0x01, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
	0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x03, 
	0xff, 0xff, 0xff, 0x0c, 0xff, 0xff, 0xff, 0xcc, 0xff, 0xff, 0xff, 
	0xc1, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x04, 0xff, 0xff, 
	0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};


}} // namespace ci::app
